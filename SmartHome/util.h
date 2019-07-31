#ifndef UTIL_H
#define UTIL_H
#include <windows.h>
#include <QString>
#include <QDateTime>
#include "channel.h"
#include <stdio.h>
#include <memory.h>
#include <string>
#include <ctype.h>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QTime>
#include<windows.h>

#include<QFile>
#include<QDomDocument>//文件
#include<QDomProcessingInstruction>//格式头部
#include<QDomElement>//元素
#include<QDateTime>
#include<QTextStream>//文本流

static const char* lamps = " <lamps>";
static const char* lampe = "<lampe>";
static const char* BR_curs = "<BR_curs>";
static const char* BR_cure = "<BR_cure>";
static const char* acs = "<acs>";
static const char* ace = "<ace>";
static const char* washtimes = "<washtimes>";    //修改
static const char* washtimee = "<washtimee>";
static const char* tvs = "<tvs>";
static const char* tve = "<tve>";
static const char* LR_curs = "<LR_curs>";
static const char* LR_cure = "<LR_cure>";
static const char* heate = "<heater>";
static const char* hange = "<hanger>";
static const char* portName ="<portName>";
static const char* baudRates="<baudRate>";
static const char* dataBits="<dataBits>";
static const char* stopBits="<stopBits>";
static const char* frontTemperature="<frontTemperature>";
static const char* endTemperature="<endTemperature>";
static const char* humidityFront="<humidityFront>";
static const char* humidityEnd="<humidityEnd>";
static const char* bwindowsOpen="<bwindowsOpen>";
static const char* bwindowsClose="<bwindowsClose>";
static const char* mwindowsOpen="<mwindowsOpen>";
static const char* mwindowsClose="<mwindowsClose>";
static const char* wahsroom=" <wahsroom>";
namespace Analysis
{
    std::map<std::string,int> Data;
}
// 第三方工具
// 供其他模块调用

// 蜂鸣器



/*
    函数名：YuJing
    函数作用：预警警报
*/

void YuJing(){
    int i=0;
    while(i<2){
        Beep(1330, 600);
        Beep(1262, 600);
        i++;
    }
}
/*
    函数名：BaoJing
    函数作用：报警警报
*/

void BaoJing()
{
    int i=0;
    while(i<2){
        Beep(1319, 300);
        Beep(1047, 300);
        i++;
    }
}


/*
    函数名：Alarm
    函数作用：蜂鸣器告警
    参数：num选择告警类型的响应
*/
void Alarm(int num)
{
    switch (num)
        {
        case 1:
            YuJing();
            break;
        case 2:
            BaoJing();
        default:
            break;
        }
}

// 获取系统时间
QString getSystemTime()
{
    QDateTime time = QDateTime::currentDateTime();
    return time.toString("yyyy-MM-dd hh:mm:ss dddd");
}

bool IsContainsStr(std::string str,std::string substr){    //查询字符串上是否包含某一子字符串
    std::string::size_type idx = str.find(substr);
    if(idx!=std::string::npos){
        return true;
    }else
    {
        return false;
    }
}


// xml文件读取
/*
 * 函数名：std::string  getValuestr(std::string str)
 * 描 述：获取时间相关的信息以及串口号
 * 入 参：xml文件的一行
 * 返回值：string类型
*/
std::string  getValuestr(std::string str)
{   //获取到每一行的value值
    size_t start = str.find_first_of('>');
    size_t end = str.rfind('<')-1;
    size_t len = end-start;
    std::string value = str.substr(start+1,len);
    return value;
}
/*
 * 函数名：getValuebool()
 * 描 述：获取热水器和晾衣杆的状态
 * 入 参：xml文件的一行（str）
 * 返回值：true：热水器（热设），晾衣杆（上升）
 *       false：热水器（冷设），晾衣杆（下降）
 */
bool getValuebool(std::string  str)
{
    std::string value;
    bool state;
    size_t start = str.find_first_of('>');
    size_t end = str.rfind('<')-1;
    size_t len = end-start;
    value = str.substr(start+1,len);
    if(value == "true")
    {
        state = 1;
    }
    else
    {
        state = 0;
    }
    return state;

}
/*
 *函数名：transValueInt()
 *描 述：将分割获得的数据转换成int类型
 *用于对波特率、数据位、停止位的设置
 *入 参：string类型的XML的一行
 *返回值：整型
 */
int transValueInt(std::string str)
{
    size_t  start =str.find_first_of('>')+1;
    size_t end = str.rfind('<');
    size_t len = end-start;
    std::string val = str.substr(start,len);
    int value= std::atoi(val.c_str());  //将分割到的数据转换成int类型
    return value;

}
/*
 * 函数名：trans（）
 * 描 述：将xml文件中的时间（年月日时分）
 * 整合成QDateTime类型
 * 入 参：year，month，day，h，m
 * 返回值：QDateTime
 */
