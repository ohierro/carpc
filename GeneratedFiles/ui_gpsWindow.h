/********************************************************************************
** Form generated from reading UI file 'gpsWindow.ui'
**
** Created: Sun 6. Jan 19:23:29 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSWINDOW_H
#define UI_GPSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPSForm
{
public:
    QProgressBar *progressBar;
    QPushButton *pushButton;

    void setupUi(QWidget *GPSForm)
    {
        if (GPSForm->objectName().isEmpty())
            GPSForm->setObjectName(QStringLiteral("GPSForm"));
        GPSForm->resize(800, 480);
        progressBar = new QProgressBar(GPSForm);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 20, 641, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(GPSForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 100, 75, 81));

        retranslateUi(GPSForm);

        QMetaObject::connectSlotsByName(GPSForm);
    } // setupUi

    void retranslateUi(QWidget *GPSForm)
    {
        GPSForm->setWindowTitle(QApplication::translate("GPSForm", "Form", 0));
        pushButton->setText(QApplication::translate("GPSForm", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class GPSForm: public Ui_GPSForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSWINDOW_H
