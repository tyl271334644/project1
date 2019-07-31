#ifndef SETTINGNAV_H
#define SETTINGNAV_H

#include <QDialog>
#include "navigationwidget.h"
#include "serialsetting.h"
#include "channel.h"
#include "timesetting.h"
#include "myserialport.h"

namespace Ui {
class settingNav;
}

class settingNav : public QDialog
{
    Q_OBJECT

public:
    explicit settingNav(QWidget *parent = nullptr, Channel* channel = nullptr,MySerialPort* serial = nullptr);
    ~settingNav();

private slots:
    void on_apply_clicked();

private:
    Ui::settingNav *ui;
    NavigationWidget* navigationWidget;
    serialsetting* serialW_;
    Channel* channel_;
    timesetting* timeW_;
    MySerialPort* serial_;
};

#endif // SETTINGNAV_H
