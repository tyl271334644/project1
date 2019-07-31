#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "util.h"
#include "preinstall.h"
#include <windows.h>
#include <QDebug>
#include "channel.h"



MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000*1);
    init();
}

MainMenu::~MainMenu()
{
    delete ui;
    delete channel_;
}

// 初始化
void MainMenu::init()
{
    channel_ =  Channel::getInstance();
    // xml读取
    ReadXML("config.xml", channel_);

    //定时线程
    windows_ = new Thread(timing_windows);
    windows_->start();
    bathroom_ = new Thread(timing_bathroom);
    bathroom_->start();
    curtain_ = new Thread(timing_curtain);
    curtain_->start();

    QString portName_ = channel_->getportName();
    int baudRates_ = channel_->getbaudRates();
    int dataBits_ = channel_->getdataBits();
    int stopBits_ = channel_->getstopBits();

    if(baudRates_ != 38400)
        channel_->setbaudRates(38400);
    if(dataBits_ != 8)
        channel_->setdataBits(8);
    if(stopBits_ != 1)
        channel_->setstopBits(1);

    QDateTime& time = channel_->getSystemtime();
    QString str = time.toString("yyyy-MM-dd hh:mm");
    ui->time->setText(str);


    //初始化串口
    serial.InitPort(portName_, baudRates_, dataBits_, stopBits_);
    if(serial.OpenPort())
        connect(serial.GetQSerialPortPointer(), SIGNAL(readyRead()), this, SLOT(reactor()));
    //打不开串口会有提示信息
}


//如果声音达到或超过阈值，发送关窗指令
void MainMenu::CheckVoice(int db)
{
    QString voice = channel_->getvoice();//获取用户阈值
    if(voice.toInt() > db){
        serial.SendData("j");  //发送关窗指令
    }
    else{
         serial.SendData("i");  //发送开窗指令
        }
}

// 灯光自动控制
void MainMenu::lightAutoController(int light)
{
    QString data = channel_->getLight();//获取用户阈值
    if(data.toInt() >= light){
        serial.SendData("e");
    }else{
        serial.SendData("f");
    }
}

//环境阈值报警
void MainMenu::AlarmHandle(int somke,int kitchen){
    if(somke>=SMOG||kitchen >= WLEVEL)
        Alarm(2);
}

void MainMenu::mainDisplay()
{

   ui->temp->display( Analysis::Data["Temperature"]);
   ui->humi->display( Analysis::Data["Humidity"]);
   ui->light_2->display( Analysis::Data["Light"]);
   ui->light_3->display( Analysis::Data["Light"]);


}

void MainMenu::process(QString &str)
{
    // 窗帘自动控制(系统时间与设定时间对比, 全局变量) yes
    //curtain();
    autocurtain();
    // 窗户自动控制(噪声强度 传感器数据)
    windowAutoController();
    // CheckVoice(db);                           //没有噪声获取
    // 床头灯自动控制(系统时间与设定时间对比 全局变量)
    //TimeLightControl();
    // 环境检测(传感器数据 阈值对比)

    //灯光自动控制
    // lightAutoController(light); // 传感器数据缺失

    // 温湿度光照数值
      mainDisplay();
     //室内温度自动控制
     AutoAirControl();
}


//---------调用的QDatetime成员----------
//#include <qdatetime.h>
//公有成员
//QDateTime ()
//静态公有成员
//QDateTime currentDateTime ()
//返回为QDateTime类型，通过toString转换为QString类型

//bool operator== ( const QDateTime & dt ) const
//如果这个日期等于d，返回真，否则返回假。

void MainMenu::TimeLightControl()
{
    //接受时间的全局变量
    QString opentime = channel_->getLampStart().toString("yyyy-MM-dd hh:mm:ss");
    QString closetime = channel_->getLampEnd().toString("yyyy-MM-dd hh:mm:ss");
    //opentime += ":00";//控制到秒，只发送一次
    //closetime += ":00";
    QDateTime datetime = QDateTime::currentDateTime();
    if(datetime.toString("yyyy-MM-dd hh:mm:ss") == opentime)
    //if(getSystemTime() == opentime)
    {
        serial.SendData("0x01");//发送床头灯开启指令
        //qDebug()<<"open";
    }
    if(datetime.toString("yyyy-MM-dd hh:mm:ss") == closetime)
    //if(getSystemTime() == closetime)
    {
        serial.SendData("0x00");//发送床头灯关闭指令
        //qDebug()<<"close";
    }
}

