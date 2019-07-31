/********************************************************************************
** Form generated from reading UI file 'timesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMESETTING_H
#define UI_TIMESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timesetting
{
public:
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QPushButton *opensummer;
    QPushButton *closesummer;

    void setupUi(QWidget *timesetting)
    {
        if (timesetting->objectName().isEmpty())
            timesetting->setObjectName(QStringLiteral("timesetting"));
        timesetting->resize(1148, 838);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(26);
        timesetting->setFont(font);
        dateTimeEdit = new QDateTimeEdit(timesetting);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(480, 290, 361, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(22);
        dateTimeEdit->setFont(font1);
        label = new QLabel(timesetting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 290, 381, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(26);
        label->setFont(font2);
        opensummer = new QPushButton(timesetting);
        opensummer->setObjectName(QStringLiteral("opensummer"));
        opensummer->setGeometry(QRect(410, 440, 181, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(20);
        opensummer->setFont(font3);
        closesummer = new QPushButton(timesetting);
        closesummer->setObjectName(QStringLiteral("closesummer"));
        closesummer->setGeometry(QRect(650, 440, 171, 41));
        closesummer->setFont(font3);

        retranslateUi(timesetting);

        QMetaObject::connectSlotsByName(timesetting);
    } // setupUi

    void retranslateUi(QWidget *timesetting)
    {
        timesetting->setWindowTitle(QApplication::translate("timesetting", "Form", 0));
        label->setText(QApplication::translate("timesetting", "\350\257\267\351\200\211\346\213\251\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264\357\274\232", 0));
        opensummer->setText(QApplication::translate("timesetting", "\345\220\257\347\224\250\345\244\217\344\273\244\346\227\266", 0));
        closesummer->setText(QApplication::translate("timesetting", "\345\205\263\351\227\255\345\244\217\344\273\244\346\227\266", 0));
    } // retranslateUi

};

namespace Ui {
    class timesetting: public Ui_timesetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMESETTING_H
