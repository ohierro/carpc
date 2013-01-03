/********************************************************************************
** Form generated from reading UI file 't0.ui'
**
** Created: Tue 1. Jan 20:02:29 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T0_H
#define UI_T0_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_t0Class
{
public:
    QWidget *centralWidget;
    QPushButton *musicButton;
    QPushButton *gpsButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *configButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *t0Class)
    {
        if (t0Class->objectName().isEmpty())
            t0Class->setObjectName(QStringLiteral("t0Class"));
        t0Class->resize(837, 548);
        centralWidget = new QWidget(t0Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        musicButton = new QPushButton(centralWidget);
        musicButton->setObjectName(QStringLiteral("musicButton"));
        musicButton->setGeometry(QRect(20, 60, 256, 128));
        musicButton->setFlat(false);
        gpsButton = new QPushButton(centralWidget);
        gpsButton->setObjectName(QStringLiteral("gpsButton"));
        gpsButton->setGeometry(QRect(290, 60, 256, 128));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 60, 256, 128));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 400, 75, 23));
        configButton = new QPushButton(centralWidget);
        configButton->setObjectName(QStringLiteral("configButton"));
        configButton->setGeometry(QRect(560, 200, 256, 128));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 200, 256, 128));
        pushButton_6->setFlat(false);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(290, 200, 256, 128));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(730, 370, 90, 70));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(630, 370, 90, 70));
        t0Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(t0Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 21));
        t0Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(t0Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        t0Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(t0Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        t0Class->setStatusBar(statusBar);

        retranslateUi(t0Class);
        QObject::connect(musicButton, SIGNAL(clicked()), t0Class, SLOT(close()));

        QMetaObject::connectSlotsByName(t0Class);
    } // setupUi

    void retranslateUi(QMainWindow *t0Class)
    {
        t0Class->setWindowTitle(QApplication::translate("t0Class", "t0", 0));
        musicButton->setText(QString());
        gpsButton->setText(QString());
        pushButton_3->setText(QApplication::translate("t0Class", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("t0Class", "load style", 0));
        configButton->setText(QString());
        pushButton_6->setText(QApplication::translate("t0Class", "PushButton", 0));
        pushButton_7->setText(QApplication::translate("t0Class", "PushButton", 0));
        pushButton_8->setText(QApplication::translate("t0Class", "PushButton", 0));
        pushButton_9->setText(QApplication::translate("t0Class", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class t0Class: public Ui_t0Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T0_H
