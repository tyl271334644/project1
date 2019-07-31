#ifndef SERIALSETTING_H
#define SERIALSETTING_H

#include <QWidget>
#include "channel.h"
namespace Ui {
class serialsetting;
}

class serialsetting : public QWidget
{
    Q_OBJECT

public:
    explicit serialsetting(QWidget *parent = nullptr);
    ~serialsetting();
public:
    Ui::serialsetting *ui;
};

#endif // SERIALSETTING_H
