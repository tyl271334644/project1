#include "settingnav.h"
#include "ui_settingnav.h"
#include <QDebug>
#include "ui_serialsetting.h"
#include "ui_timesetting.h"
#include "mainmenu.h"
extern void appendXML(QString filepath, Channel* channel);

settingNav::settingNav(QWidget *parent, Channel* channel,MySerialPort* serial) :
    QDialog(parent),
    ui(new Ui::settingNav),
    channel_(channel),
    serial_(serial)
{
    ui->setupUi(this);
    connect(ui->backMain, SIGNAL(clicked()), this, SLOT(close()));

    navigationWidget = new NavigationWidget;
    navigationWidget->setRowHeight(50);
    navigationWidget->addItem("串口设置");
    navigationWidget->addItem("时间设置");
    navigationWidget->addItem("模式设置");
    ui->nav->addWidget(navigationWidget);

    // 串口窗口
    serialW_ = new serialsetting;
    timeW_ = new timesetting;
    QWidget* empty = new QWidget;

    // 添加串口窗口到stack
    ui->mw->addWidget(serialW_);
    ui->mw->addWidget(timeW_);
    ui->mw->setCurrentWidget(serialW_);

    // 空白页面
    ui->mw->addWidget(empty);

    connect(navigationWidget, &NavigationWidget::currentItemChanged, this, [=](const int &current){
        switch (current) {
            case 0:
                qDebug() << "串口设置";
                if(ui->mw->currentWidget() != serialW_)
                {
                    ui->mw->setCurrentWidget(serialW_);
                }
                break;
            case 1:
                 qDebug() << "时间设置";
                 if(ui->mw->currentWidget() != timeW_)
                 {
                     ui->mw->setCurrentWidget(timeW_);
                 }
                 break;
            case 2:
                if(ui->mw->currentWidget() != empty)
                {
                    ui->mw->setCurrentWidget(empty);
                }
                qDebug() << "模式设置";
                break;
        }
       });

    QStringList portNamecount = MySerialPort::getPortList();
    if(portNamecount.length() == 0){
        qDebug()<<"无可用端口";
        serialW_->ui->serialport->setCurrentIndex(0);
    }
    else{
        qDebug()<< "自动获取的可用端口为：" <<portNamecount[0];
        serialW_->ui->serialport->setCurrentText(portNamecount[0]);
    }
}

settingNav::~settingNav()
{
    delete ui;
}

void settingNav::on_apply_clicked()//应用按钮
{
    qDebug()<<"应用即会更改当前设置";

    QDateTime datetime = timeW_->ui->dateTimeEdit->dateTime();//获取用户设置的时间
    //channel-->setUsertime(datetime);
    channel_->setSystemtime(datetime);//发送

    if(ui->mw->currentWidget() == serialW_)
    {
        int baudRates = serialW_->ui->bot->currentText().toInt();
        int dataBits = serialW_->ui->data->currentText().toInt();
        int stopBits = serialW_->ui->stop->currentText().toInt();


        channel_->setportName(serialW_->ui->serialport->currentText());
        channel_->setbaudRates(baudRates);
        channel_->setdataBits(dataBits);
        channel_->setstopBits(stopBits);

        appendXML("config.xml", channel_);
        if(!serial_->GetQSerialPortPointer()->isOpen()){  //串口处于非开启状态
            serial_->InitPort(serialW_->ui->serialport->currentText(), baudRates, dataBits, stopBits);
            serial_->OpenPort();
        }

    }
}

