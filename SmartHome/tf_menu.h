#ifndef TF_MENU_H
#define TF_MENU_H

#include <QDialog>
#include "channel.h"
#include<QDateTime>
#include<QButtonGroup>
#include "myserialport.h"
namespace Ui {
class TF_Menu;
}

class TF_Menu : public QDialog
{
    Q_OBJECT

public:
    explicit TF_Menu(QWidget *parent = nullptr, MySerialPort* serial = nullptr);
    ~TF_Menu();

    bool switch1;//客厅窗帘开关
    bool switch2;//主卧窗帘开关
    bool switch3;//次卧窗帘开关
    bool switch4;//客厅窗户开关
    bool switch5;//主卧窗户开关
    bool switch6;//次卧窗户开关
    bool switch7;//风机开关
    bool switch8;//窗帘自动模式开关
    bool switch9;//窗户自动模式开关
    QButtonGroup group1,group2,group3;
    int tem_min,tem_max;//温度上下限
    double humidity;//湿度阙值
    int light_intensity;//光强阙值
    int switch10;//晾衣杆状态
    bool switch11;//需求定时的是客厅窗帘还是卧室窗帘
    bool switch12;//需求定时的是客厅窗户还是卧室窗户

private:
    Ui::TF_Menu *ui;
    Channel* channel_;
    MySerialPort* serial_;


};

#endif // TF_MENU_H