//支持室内温度自动控制
void MainMenu::AutoAirControl()
{
    int min = channel_->getFrontTemperature().toInt();
    int max = channel_->getEndTemperature().toInt();
    if(min >= max)
    {
        return;
    }
    if(Analysis::Data["Temperature"] >= max)
    {
        //开空调指令
        serial.SendData("h");
        //关窗户指令(要关两个窗户)
        serial.SendData("e");
        serial.SendData("f");
    }
    else if(Analysis::Data["Temperature"] <= min)
    {
        //开空调指令
        serial.SendData("h");
        //关窗户指令(要关两个窗户)
        serial.SendData("e");
        serial.SendData("f");
    }
}

/*
 * 函数名：autocurtain()
 * 描述：窗帘自动控制
 */
void MainMenu::autocurtain()
{
    QDateTime Mstart = channel_->getMcurtainStart(); //客厅窗帘开启/关闭时间
    QDateTime Mend = channel_->getMcurtainEnd();

    QDateTime Bstart = channel_->getBcurtainStart(); //卧室窗帘开启/关闭时间
    QDateTime Bend = channel_->getBcurtainEnd();

    int illumination = Analysis::Data["Light"]; //获取实时光照强度
    int threshold = channel_->getLight().toInt(); //光照阈值

    if((Mstart <= channel_->getSystemtime()) && (channel_->getSystemtime() <= Mend)){//客厅窗帘
        if(illumination >= threshold) { //光强 >= 阈值，窗帘开启
            serial.SendData("p");//发送电机开启指令
        } else { //光强 < 阈值，窗帘关闭
            serial.SendData("q");//发送电机关闭指令
        }
    }
    if(Bstart <= channel_->getSystemtime() && channel_->getSystemtime() <= Bend){//卧室窗帘
        if(illumination >= threshold) { //光强 >= 阈值，窗帘开启
            serial.SendData("x");//发送电机开启指令
        } else { //光强 < 阈值，窗帘关闭
            serial.SendData("y");//发送电机关闭指令
        }
    }
}


/*
 * 函数名：windowAutoController()
 * 描述：窗户自动控制
 */
void MainMenu::windowAutoController()
{
    QDateTime kStartTime = channel_->getBWindowOpen();//客厅窗户开启时间
    QDateTime kEndTime = channel_->getBWindowClose();//客厅窗户关闭时间
    QDateTime wStartTime = channel_->getMWindowOpen();//卧室窗户开启时间
    QDateTime wEndTime = channel_->getMWindowClose();//卧室窗户关闭时间
    QDateTime sysTime = channel_->getSystemtime();//系统时间
    //客厅窗户控制
    //判断是否在当前时间段
    if((kStartTime <= sysTime) && (sysTime <= kEndTime))
    {
        int userValue = channel_->getHumidityFront().toInt();
        int getData = Analysis::Data["Humidity"];
        //对比湿度数据和用户设定的阈值
        if(userValue <= getData)
        {
            serial.SendData("i");
        }else
        {
            serial.SendData("j");
        }
    }
    //卧室窗户控制
    //判断是否在当前时间段
    if((wStartTime <= sysTime) && (sysTime <= wEndTime))
    {
        int userValue = channel_->getHumidityFront().toInt();
        int getData = Analysis::Data["Humidity"];
        //对比湿度数据和用户设定的阈值
        if(userValue <= getData)
        {
            serial.SendData("e");
        }else
        {
            serial.SendData("f");
        }
    }
}


