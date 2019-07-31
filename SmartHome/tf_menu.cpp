#include "tf_menu.h"
#include "ui_tf_menu.h"
#include<QAbstractButton>
#include<QPushButton>
#include<QSpinBox>
#include<QDoubleSpinBox>
#include<QDateTimeEdit>
#include<QRadioButton>
#include<QButtonGroup>
#include"mainmenu.h"
#include <unistd.h>

TF_Menu::TF_Menu(QWidget *parent, MySerialPort* serial) :
    QDialog(parent),
    ui(new Ui::TF_Menu),
    channel_(Channel::getInstance()),
    serial_(serial)
{
    ui->setupUi(this);

    connect(ui->home, SIGNAL(clicked()), this, SLOT(close()));

    ui->StartTime1->setDateTime(channel_->getBcurtainStart());
    ui->StopTime1->setDateTime(channel_->getBcurtainEnd());
    ui->StartTime2->setDateTime(channel_->getBWindowOpen());
    ui->StopTime2->setDateTime(channel_->getBWindowClose());
    ui->tem_min->setValue(channel_->getFrontTemperature().toInt());
    ui->tem_max->setValue(channel_->getEndTemperature().toInt());
    ui->humidity->setValue(channel_->getHumidityFront().toDouble());
    ui->light_intensity->setValue(channel_->getLight().toInt());


    switch1 = false;//设开关状态为关闭状态
    switch2 = false;
    switch2 = false;
    switch4 = false;
    switch5 = false;
    switch6 = false;
    switch7 = false;
    switch8 = false;
    switch9 = false;
    switch10 = 0;


    //添加所属单选按钮
    group1.addButton(ui->radioButton1,1);    
    group1.addButton(ui->radioButton2,2);
    ui->radioButton2->setChecked(true);
    group2.addButton(ui->radioButton3,1);
    group2.addButton(ui->radioButton4,2);
    ui->radioButton4->setChecked(true);
    group3.addButton(ui->radioButton5,1);
    group3.addButton(ui->radioButton6,2);
    //客厅窗帘信号
    connect(ui->cur_living, &QPushButton::clicked,
            [=]()
            {
                if(switch1 == false)
                {
                    switch1 = true;
                    serial->SendData("a");
                    //执行开窗帘指令

                }else {
                    switch1 = false;
                    serial->SendData("b");
                    //执行关窗帘指令
                }
            }
            );
    //主卧窗帘信号
    connect(ui->cur_bed1, &QPushButton::clicked,
            [=]()
            {
                if(switch2 == false)
                {
                    switch2 = true;
                    serial->SendData("a");
                    //执行开窗帘指令

                }else {
                    switch2 = false;
                    serial->SendData("b");
                    //执行关窗帘指令
                }
            }
            );
    //次卧窗帘信号
    connect(ui->cur_bed2, &QPushButton::clicked,
            [=]()
            {
                if(switch3 == false)
                {
                    switch3 = true;
                    serial->SendData("a");
                    //执行开窗帘指令

                }else {
                    switch3 = false;
                    serial->SendData("b");
                    //执行关窗帘指令
                }
            }
            );
    //客厅窗户信号
    connect(ui->win_living, &QPushButton::clicked,
            [=]()
            {
                if(switch4 == false)
                {
                    switch4 = true;
                    serial->SendData("a");
                    //执行开窗帘指令

                }else {
                    switch4 = false;
                    serial->SendData("b");
                    //执行关窗帘指令
                }
            }
            );
    //主卧窗户信号
    connect(ui->win_bed1, &QPushButton::clicked,
            [=]()
            {
                if(switch5 == false)
                {
                    switch5 = true;
                    serial->SendData("a");
                    //执行开窗帘指令

                }else {
                    switch5 = false;
                    serial->SendData("b");
                    //执行关窗帘指令
                }
            }
            );
    //次卧窗户信号
    connect(ui->win_bed2, &QPushButton::clicked,
            [=]()
            {
                if(switch6 == false)
                {
                    switch6 = true;
                    serial->SendData("a");
                    //执行开窗帘指令

                }else {
                    switch6 = false;
                    serial->SendData("b");
                    //执行关窗帘指令
                }
            }
            );
    //风机信号
    connect(ui->draught, &QPushButton::clicked,
            [=]()
            {
                if(switch7 == false)
                {
                    switch7 = true;
                    //执行开窗帘指令
                   serial->SendData("a");

                }else {
                    switch7 = false;
                    //执行关窗帘指令
                    serial->SendData("b");
                }
            }
            );
    //窗帘自动模式选择信号
    connect(ui->radioButton1, &QRadioButton::clicked,
            [=]()
            {
                switch8 = true;
            }
            );
    connect(ui->radioButton2, &QRadioButton::clicked,
            [=]()
            {
                switch8 = false;
            }
            );
    //窗户自动模式选择信号
    connect(ui->radioButton3, &QRadioButton::clicked,
            [=]()
            {
                switch9 = true;
            }
            );
    connect(ui->radioButton4, &QRadioButton::clicked,
            [=]()
            {
                switch9 = false;
            }
            );
    //窗帘位置选择信号
    connect(ui->radioButton5, &QRadioButton::clicked,
            [=]()
            {
                switch11 = true;//客厅窗帘
            }
            );
    connect(ui->radioButton6, &QRadioButton::clicked,
            [=]()
            {
                switch11 = false;//卧室窗帘
            }
            );
    //窗户位置选择信号
    connect(ui->radioButton7, &QRadioButton::clicked,
            [=]()
            {
                switch12 = true;//客厅窗户
            }
            );
    connect(ui->radioButton8, &QRadioButton::clicked,
            [=]()
            {
                switch12 = false;//卧室窗户
            }
            );
    //窗帘定时开启时间信号
    connect(ui->StartTime1, &QDateTimeEdit::editingFinished,
            [=]()
            {
                if(switch8 == true)
                {
                    if(switch11 == true)
                    {
                        //客厅窗帘开启时间
                        channel_->setMcurtainStart(ui->StartTime1->dateTime());
                    }else if(switch11 == false)
                    {
                        //卧室窗帘开启时间
                        channel_->setBcurtainStart(ui->StartTime1->dateTime());
                    }

                }
            }
            );
    //窗帘定时关闭时间信号
    connect(ui->StopTime1, &QDateTimeEdit::editingFinished,
            [=]()
            {
                if(switch8 == true)
                {
                    if(switch11 == true)
                    {
                        //客厅窗帘关闭时间
                        channel_->setMcurtainEnd(ui->StopTime1->dateTime());
                    }else if(switch11 == false)
                    {
                       //卧室窗帘关闭时间
                        channel_->setBcurtainEnd(ui->StopTime1->dateTime());
                    }
                }
            }
            );
    //窗户定时开启时间信号
    connect(ui->StartTime2, &QDateTimeEdit::editingFinished,
            [=]()
            {
                if(switch9 == true)
                {
                    if(switch12 == true)
                    {
                        //客厅窗户开启时间
                        channel_->setMWindowOpen(ui->StartTime2->dateTime());

                    }else if(switch12 == false)
                    {
                        //卧室窗户开启时间
                        channel_->setBWindowOpen(ui->StartTime2->dateTime());

                    }
                }
            }
            );
    //窗户定时关闭时间信号
    connect(ui->StopTime2, &QDateTimeEdit::editingFinished,
            [=]()
            {
                if(switch9 == true)
                {
                    if(switch12 == true)
                    {
                       //客厅窗帘关闭时间
                        channel_->setMWindowClose(ui->StopTime2->dateTime());

                    }else if(switch12 == false)
                    {
                        //卧室窗帘关闭时间
                        channel_->setBWindowClose(ui->StopTime2->dateTime());
                    }
                }
            }
            );
    //温度最低值
    connect(ui->tem_min, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=]()
            {
                tem_min = ui->tem_min->value();
            }
            );
    //温度最高值
    connect(ui->tem_max, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=]()
            {
                tem_max = ui->tem_max->value();
            }
            );
    //湿度阙值
    connect(ui->humidity, static_cast<void(QDoubleSpinBox::*)(double)>(&QDoubleSpinBox::valueChanged),
            [=]()
            {
                humidity = ui->humidity->value();
            }
            );
    //光照强度阙值
    connect(ui->light_intensity, static_cast<void(QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            [=]()
            {
                light_intensity = ui->light_intensity->value();
            }
            );
    //晾衣架的开关信号
    //上升信号
    connect(ui->pole_up, &QPushButton::clicked,
            [=]()
            {
                switch10 = 1;
                serial_->SendData("a");
            }
            );
    //下降信号
    connect(ui->pole_down, &QPushButton::clicked,
            [=]()
            {
                switch10 = 2;
                serial_->SendData("b");
            }
            );
    //停止信号
    connect(ui->pole_stop, &QPushButton::clicked,
            [=]()
            {
                switch10 = 0;
                serial_->SendData("c");
            }
            );

}



TF_Menu::~TF_Menu()
{
    delete ui;
}

