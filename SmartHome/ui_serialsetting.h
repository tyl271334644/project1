/********************************************************************************
** Form generated from reading UI file 'serialsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSETTING_H
#define UI_SERIALSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialsetting
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *serialport;
    QComboBox *bot;
    QComboBox *data;
    QComboBox *stop;

    void setupUi(QWidget *serialsetting)
    {
        if (serialsetting->objectName().isEmpty())
            serialsetting->setObjectName(QStringLiteral("serialsetting"));
        serialsetting->resize(738, 584);
        label = new QLabel(serialsetting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 101, 31));
        label->setStyleSheet(QStringLiteral("font: 18pt \"Arial\";"));
        label_2 = new QLabel(serialsetting);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 111, 31));
        label_2->setStyleSheet(QStringLiteral("font: 18pt \"Arial\";"));
        label_4 = new QLabel(serialsetting);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 170, 121, 31));
        label_4->setStyleSheet(QStringLiteral("font: 18pt \"Arial\";"));
        label_5 = new QLabel(serialsetting);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 230, 121, 31));
        label_5->setStyleSheet(QStringLiteral("font: 18pt \"Arial\";"));
        serialport = new QComboBox(serialsetting);
        serialport->setObjectName(QStringLiteral("serialport"));
        serialport->setGeometry(QRect(190, 40, 91, 30));
        serialport->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        bot = new QComboBox(serialsetting);
        bot->setObjectName(QStringLiteral("bot"));
        bot->setGeometry(QRect(190, 100, 91, 30));
        bot->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        data = new QComboBox(serialsetting);
        data->setObjectName(QStringLiteral("data"));
        data->setGeometry(QRect(190, 170, 91, 30));
        data->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        stop = new QComboBox(serialsetting);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(190, 230, 91, 30));
        stop->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));

        retranslateUi(serialsetting);

        QMetaObject::connectSlotsByName(serialsetting);
    } // setupUi

    void retranslateUi(QWidget *serialsetting)
    {
        serialsetting->setWindowTitle(QApplication::translate("serialsetting", "Form", 0));
        label->setText(QApplication::translate("serialsetting", "\344\270\262\345\217\243\357\274\232", 0));
        label_2->setText(QApplication::translate("serialsetting", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        label_4->setText(QApplication::translate("serialsetting", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        label_5->setText(QApplication::translate("serialsetting", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        serialport->clear();
        serialport->insertItems(0, QStringList()
         << QApplication::translate("serialsetting", "COM1", 0)
         << QApplication::translate("serialsetting", "COM2", 0)
         << QApplication::translate("serialsetting", "COM3", 0)
         << QApplication::translate("serialsetting", "COM4", 0)
         << QApplication::translate("serialsetting", "COM5", 0)
        );
        bot->clear();
        bot->insertItems(0, QStringList()
         << QApplication::translate("serialsetting", "2400", 0)
         << QApplication::translate("serialsetting", "4800", 0)
         << QApplication::translate("serialsetting", "9600", 0)
         << QApplication::translate("serialsetting", "19200", 0)
         << QApplication::translate("serialsetting", "38400", 0)
         << QApplication::translate("serialsetting", "57600", 0)
        );
        data->clear();
        data->insertItems(0, QStringList()
         << QApplication::translate("serialsetting", "5", 0)
         << QApplication::translate("serialsetting", "6", 0)
         << QApplication::translate("serialsetting", "7", 0)
         << QApplication::translate("serialsetting", "8", 0)
        );
        stop->clear();
        stop->insertItems(0, QStringList()
         << QApplication::translate("serialsetting", "1", 0)
         << QApplication::translate("serialsetting", "2", 0)
         << QApplication::translate("serialsetting", "3", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class serialsetting: public Ui_serialsetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSETTING_H
