/********************************************************************************
** Form generated from reading UI file 'light.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHT_H
#define UI_LIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Light
{
public:
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *backMain;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QDateTimeEdit *lamp_start;
    QDateTimeEdit *lamp_end;
    QDateTimeEdit *Bcurtain_end;
    QDateTimeEdit *Bcurtain_start;
    QDateTimeEdit *wahsroom;
    QPushButton *close;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QTextEdit *textEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QDialog *Light)
    {
        if (Light->objectName().isEmpty())
            Light->setObjectName(QStringLiteral("Light"));
        Light->resize(1100, 700);
        pushButton = new QPushButton(Light);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 130, 110, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        pushButton->setFont(font);
        label_5 = new QLabel(Light);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 360, 110, 30));
        label_5->setFont(font);
        label_3 = new QLabel(Light);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 360, 110, 30));
        label_3->setFont(font);
        label_2 = new QLabel(Light);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 60, 110, 30));
        label_2->setFont(font);
        label_4 = new QLabel(Light);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(680, 60, 90, 30));
        label_4->setFont(font);
        pushButton_2 = new QPushButton(Light);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 220, 110, 50));
        pushButton_2->setFont(font);
        backMain = new QPushButton(Light);
        backMain->setObjectName(QStringLiteral("backMain"));
        backMain->setGeometry(QRect(20, 530, 110, 50));
        backMain->setFont(font);
        backMain->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(Light);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 530, 110, 50));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Light);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 440, 110, 50));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(Light);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 200, 110, 50));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(Light);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 120, 110, 50));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(Light);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(690, 530, 110, 50));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(Light);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(690, 440, 110, 50));
        pushButton_8->setFont(font);
        lamp_start = new QDateTimeEdit(Light);
        lamp_start->setObjectName(QStringLiteral("lamp_start"));
        lamp_start->setGeometry(QRect(820, 200, 240, 50));
        QFont font1;
        font1.setPointSize(20);
        lamp_start->setFont(font1);
        lamp_end = new QDateTimeEdit(Light);
        lamp_end->setObjectName(QStringLiteral("lamp_end"));
        lamp_end->setGeometry(QRect(820, 120, 240, 50));
        lamp_end->setFont(font1);
        Bcurtain_end = new QDateTimeEdit(Light);
        Bcurtain_end->setObjectName(QStringLiteral("Bcurtain_end"));
        Bcurtain_end->setGeometry(QRect(340, 530, 240, 50));
        Bcurtain_end->setFont(font1);
        Bcurtain_start = new QDateTimeEdit(Light);
        Bcurtain_start->setObjectName(QStringLiteral("Bcurtain_start"));
        Bcurtain_start->setGeometry(QRect(340, 440, 240, 50));
        Bcurtain_start->setFont(font1);
        wahsroom = new QDateTimeEdit(Light);
        wahsroom->setObjectName(QStringLiteral("wahsroom"));
        wahsroom->setGeometry(QRect(830, 440, 240, 50));
        wahsroom->setFont(font1);
        close = new QPushButton(Light);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(20, 440, 110, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(13);
        close->setFont(font2);
        close->setStyleSheet(QStringLiteral(""));
        horizontalSlider = new QSlider(Light);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(790, 270, 200, 60));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(Light);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(310, 610, 200, 60));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(Light);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(-170, 550, 104, 71));
        label_6 = new QLabel(Light);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1030, 280, 40, 30));
        label_6->setFont(font);
        label_7 = new QLabel(Light);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(710, 280, 40, 30));
        label_7->setFont(font);
        label_8 = new QLabel(Light);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 620, 40, 30));
        label_8->setFont(font);
        label_9 = new QLabel(Light);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(550, 630, 40, 30));
        label_9->setFont(font);
        line = new QFrame(Light);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 345, 1100, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Light);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(590, 0, 90, 701));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Light);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(130, 0, 51, 701));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Light);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(45, 50, 50, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(30);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(-1);
        label_10 = new QLabel(Light);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(45, 120, 50, 60));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(Light);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(45, 190, 50, 60));
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(Light);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(45, 260, 50, 60));
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        retranslateUi(Light);

        QMetaObject::connectSlotsByName(Light);
    } // setupUi

    void retranslateUi(QDialog *Light)
    {
        Light->setWindowTitle(QApplication::translate("Light", "Dialog", 0));
        pushButton->setText(QApplication::translate("Light", "\346\211\223\345\274\200", 0));
        label_5->setText(QApplication::translate("Light", "\345\256\242\345\216\205\351\241\266\347\201\257", 0));
        label_3->setText(QApplication::translate("Light", "\345\215\253\347\224\237\351\227\264\347\201\257", 0));
        label_2->setText(QApplication::translate("Light", "\345\215\247\345\256\244\351\241\266\347\201\257", 0));
        label_4->setText(QApplication::translate("Light", "\345\272\212\345\244\264\347\201\257", 0));
        pushButton_2->setText(QApplication::translate("Light", "\345\205\263\351\227\255", 0));
        backMain->setText(QApplication::translate("Light", "\350\277\224\345\233\236", 0));
        pushButton_3->setText(QApplication::translate("Light", "\345\205\263\351\227\255", 0));
        pushButton_4->setText(QApplication::translate("Light", "\346\211\223\345\274\200", 0));
        pushButton_5->setText(QApplication::translate("Light", "\345\205\263\351\227\255", 0));
        pushButton_6->setText(QApplication::translate("Light", "\346\211\223\345\274\200", 0));
        pushButton_7->setText(QApplication::translate("Light", "\345\205\263\351\227\255", 0));
        pushButton_8->setText(QApplication::translate("Light", "\346\211\223\345\274\200", 0));
        lamp_start->setDisplayFormat(QApplication::translate("Light", "yyyy/M/d H:mm", 0));
        lamp_end->setDisplayFormat(QApplication::translate("Light", "yyyy/M/d H:mm", 0));
        Bcurtain_end->setDisplayFormat(QApplication::translate("Light", "yyyy/M/d H:mm", 0));
        Bcurtain_start->setDisplayFormat(QApplication::translate("Light", "yyyy/M/d H:mm", 0));
        wahsroom->setDisplayFormat(QApplication::translate("Light", "yyyy/M/d H:mm", 0));
        close->setText(QApplication::translate("Light", "\344\270\200\351\224\256\345\205\263\351\227\255\347\201\257\345\205\211", 0));
        label_6->setText(QApplication::translate("Light", "\344\272\256", 0));
        label_7->setText(QApplication::translate("Light", "\346\232\227", 0));
        label_8->setText(QApplication::translate("Light", "\346\232\227", 0));
        label_9->setText(QApplication::translate("Light", "\344\272\256", 0));
        label->setText(QApplication::translate("Light", "\347\205\247", 0));
        label_10->setText(QApplication::translate("Light", "\346\230\216", 0));
        label_11->setText(QApplication::translate("Light", "\347\263\273", 0));
        label_12->setText(QApplication::translate("Light", "\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class Light: public Ui_Light {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHT_H
