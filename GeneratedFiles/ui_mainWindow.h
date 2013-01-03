/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Tue 1. Jan 20:02:32 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QPushButton *musicButton;
    QPushButton *radioButton;
    QPushButton *mobileButton;
    QPushButton *preferencesButton;
    QPushButton *pushButton_5;
    QPushButton *gpsButton;
    QPushButton *playButton;
    QProgressBar *progressBar;
    QPushButton *powerButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *songLabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(800, 480);
        musicButton = new QPushButton(MainForm);
        musicButton->setObjectName(QStringLiteral("musicButton"));
        musicButton->setGeometry(QRect(10, 70, 256, 128));
        radioButton = new QPushButton(MainForm);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(270, 70, 256, 128));
        mobileButton = new QPushButton(MainForm);
        mobileButton->setObjectName(QStringLiteral("mobileButton"));
        mobileButton->setGeometry(QRect(530, 70, 256, 128));
        preferencesButton = new QPushButton(MainForm);
        preferencesButton->setObjectName(QStringLiteral("preferencesButton"));
        preferencesButton->setGeometry(QRect(530, 220, 256, 128));
        pushButton_5 = new QPushButton(MainForm);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 220, 256, 128));
        gpsButton = new QPushButton(MainForm);
        gpsButton->setObjectName(QStringLiteral("gpsButton"));
        gpsButton->setGeometry(QRect(10, 220, 256, 128));
        playButton = new QPushButton(MainForm);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(10, 370, 90, 90));
        progressBar = new QProgressBar(MainForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(110, 430, 541, 23));
        progressBar->setValue(24);
        powerButton = new QPushButton(MainForm);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setGeometry(QRect(740, 420, 50, 50));
        label = new QLabel(MainForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 370, 46, 13));
        label_2 = new QLabel(MainForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 390, 46, 13));
        label_3 = new QLabel(MainForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 410, 46, 13));
        label_4 = new QLabel(MainForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 370, 46, 13));
        songLabel = new QLabel(MainForm);
        songLabel->setObjectName(QStringLiteral("songLabel"));
        songLabel->setGeometry(QRect(170, 410, 431, 16));
        pushButton = new QPushButton(MainForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 51, 51));
        pushButton_2 = new QPushButton(MainForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 10, 51, 51));
        pushButton_3 = new QPushButton(MainForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 10, 51, 51));
        frame = new QFrame(MainForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(110, 360, 531, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        musicButton->raise();
        radioButton->raise();
        mobileButton->raise();
        preferencesButton->raise();
        pushButton_5->raise();
        gpsButton->raise();
        playButton->raise();
        progressBar->raise();
        powerButton->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        songLabel->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "Form", 0));
        musicButton->setText(QString());
        radioButton->setText(QString());
        mobileButton->setText(QString());
        preferencesButton->setText(QString());
        pushButton_5->setText(QString());
        gpsButton->setText(QString());
        playButton->setText(QString());
        powerButton->setText(QString());
        label->setText(QApplication::translate("MainForm", "Artista", 0));
        label_2->setText(QApplication::translate("MainForm", "Album", 0));
        label_3->setText(QApplication::translate("MainForm", "Canci\303\263n", 0));
        label_4->setText(QApplication::translate("MainForm", "TextLabel", 0));
        songLabel->setText(QApplication::translate("MainForm", "TextLabel", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
