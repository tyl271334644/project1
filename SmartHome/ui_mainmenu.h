/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *light;
    QLabel *label_3;
    QPushButton *HouseEle;
    QPushButton *security;
    QLCDNumber *temp;
    QLCDNumber *humi;
    QLabel *label_4;
    QLCDNumber *light_2;
    QLabel *label_6;
    QPushButton *setting;
    QLabel *label_5;
    QLCDNumber *light_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *time;
    QLabel *label_11;
    QPushButton *tf;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(1110, 670);
        MainMenu->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainMenu);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(638, 197, 201, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\346\245\267\344\275\223\";"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(415, 13, 281, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\346\245\267\344\275\223\";\n"
""));
        light = new QPushButton(centralWidget);
        light->setObjectName(QString::fromUtf8("light"));
        light->setGeometry(QRect(120, 418, 120, 120));
        light->setStyleSheet(QString::fromUtf8("border-image: url(:/lightbulb.png);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(115, 270, 201, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\346\245\267\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);
        HouseEle = new QPushButton(centralWidget);
        HouseEle->setObjectName(QString::fromUtf8("HouseEle"));
        HouseEle->setGeometry(QRect(840, 418, 120, 120));
        HouseEle->setStyleSheet(QString::fromUtf8("border-image: url(:/jiadian.png);"));
        security = new QPushButton(centralWidget);
        security->setObjectName(QString::fromUtf8("security"));
        security->setGeometry(QRect(600, 418, 120, 120));
        security->setStyleSheet(QString::fromUtf8("border-image: url(:/lock.png);"));
        temp = new QLCDNumber(centralWidget);
        temp->setObjectName(QString::fromUtf8("temp"));
        temp->setGeometry(QRect(840, 210, 91, 31));
        humi = new QLCDNumber(centralWidget);
        humi->setObjectName(QString::fromUtf8("humi"));
        humi->setGeometry(QRect(330, 210, 91, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(115, 197, 201, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\346\245\267\344\275\223\";"));
        label_4->setAlignment(Qt::AlignCenter);
        light_2 = new QLCDNumber(centralWidget);
        light_2->setObjectName(QString::fromUtf8("light_2"));
        light_2->setGeometry(QRect(330, 283, 91, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 458, 111, 71));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/calender.png);"));
        setting = new QPushButton(centralWidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(1050, 0, 50, 50));
        setting->setStyleSheet(QString::fromUtf8("border-image: url(:/sitting.png);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(638, 270, 201, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\346\245\267\344\275\223\";"));
        label_5->setAlignment(Qt::AlignCenter);
        light_3 = new QLCDNumber(centralWidget);
        light_3->setObjectName(QString::fromUtf8("light_3"));
        light_3->setGeometry(QRect(840, 283, 91, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 558, 91, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\346\245\267\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(380, 558, 91, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\346\245\267\344\275\223\";"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(600, 558, 91, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\346\245\267\344\275\223\";"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(850, 558, 91, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\346\245\267\344\275\223\";"));
        label_10->setAlignment(Qt::AlignCenter);
        time = new QLabel(centralWidget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(330, 100, 441, 51));
        time->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\346\245\267\344\275\223\";\n"
""));
        time->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(250, 100, 51, 51));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/time.png);"));
        tf = new QPushButton(centralWidget);
        tf->setObjectName(QString::fromUtf8("tf"));
        tf->setGeometry(QRect(360, 420, 120, 120));
        tf->setStyleSheet(QString::fromUtf8("border-image: url(:/paiqi.png);"));
        MainMenu->setCentralWidget(centralWidget);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "\344\270\273\350\217\234\345\215\225", nullptr));
        label_2->setText(QApplication::translate("MainMenu", "\345\256\242\345\216\205\346\270\251\345\272\246\357\274\232", nullptr));
        label->setText(QApplication::translate("MainMenu", "\346\230\223\345\256\266\346\231\272\350\203\275\345\256\266\345\261\205", nullptr));
        light->setText(QString());
        label_3->setText(QApplication::translate("MainMenu", "\345\256\242\345\216\205\346\271\277\345\272\246\357\274\232", nullptr));
        HouseEle->setText(QString());
        security->setText(QString());
        label_4->setText(QApplication::translate("MainMenu", "\345\256\242\345\216\205\345\205\211\347\205\247\357\274\232", nullptr));
        label_6->setText(QString());
        setting->setText(QString());
        label_5->setText(QApplication::translate("MainMenu", "\345\215\247\345\256\244\345\205\211\347\205\247\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainMenu", "\347\205\247\346\230\216", nullptr));
        label_8->setText(QApplication::translate("MainMenu", "\351\200\232\351\243\216", nullptr));
        label_9->setText(QApplication::translate("MainMenu", "\345\256\211\351\230\262", nullptr));
        label_10->setText(QApplication::translate("MainMenu", "\345\256\266\347\224\265", nullptr));
        time->setText(QString());
        label_11->setText(QString());
        tf->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