//void MainMenu::curtain()
//{
//    //开启、关闭时间格式转换
//    QString Bstart = channel_->getBcurtainStart().toString("yyyy-MM-dd hh:mm:ss dddd");
//    QString Bend = channel_->getBcurtainEnd().toString("yyyy-MM-dd hh:mm:ss dddd");
//    QString Mstart = channel_->getMcurtainStart().toString("yyyy-MM-dd hh:mm:ss dddd");
//    QString Mend = channel_->getMcurtainEnd().toString("yyyy-MM-dd hh:mm:ss dddd");
//    if(Bstart == getSystemTime()){
//        serial.SendData("0x1");//发送电机开启指令
//        qDebug()<<"open curtain";
//    }
//    //关闭时间内与当前时间比较
//    if(Bend == getSystemTime()){
//        serial.SendData("0x2");//发送电机关闭指令
//        qDebug()<<"close curtain";
//    }
//    if(Mstart == getSystemTime()){
//        serial.SendData("0x3");//发送电机开启指令
//        qDebug()<<"open curtain";
//    }
//    //关闭时间内与当前时间比较
//    if(Mend == getSystemTime()){
//        serial.SendData("0x4");//发送电机关闭指令
//        qDebug()<<"close curtain";
//    }
//}
void MainMenu::reactor()
{
    // 数据接收
    serial.GetQSerialPortPointer()->waitForReadyRead(10);
    QString str = serial.ReadData();
    if (str != "")
    {
        qDebug() << str;
        // 数据处理
        DataAnalysis(str);
        process(str);
    }
}

// 时间
void MainMenu::timerUpdate(void)//时钟
{
    QDateTime& time = channel_->getSystemtime();//获取时间
    time = time.addSecs(1);//时间更新
    QString str = time.toString("yyyy-MM-dd hh:mm");//转换格式
    ui->time->setText(str);//显示在主界面

    channel_->setSystemtime(time);//发送
}

void MainMenu::closeEvent(QCloseEvent*)
{
    std::cout << "exit" << std::endl;
    serial.ClosePort();
    // 保存配置到配置文件

    //线程等待退出
    windows_->shutDown();
    windows_->wait();
    bathroom_->shutDown();
    bathroom_->wait();
    curtain_->shutDown();
    curtain_->wait();
}
// 界面跳转
void MainMenu::on_light_clicked()
{
    light = new Light(nullptr, &serial, channel_);
    this->hide();
    light->show();
    light->exec();
    this->show();
}

void MainMenu::on_HouseEle_clicked()
{
    hhEl = new HouseholdElectrical(nullptr, &serial, channel_);
    this->hide();
    hhEl->show();
    hhEl->exec();
    this->show();
}

void MainMenu::on_security_clicked()
{
    secu = new Security(nullptr, &serial);
    this->hide();
    secu->show();
    secu->exec();
    this->show();
}


void MainMenu::on_setting_clicked()
{
    setting = new settingNav(nullptr, channel_,&serial);
    this->hide();
    setting->show();
    setting->exec();
    this->show();
}

void MainMenu::on_tf_clicked()
{
    tf = new TF_Menu(nullptr, &serial);
    this->hide();
    tf->show();
    tf->exec();
    this->show();
}


int MainMenu::tf_support()
{
    QString yuZhiL = Channel::getInstance()->getHumidityFront();
    int yuZhi = yuZhiL.toInt();
    int shiDu = Analysis::Data["Humidity"];
    //湿度,阈值高低,小时,分钟
    //接收拆分数据
    //转换进制
    //阈值判断
    int a = 0;
    if (shiDu <= yuZhi)//阈值内输出false
    {
    }
    else{									//阈值外输出true
        a = 1;
    }
    //时间判断
    int shiJianJieGuo = 0;
    if (a){
        QTime current_time = QTime::currentTime();
        int hour = current_time.hour();
        int minute = current_time.minute();
        if (dingShi == 0)					//通过一个函数判断状态
        {
            hourB = hour;
            minuteB = minute;
            dingShi = 1;
        }
        else{
                //进入定时状态
                if (minute - minuteB >= 15)	//运行大于15分钟
                {
                    shiJianJieGuo = 1;
                }
                if (hour > hourB && (60 - minuteB) + (minute) >= 15)
                {
                    shiJianJieGuo = 1;
                }
        }
        if (shiJianJieGuo == 1){
            serial.SendData("d");
            serial.SendData("j");
            serial.SendData("f");
            //输出风机"D"
        }
    }
    else{
        dingShi = 0;
        hourB  = 0;
        minuteB = 0;
    }

    //输出窗户
    return 0;
}
//发送serial.SendData()
//接受QString str = serial.ReadData();
//16进制转10进制
//阈值判断
