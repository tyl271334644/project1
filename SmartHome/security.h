#ifndef SECURITY_H
#define SECURITY_H

#include <QDialog>
#include "myserialport.h"

namespace Ui {
class Security;
}

class Security : public QDialog
{
    Q_OBJECT

public:
    explicit Security(QWidget *parent = nullptr, MySerialPort* serial = nullptr);
    ~Security();

private:
    Ui::Security *ui;
    MySerialPort* serial_;
};

#endif // SECURITY_H
