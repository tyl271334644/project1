#ifndef LIGHT_H
#define LIGHT_H

#include <QDialog>
#include "myserialport.h"
#include "channel.h"

namespace Ui {
class Light;
}

class Light : public QDialog
{
    Q_OBJECT
    //床头灯无极调光模块调用的全局变量定义
    int new_value;
    int light_level=0;

public:
    explicit Light(QWidget *parent = nullptr, MySerialPort* serial = nullptr, Channel* channel = nullptr);
    ~Light();

private slots:


    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_wahsroom_dateTimeChanged(const QDateTime &dateTime);

private:
    Ui::Light *ui;
    MySerialPort* serial_;
    Channel* channel_;
};

#endif // LIGHT_H
