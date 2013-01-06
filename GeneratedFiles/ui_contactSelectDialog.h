/********************************************************************************
** Form generated from reading UI file 'contactSelectDialog.ui'
**
** Created: Sun 6. Jan 19:17:33 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSELECTDIALOG_H
#define UI_CONTACTSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactSelectDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *ContactSelectDialog)
    {
        if (ContactSelectDialog->objectName().isEmpty())
            ContactSelectDialog->setObjectName(QStringLiteral("ContactSelectDialog"));
        ContactSelectDialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(ContactSelectDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 331, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(ContactSelectDialog);

        QMetaObject::connectSlotsByName(ContactSelectDialog);
    } // setupUi

    void retranslateUi(QWidget *ContactSelectDialog)
    {
        ContactSelectDialog->setWindowTitle(QApplication::translate("ContactSelectDialog", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ContactSelectDialog: public Ui_ContactSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSELECTDIALOG_H
