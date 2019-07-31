#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "light.h"
#include "householdelectrical.h"
#include "security.h"
#include "myserialport.h"
#include "settingnav.h"
#include "tf_menu.h"
#include "Thread.h"
#include <iostream>

#include <QTimer>
#include <QDateTime>
#include "channel.h"
#include <QDebug>
#include<windows.h>
#include <unistd.h>
#include "thread.h"

#include "autocontrol.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();
    void closeEvent(QCloseEvent *event);
    int dingShi = 0;
    int hourB = 0;
    int minuteB = 0;
    int tf_support();

private slots:
    void on_light_clicked();

    void on_HouseEle_clicked();

    void on_security_clicked();

    void timerUpdate();

    void reactor();

    void on_setting_clicked();

    void on_tf_clicked();

private:
    Ui::MainMenu *ui;
    Light *light = nullptr;
    HouseholdElectrical *hhEl = nullptr;
    Security *secu = nullptr;
    settingNav *setting = nullptr;
    MySerialPort serial;
    Channel* channel_ = nullptr;
    TF_Menu* tf = nullptr;
    Thread *windows_ = nullptr;
    Thread *bathroom_ = nullptr;
    Thread *curtain_ = nullptr;
    void init();
    void process(QString& str);
    void CheckVoice(int db);        //检测声音
    void lightAutoController(int light);
    void AlarmHandle(int somke,int kitchen);//环境
    void curtain();
    void autocurtain(); //窗帘自动控制
    void mainDisplay();
    void TimeLightControl();
    void timingctrl();
    QTimer *timer1;
    void windowAutoController();
    void AutoAirControl();
};

#endif // MAINMENU_H
