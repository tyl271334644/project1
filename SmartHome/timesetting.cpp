#include "timesetting.h"
#include "ui_timesetting.h"
#include<QDateTime>
#include "preinstall.h"
timesetting::timesetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::timesetting),
    channel_(Channel::getInstance())
{
    ui->setupUi(this);
    ui->dateTimeEdit->setDateTime(channel_->getSystemtime());
}

timesetting::~timesetting()
{
    delete ui;
}

void timesetting::on_opensummer_clicked()//夏令时开
{
    Channel* channel = Channel::getInstance();
    QDateTime ostime = channel->getSystemtime();//获取时间
    ostime = ostime.addSecs(-3600);//时间减少一小时
    channel->setSystemtime(ostime);//发送
}

void timesetting::on_closesummer_clicked()//夏令时关
{
    Channel* channel = Channel::getInstance();
    QDateTime cstime = channel->getSystemtime();
    cstime = cstime.addSecs(3600);//时间增加一小时
    channel->setSystemtime(cstime);
}