QDateTime trans(int year, int month, int day, int h, int m)
{
    QDate date(year, month, day);
    QTime time(h, m);
    return QDateTime(date, time);
}


QDateTime getSubData(std::string value)
{
    std::string str = getValuestr(value);   //整个字符串
    size_t flag = str.find_first_of('/')+1;
    std::string sub1 = str.substr(flag,str.length());   //截掉年之后的子字符串
    size_t flag1 = sub1.find_first_of('/')+1;
    std::string sub2 = sub1.substr(flag1,str.length());
    size_t flag2 = sub2.find_first_of('/')+1;
    size_t flag3 = sub2.find_first_of(' ');
    size_t flag4 = str.find_first_of(' ');
    size_t flag5 = str.find_first_of(':');

    std::string year = str.substr(0,flag);
    std::string month = sub1.substr(0,flag1);
    std::string day = sub2.substr(flag2,flag3);
    std::string hour = str.substr(flag4,flag5);
    std::string min = str.substr(flag5+1,str.length()-1);
    return (trans(atoi(year.c_str()),atoi(month.c_str()),atoi(day.c_str()),atoi(hour.c_str()),atoi(min.c_str()))) ;
}
/*
 * 函数名：ReadXML()
 * 描述：一行行读取xml文件，
 * 读到信息行提取数据，
 * 将读到的数据存入管道
 * 读完之后关闭xml文件
 * 入参：文件路径path，管道类型指针*channel
 * 返回值：无
 */
