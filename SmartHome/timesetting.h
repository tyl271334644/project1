#ifndef TIMESETTING_H
#define TIMESETTING_H
#include "channel.h"
#include <QWidget>

namespace Ui {
class timesetting;
}

class timesetting : public QWidget
{
    Q_OBJECT

public:
    explicit timesetting(QWidget *parent = nullptr);
    ~timesetting();

public:
    Ui::timesetting *ui;
private slots:
    void on_opensummer_clicked();
    void on_closesummer_clicked();
private:
    Channel* channel_;
};

#endif // TIMESETTING_H
