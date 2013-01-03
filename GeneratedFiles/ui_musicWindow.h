/********************************************************************************
** Form generated from reading UI file 'musicWindow.ui'
**
** Created: Tue 1. Jan 20:02:32 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICWINDOW_H
#define UI_MUSICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicForm
{
public:
    QPushButton *backButton;
    QWidget *mainContent;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QListWidget *fileList;
    QListWidget *folderList;

    void setupUi(QWidget *MusicForm)
    {
        if (MusicForm->objectName().isEmpty())
            MusicForm->setObjectName(QStringLiteral("MusicForm"));
        MusicForm->setWindowModality(Qt::WindowModal);
        MusicForm->setEnabled(true);
        MusicForm->resize(800, 480);
        backButton = new QPushButton(MusicForm);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(700, 420, 75, 41));
        mainContent = new QWidget(MusicForm);
        mainContent->setObjectName(QStringLiteral("mainContent"));
        mainContent->setGeometry(QRect(10, 10, 771, 381));
        lineEdit = new QLineEdit(mainContent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 261, 31));
        pushButton = new QPushButton(mainContent);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 10, 41, 31));
        fileList = new QListWidget(mainContent);
        fileList->setObjectName(QStringLiteral("fileList"));
        fileList->setGeometry(QRect(355, 11, 361, 371));
        folderList = new QListWidget(mainContent);
        folderList->setObjectName(QStringLiteral("folderList"));
        folderList->setGeometry(QRect(10, 50, 341, 331));
        mainContent->raise();
        backButton->raise();

        retranslateUi(MusicForm);

        QMetaObject::connectSlotsByName(MusicForm);
    } // setupUi

    void retranslateUi(QWidget *MusicForm)
    {
        MusicForm->setWindowTitle(QApplication::translate("MusicForm", "Form", 0));
        backButton->setText(QApplication::translate("MusicForm", "BACK", 0));
        pushButton->setText(QApplication::translate("MusicForm", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MusicForm: public Ui_MusicForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICWINDOW_H