void ReadXML(const std::string& path, Channel *channel)//解析XML文件
{
    QFile file(path.c_str());//文件保存的路径
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "file open error!\n";
    }
    else
    {
        while(!file.atEnd())  //文件没有读完
        {
            QByteArray line = file.readLine();
            QString str1(line);
            std::string str;
            str = str1.toStdString();
            if (IsContainsStr(str, lamps))
            {
                channel->setLampStart(getSubData(str));
            }
            else if (IsContainsStr(str, lampe))
            {
                channel->setLampEnd(getSubData(str));
            }
            else if (IsContainsStr(str, BR_curs))
            {
                channel->setBcurtainStart(getSubData(str));
            }
            else if (IsContainsStr(str, BR_cure))
            {
                channel->setBcurtainEnd(getSubData(str));
            }
            else if(IsContainsStr(str,bwindowsOpen)){
                channel->setBWindowOpen(getSubData(str));
            }
            else if(IsContainsStr(str,bwindowsClose)){
                channel->setBWindowClose(getSubData(str));
            }
            else if(IsContainsStr(str,mwindowsOpen)){
                channel->setMWindowOpen(getSubData(str));
            }
            else if(IsContainsStr(str,mwindowsClose)){
                channel->setMWindowClose(getSubData(str));
            }
            else if(IsContainsStr(str, wahsroom)){
                channel->setMWindowClose(getSubData(str));
            }
            else if (IsContainsStr(str, acs))
            {
                channel->setAircStart(getSubData(str));
            }
            else if (IsContainsStr(str, ace))
            {
                channel->setAircEnd(getSubData(str));
            }
            else if (IsContainsStr(str, washtimes))
            {
                channel->setWashStart(getSubData(str));
            }
            else if (IsContainsStr(str, washtimee))
            {
                channel->setWashEnd(getSubData(str));
            }
            else if (IsContainsStr(str, tvs))
            {
                channel->setTvStart(getSubData(str));
            }
            else if ((IsContainsStr(str,tve) ))
            {
                channel->setTvEnd(getSubData(str));
            }
            else if (IsContainsStr(str, LR_curs))
            {
                channel->setMcurtainStart(getSubData(str));
            }
            else if (IsContainsStr(str, LR_cure))
            {
                channel->setMcurtainEnd(getSubData(str));
            }
            else if (IsContainsStr(str, heate))
            {
                channel->setHeater(getValuebool(str));
            }
            else if (IsContainsStr(str, hange))
            {
                channel->setHanger(getValuebool(str));
            }
            else if(IsContainsStr(str,portName))
            {
                std::string str1 = getValuestr(str);
                QString str2 = QString::fromStdString(str1);
                channel->setportName(str2);
            }
            else if(IsContainsStr(str,baudRates))
            {

                channel->setbaudRates(transValueInt(str));
            }
            else if(IsContainsStr(str,dataBits))
            {
                channel->setdataBits(transValueInt(str));
            }
            else if(IsContainsStr(str,stopBits))
            {
                channel->setstopBits(transValueInt(str));
            }
            else if(IsContainsStr(str,frontTemperature)){
                channel->setFrontTemperature(QString::fromStdString(getValuestr(str)));
            }
            else if(IsContainsStr(str,endTemperature)){
                 channel->setEndTemperature(QString::fromStdString(getValuestr(str)));
            }
            else if(IsContainsStr(str,humidityFront)){
                 channel->setHumidityFront(QString::fromStdString(getValuestr(str)));
            }
            else if(IsContainsStr(str,humidityEnd)){
                 channel->setHumidityEnd(QString::fromStdString(getValuestr(str)));
            }


        }
        file.close();   //读到文件末尾时，关闭文件
    }
}
// xml文件写入
void appendXML(QString filepath, Channel* channel)
{
    QFile::remove(filepath);//删除之外的xml文件
    QFile file(filepath);//file关联filepath

    QDomDocument doc;//创建一个文件对象


        bool isOK = file.open((QIODevice::WriteOnly));//创建文件并以只写方式打开
        if(true == isOK)
        {
            QDomProcessingInstruction ins;//创建xml文件头部格式
            ins = doc.createProcessingInstruction("xml","version=\'1.0\',encoding=\'UTF-8\'");
            doc.appendChild(ins);//追加元素，将ins追加进doc
            QDomElement root = doc.createElement("config");//创建根元素
            doc.appendChild(root);

              //床头灯开
                QDomElement element1 = doc.createElement("lamps");
                root.appendChild(element1);
                QDomText text1 = doc.createTextNode(channel->getLampStart().toString("yyyy/MM/dd hh:mm"));//传参
                element1.appendChild(text1);
                //床头灯关
                QDomElement element2 = doc.createElement("lampe");
                root.appendChild(element2);
                QDomText text2 = doc.createTextNode(channel->getLampEnd().toString("yyyy/MM/dd hh:mm"));//传参
                element2.appendChild(text2);
                //卧室窗帘定时开
                QDomElement element3 = doc.createElement("BR_curs");
                root.appendChild(element3);
                QDomText text3 = doc.createTextNode(channel->getBcurtainStart().toString("yyyy/MM/dd hh:mm"));//传参
                element3.appendChild(text3);
                //卧室窗帘定时关
                QDomElement element4 = doc.createElement("BR_cure");
                root.appendChild(element4);
                QDomText text4 = doc.createTextNode(channel->getBcurtainEnd().toString("yyyy/MM/dd hh:mm"));//传参
                element4.appendChild(text4);
                //空调定时开
                QDomElement element5 = doc.createElement("acs");
                root.appendChild(element5);
                QDomText text5 = doc.createTextNode(channel->getAircStart().toString("yyyy/MM/dd hh:mm"));//传参
                element5.appendChild(text5);
                //空调定时关
                QDomElement element6 = doc.createElement("ace");
                root.appendChild(element6);
                QDomText text6 = doc.createTextNode(channel->getAircEnd().toString("yyyy/MM/dd hh:mm"));//传参
                element6.appendChild(text6);
                //洗衣机开
                QDomElement element7 = doc.createElement("washtimes");
                root.appendChild(element7);
                QDomText text7 = doc.createTextNode(channel->getWashStart().toString("yyyy/MM/dd hh:mm"));//传参
                element7.appendChild(text7);
                //洗衣机关
                QDomElement element8 = doc.createElement("washtimee");
                root.appendChild(element8);
                QDomText text8 = doc.createTextNode(channel->getWashEnd().toString("yyyy/MM/dd hh:mm"));//传参
                element8.appendChild(text8);
                //电视开
                QDomElement element9 = doc.createElement("tvs");
                root.appendChild(element9);
                QDomText text9 = doc.createTextNode(channel->getTvStart().toString("yyyy/MM/dd hh:mm"));//传参
                element9.appendChild(text9);
                //电视关
                QDomElement element10 = doc.createElement("tve");
                root.appendChild(element10);
                QDomText text10 = doc.createTextNode(channel->getTvEnd().toString("yyyy/MM/dd hh:mm"));//传参
                element10.appendChild(text10);
                //客厅窗帘开
                QDomElement element11 = doc.createElement("LR_curs");
                root.appendChild(element11);
                QDomText text11 = doc.createTextNode(channel->getMcurtainStart().toString("yyyy/MM/dd hh:mm"));//传参
                element11.appendChild(text11);
                //客厅窗帘关
                QDomElement element12 = doc.createElement("LR_cure");
                root.appendChild(element12);
                QDomText text12 = doc.createTextNode(channel->getMcurtainEnd().toString("yyyy/MM/dd hh:mm"));//传参
                element12.appendChild(text12);
                //

                //热水器冷热
                QDomElement element13 = doc.createElement("heater");
                root.appendChild(element13);
                QDomText text13;
                if(channel->getHeater())
                {
                    text13 = doc.createTextNode("true");
                }else
                {
                    text13 = doc.createTextNode("false");
                }
                element13.appendChild(text13);
                //晾衣架暴晒阴干
                QDomElement element14 = doc.createElement("hanger");
                root.appendChild(element14);
                QDomText text14;
                if(channel->getHanger())
                {
                    text14 = doc.createTextNode("true");
                }else
                {
                    text14 = doc.createTextNode("false");
                }
                element14.appendChild(text14);
                //portname
                QDomElement element15 = doc.createElement("portName");
                root.appendChild(element15);
                QDomText text15 = doc.createTextNode(channel->getportName());//传参
                element15.appendChild(text15);
                //baudRate
                QDomElement element16 = doc.createElement("baudRate");
                root.appendChild(element16);
                QDomText text16 = doc.createTextNode(QString::number(channel->getbaudRates()));//传参
                element16.appendChild(text16);
                //dataBits
                QDomElement element17 = doc.createElement("dataBits");
                root.appendChild(element17);
                QDomText text17 = doc.createTextNode(QString::number(channel->getdataBits()));//传参
                element17.appendChild(text17);
                //stopBits
                QDomElement element18 = doc.createElement("stopBits");
                root.appendChild(element18);
                QDomText text18 = doc.createTextNode(QString::number(channel->getstopBits()));//传参
                element18.appendChild(text18);
                //FrontTemperature
                QDomElement element19 = doc.createElement("frontTemperature");
                root.appendChild(element19);
                QDomText text19 = doc.createTextNode(channel->getFrontTemperature());//传参
                 element19.appendChild(text19);
                //endTemperature
                QDomElement element20 = doc.createElement("endTemperature");
                root.appendChild(element20);
               QDomText text20 = doc.createTextNode(channel->getEndTemperature());//传参
                element20.appendChild(text20);
                //humidityFront
                QDomElement element21 = doc.createElement("humidityFront");
                root.appendChild(element21);
                QDomText text21 = doc.createTextNode(channel->getHumidityFront());//传参
                element21.appendChild(text21);
                //humidityEnd
                QDomElement element22 = doc.createElement("humidityEnd");
                root.appendChild(element22);
                QDomText text22 = doc.createTextNode(channel->getHumidityEnd());//传参
                element22.appendChild(text22);
                //
                QDomElement element23 = doc.createElement("bwindowsOpen");
                root.appendChild(element23);
                QDomText text23 = doc.createTextNode(channel->getBWindowOpen().toString("yyyy/MM/dd hh:mm"));//传参
                element23.appendChild(text23);

                QDomElement element24 = doc.createElement("bwindowsClose");
                root.appendChild(element24);
                QDomText text24 = doc.createTextNode(channel->getBWindowClose().toString("yyyy/MM/dd hh:mm"));//传参
                element24.appendChild(text24);

                QDomElement element25 = doc.createElement("mwindowsOpen");
                root.appendChild(element25);
                QDomText text25 = doc.createTextNode(channel->getMWindowOpen().toString("yyyy/MM/dd hh:mm"));//传参
                element25.appendChild(text25);

                QDomElement element26 = doc.createElement("mwindowsClose");
                root.appendChild(element26);
                QDomText text26 = doc.createTextNode(channel->getMWindowClose().toString("yyyy/MM/dd hh:mm"));//传参
                element26.appendChild(text26);
                //
                QDomElement element27 = doc.createElement("wahsroom");
                root.appendChild(element27);
                QDomText text27 = doc.createTextNode(channel->getMWindowClose().toString("yyyy/MM/dd hh:mm"));//传参
                element27.appendChild(text27);

                QTextStream stream(&file);//创建一个文本流，文本流关联文件
                doc.save(stream,4);//将doc放进stream里，缩进为四个字符
                file.close();//关闭文件
            }
}
/*
 * 函数名：convert_16_to_10()
 * 描述：16进制到10进制的转换
 * 入参：16进制数据str
 * 返回值：int
 */
int convert_16_to_10(std::string str){
    int data;
    sscanf(str.c_str(),"%x",&data);
    return data;
}

/*
 * 函数名：DataAnalysis(光照，温度，湿度)
 * 函数作用：对传感器接收到的数据str进行一个分析
 */
void DataAnalysis(QString &str)
{
    std::string strr = str.toStdString();
    std::string flag = strr.substr(8,2);
    if(flag == "09")
    {
        std::string temperature = strr.substr(10,2);//18
        int ret1 = convert_16_to_10(temperature);//字符串进制转换，获得一个解析值(ret)
        Analysis::Data["Temperature"] = ret1;

        std::string humidity = strr.substr(14,2);
        int ret2 = convert_16_to_10(humidity);//字符串进制转换，获得一个解析值(ret)
        Analysis::Data["Humidity"] = ret2;
    }
    if(flag == "02")
    {
        std::string Light = strr.substr(10,4);
        int ret3 = convert_16_to_10(Light);//字符串进制转换，获得一个解析值(ret)
        Analysis::Data["Light"] = ret3;
    }
}

#endif // UTIL_H
