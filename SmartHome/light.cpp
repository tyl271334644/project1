#include "light.h"
#include "ui_light.h"
#include <QSlider>
#include <QDebug>
#include <iostream>
#include <QDebug>
#include "preinstall.h"
#include <windows.h>

Light::Light(QWidget *parent, MySerialPort* serial, Channel* channel) :
    QDialog(parent),
    ui(new Ui::Light),
    serial_(serial),
    channel_(channel)
{
    ui->setupUi(this);
    connect(ui->backMain, SIGNAL(clicked()), this, SLOT(close()));
    ui->lamp_start->setDateTime(channel_->getLampStart());
    ui->lamp_end->setDateTime(channel_->getLampEnd());

    //床头灯无极调光
    ui->horizontalSlider->setMinimum(1);//最小值
    ui->horizontalSlider->setMaximum(100);//最大值
    ui->horizontalSlider->setSingleStep(1);//步长

    //客厅顶灯无极调光
    ui->horizontalSlider_2->setMinimum(1);//最小值
    ui->horizontalSlider_2->setMaximum(100);//最大值
    ui->horizontalSlider_2->setSingleStep(1);//步长
    ui->horizontalSlider_2->setTracking(false);
}

Light::~Light()
{
    delete ui;
}

//床头灯无极调光信号触发槽函数
void Light::on_horizontalSlider_valueChanged(int value)
{
    char m[100] = {0};
    new_value =  (int)(value/10);
    if(new_value != light_level){
        light_level = new_value;
        sprintf(m,"%d",light_level);
        serial_->SendData(m);
            qDebug()<<m;
        serial_->SendData("a");                      //测试通路
    }
}

//客厅无极调光信号触发槽函数
void Light::on_horizontalSlider_2_valueChanged(int value)
{
    char s[100] = {0};
    sprintf(s,"%x",value);
    //qDebug()<<s;
    serial_->SendData(s);
    serial_->SendData("a");                      //测试通路
}


void Light::on_wahsroom_dateTimeChanged(const QDateTime &dateTime)
{
    channel_->setwahsroom(dateTime);
      qDebug()<<"opesn ";
}
