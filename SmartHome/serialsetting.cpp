#include "serialsetting.h"
#include "ui_serialsetting.h"
#include "myserialport.h"

serialsetting::serialsetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serialsetting)
{
    ui->setupUi(this);
    Channel*channel_ = Channel::getInstance();
    ui->serialport->setCurrentText(channel_->getportName());

    ui->bot->setCurrentText(QString::number(channel_->getbaudRates()));

    ui->data->setCurrentText(QString::number(channel_->getdataBits()));

    ui->stop->setCurrentText(QString::number(channel_->getstopBits()));

}

serialsetting::~serialsetting()
{
    delete ui;
}
