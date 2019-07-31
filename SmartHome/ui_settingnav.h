/********************************************************************************
** Form generated from reading UI file 'settingnav.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGNAV_H
#define UI_SETTINGNAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingNav
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *nav;
    QStackedWidget *mw;
    QWidget *page;
    QWidget *page_2;
    QPushButton *backMain;
    QPushButton *apply;

    void setupUi(QDialog *settingNav)
    {
        if (settingNav->objectName().isEmpty())
            settingNav->setObjectName(QString::fromUtf8("settingNav"));
        settingNav->resize(1100, 700);
        verticalLayoutWidget = new QWidget(settingNav);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 211, 701));
        nav = new QVBoxLayout(verticalLayoutWidget);
        nav->setObjectName(QString::fromUtf8("nav"));
        nav->setContentsMargins(0, 0, 0, 0);
        mw = new QStackedWidget(settingNav);
        mw->setObjectName(QString::fromUtf8("mw"));
        mw->setGeometry(QRect(220, 0, 881, 611));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mw->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mw->addWidget(page_2);
        backMain = new QPushButton(settingNav);
        backMain->setObjectName(QString::fromUtf8("backMain"));
        backMain->setGeometry(QRect(960, 640, 100, 40));
        apply = new QPushButton(settingNav);
        apply->setObjectName(QString::fromUtf8("apply"));
        apply->setGeometry(QRect(830, 640, 100, 40));

        retranslateUi(settingNav);

        QMetaObject::connectSlotsByName(settingNav);
    } // setupUi

    void retranslateUi(QDialog *settingNav)
    {
        settingNav->setWindowTitle(QCoreApplication::translate("settingNav", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        backMain->setText(QCoreApplication::translate("settingNav", "\350\277\224\345\233\236", nullptr));
        apply->setText(QCoreApplication::translate("settingNav", "\345\272\224\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingNav: public Ui_settingNav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGNAV_H
