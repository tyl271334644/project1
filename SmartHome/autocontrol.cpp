#include "autocontrol.h"
#include "channel.h"
#include "myserialport.h"
#include "mainmenu.h"
#include <QDebug>
#include <QDate>
#include <QTime>

//窗户定时
void timing_windows(){
             Channel* channel_ = nullptr;
             channel_ =  Channel::getInstance();
             if(channel_ != nullptr){
                 //获取卧室窗户开窗时间
                 QDateTime start_b = channel_->getBWindowOpen();

                 //获取卧室窗户关窗时间
                 QDateTime end_b = channel_->getBWindowClose();

                 //获取客厅窗户开启时间
                 QDateTime start_m = channel_->getMWindowOpen();

                 //获取客厅窗户关闭时间
                 QDateTime end_m = channel_->getMWindowClose();
                 if(start_b ==  channel_->getSystemtime()){
                      MySerialPort serial;
                      //发送卧室开窗指令
                      serial.SendData("i");
                      qDebug() <<"open bedroom windows";

                  }
                 if(end_b ==channel_->getSystemtime()){
                     MySerialPort serial;
                     //发送卧室关窗指令
                     serial.SendData("j");
                     qDebug() << "close bedroom windows";

                 }

                 if(start_m == channel_->getSystemtime()){
                     MySerialPort serial;
                     //发送客厅窗户开窗指令
                     serial.SendData("e");
                     qDebug() <<"open drawing windows";

                 }
                if(end_m ==channel_->getSystemtime()){
                    MySerialPort serial;
                    //发送客厅窗户关窗指令
                    serial.SendData("f");
                    qDebug() << "close drawing windows";

                }
             }
             else
                 qDebug()<<"数据获取异常";

}

//卫生间灯定时
void timing_bathroom(){
    Channel* channel_ = nullptr;
    channel_ = Channel::getInstance();
    QDateTime time = channel_->getSystemtime();//获取时间

     QDateTime washroomstart = channel_->getwahsroom();//获取时间

     //QString washroomstart = channel_-> getwahsroom().toString("hh:mm");
     if(time == washroomstart){
         MySerialPort serial;
         serial.SendData("a");


     }


}

//窗帘定时
void timing_curtain(){
   Channel* channel_=nullptr;   //创建获取时间变量
   channel_ =  Channel::getInstance();
    //开启、关闭时间

   QDateTime Bstart = channel_->getBcurtainStart();    //获取卧室窗帘开启时间
   QDateTime Bend = channel_->getBcurtainEnd();   //获取获取卧室窗帘关闭时间
   QDateTime Mstart = channel_->getMcurtainStart();   //获取客厅窗帘开启时间
   QDateTime Mend = channel_->getMcurtainEnd();   //获取客厅窗帘关闭时间
   QDateTime System=channel_->getSystemtime();
    if(Bstart == System){
        MySerialPort serial;
        serial.SendData("x");//发送电机开启指令
        qDebug()<<"open Bedroom curtain";
    }
    //关闭时间内与当前时间比较
    if(Bend == System){
        MySerialPort serial;
        serial.SendData("y");//发送电机关闭指令
        qDebug()<<"close Bedroom curtain";
    }
    if(Mstart == System){
        MySerialPort serial;
        serial.SendData("p");//发送电机开启指令
        qDebug()<<"open Living Room curtain";
    }
    //关闭时间内与当前时间比较
    if(Mend == System){
        MySerialPort serial;
        serial.SendData("q");//发送电机关闭指令
        qDebug()<<"close Living Room curtain";
    }
}


