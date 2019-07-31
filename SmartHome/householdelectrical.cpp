#include "householdelectrical.h"
#include "ui_householdelectrical.h"

HouseholdElectrical::HouseholdElectrical(QWidget *parent, MySerialPort* serial, Channel* channel) :
    QDialog(parent),
    ui(new Ui::HouseholdElectrical),
    serial_(serial),
    channel_(channel)
{
    ui->setupUi(this);
    connect(ui->backMain, SIGNAL(clicked()), this, SLOT(close()));
    ui->airc_start->setDateTime(channel_->getAircStart());    //加载空调打开时间
    ui->airc_end->setDateTime(channel_->getAircEnd());        //加载空调关闭时间
    ui->tv_start->setDateTime(channel_->getTvStart());        //加载电视打开时间
    ui->tv_end->setDateTime(channel_->getTvEnd());           //加载电视关闭时间
    ui->wash_start->setDateTime(channel_->getWashStart());    //加载洗衣机打开时间
    ui->wash_end->setDateTime(channel_->getWashEnd());      //加载洗衣机关闭时间
}

HouseholdElectrical::~HouseholdElectrical()
{
    delete ui;
}

void HouseholdElectrical::on_AcOpen_clicked()
{

}
