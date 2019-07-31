#ifndef HOUSEHOLDELECTRICAL_H
#define HOUSEHOLDELECTRICAL_H

#include <QDialog>
#include "myserialport.h"
#include "channel.h"

namespace Ui {
class HouseholdElectrical;
}

class HouseholdElectrical : public QDialog
{
    Q_OBJECT

public:
    explicit HouseholdElectrical(QWidget *parent = nullptr, MySerialPort* serial = nullptr, Channel* channel = nullptr);
    ~HouseholdElectrical();

private slots:
    void on_AcOpen_clicked();

private:
    Ui::HouseholdElectrical *ui;
    MySerialPort* serial_;
    Channel* channel_;
};

#endif // HOUSEHOLDELECTRICAL_H
