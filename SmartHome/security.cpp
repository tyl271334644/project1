#include "security.h"
#include "ui_security.h"

Security::Security(QWidget *parent, MySerialPort* serial) :
    QDialog(parent),
    ui(new Ui::Security),
    serial_(serial)
{
    ui->setupUi(this);
    connect(ui->backMain, SIGNAL(clicked()), this, SLOT(close()));
}

Security::~Security()
{
    delete ui;
}
