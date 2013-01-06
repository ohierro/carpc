/********************************************************************************
** Form generated from reading UI file 'mobileWindow.ui'
**
** Created: Sun 6. Jan 19:17:33 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOBILEWINDOW_H
#define UI_MOBILEWINDOW_H

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

class Ui_MobileForm
{
public:
    QPushButton *backButton;
    QPushButton *call1Button;
    QLineEdit *mobileNumberText;
    QPushButton *call2Button;
    QPushButton *call3Button;
    QPushButton *call4Button;
    QPushButton *call6Button;
    QPushButton *call5Button;
    QPushButton *call7Button;
    QPushButton *call9Button;
    QPushButton *call8Button;
    QPushButton *callButton;
    QPushButton *hangUpButton;
    QPushButton *removeButton;
    QPushButton *callHashButton;
    QPushButton *call0Button;
    QPushButton *callAsteriskButton;
    QListWidget *contactList;

    void setupUi(QWidget *MobileForm)
    {
        if (MobileForm->objectName().isEmpty())
            MobileForm->setObjectName(QStringLiteral("MobileForm"));
        MobileForm->resize(800, 480);
        backButton = new QPushButton(MobileForm);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(680, 410, 101, 51));
        call1Button = new QPushButton(MobileForm);
        call1Button->setObjectName(QStringLiteral("call1Button"));
        call1Button->setGeometry(QRect(50, 80, 81, 81));
        QFont font;
        font.setPointSize(16);
        call1Button->setFont(font);
        mobileNumberText = new QLineEdit(MobileForm);
        mobileNumberText->setObjectName(QStringLiteral("mobileNumberText"));
        mobileNumberText->setGeometry(QRect(10, 10, 361, 61));
        call2Button = new QPushButton(MobileForm);
        call2Button->setObjectName(QStringLiteral("call2Button"));
        call2Button->setGeometry(QRect(140, 80, 81, 81));
        call2Button->setFont(font);
        call3Button = new QPushButton(MobileForm);
        call3Button->setObjectName(QStringLiteral("call3Button"));
        call3Button->setGeometry(QRect(230, 80, 81, 81));
        call3Button->setFont(font);
        call4Button = new QPushButton(MobileForm);
        call4Button->setObjectName(QStringLiteral("call4Button"));
        call4Button->setGeometry(QRect(50, 170, 81, 81));
        call4Button->setFont(font);
        call6Button = new QPushButton(MobileForm);
        call6Button->setObjectName(QStringLiteral("call6Button"));
        call6Button->setGeometry(QRect(230, 170, 81, 81));
        call6Button->setFont(font);
        call5Button = new QPushButton(MobileForm);
        call5Button->setObjectName(QStringLiteral("call5Button"));
        call5Button->setGeometry(QRect(140, 170, 81, 81));
        call5Button->setFont(font);
        call7Button = new QPushButton(MobileForm);
        call7Button->setObjectName(QStringLiteral("call7Button"));
        call7Button->setGeometry(QRect(50, 260, 81, 81));
        call7Button->setFont(font);
        call9Button = new QPushButton(MobileForm);
        call9Button->setObjectName(QStringLiteral("call9Button"));
        call9Button->setGeometry(QRect(230, 260, 81, 81));
        call9Button->setFont(font);
        call8Button = new QPushButton(MobileForm);
        call8Button->setObjectName(QStringLiteral("call8Button"));
        call8Button->setGeometry(QRect(140, 260, 81, 81));
        call8Button->setFont(font);
        callButton = new QPushButton(MobileForm);
        callButton->setObjectName(QStringLiteral("callButton"));
        callButton->setGeometry(QRect(330, 80, 171, 61));
        hangUpButton = new QPushButton(MobileForm);
        hangUpButton->setObjectName(QStringLiteral("hangUpButton"));
        hangUpButton->setGeometry(QRect(330, 150, 171, 61));
        removeButton = new QPushButton(MobileForm);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(380, 10, 61, 61));
        QFont font1;
        font1.setPointSize(12);
        removeButton->setFont(font1);
        callHashButton = new QPushButton(MobileForm);
        callHashButton->setObjectName(QStringLiteral("callHashButton"));
        callHashButton->setGeometry(QRect(230, 350, 81, 81));
        callHashButton->setFont(font);
        call0Button = new QPushButton(MobileForm);
        call0Button->setObjectName(QStringLiteral("call0Button"));
        call0Button->setGeometry(QRect(140, 350, 81, 81));
        call0Button->setFont(font);
        callAsteriskButton = new QPushButton(MobileForm);
        callAsteriskButton->setObjectName(QStringLiteral("callAsteriskButton"));
        callAsteriskButton->setGeometry(QRect(50, 350, 81, 81));
        callAsteriskButton->setFont(font);
        contactList = new QListWidget(MobileForm);
        contactList->setObjectName(QStringLiteral("contactList"));
        contactList->setGeometry(QRect(520, 10, 256, 301));

        retranslateUi(MobileForm);

        QMetaObject::connectSlotsByName(MobileForm);
    } // setupUi

    void retranslateUi(QWidget *MobileForm)
    {
        MobileForm->setWindowTitle(QApplication::translate("MobileForm", "Form", 0));
        backButton->setText(QApplication::translate("MobileForm", "Back", 0));
        call1Button->setText(QApplication::translate("MobileForm", "1", 0));
        call2Button->setText(QApplication::translate("MobileForm", "2", 0));
        call3Button->setText(QApplication::translate("MobileForm", "3", 0));
        call4Button->setText(QApplication::translate("MobileForm", "4", 0));
        call6Button->setText(QApplication::translate("MobileForm", "6", 0));
        call5Button->setText(QApplication::translate("MobileForm", "5", 0));
        call7Button->setText(QApplication::translate("MobileForm", "7", 0));
        call9Button->setText(QApplication::translate("MobileForm", "9", 0));
        call8Button->setText(QApplication::translate("MobileForm", "8", 0));
        callButton->setText(QString());
        hangUpButton->setText(QString());
        removeButton->setText(QApplication::translate("MobileForm", "C", 0));
        callHashButton->setText(QApplication::translate("MobileForm", "#", 0));
        call0Button->setText(QApplication::translate("MobileForm", "0", 0));
        callAsteriskButton->setText(QApplication::translate("MobileForm", "*", 0));
    } // retranslateUi

};

namespace Ui {
    class MobileForm: public Ui_MobileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOBILEWINDOW_H
