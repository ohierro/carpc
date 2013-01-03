#ifndef CONTACT_SELECT_DIALOG_H
#define CONTACT_SELECT_DIALOG_H

#include <QMainWindow>
#include "ui_contactSelectDialog.h"

#include "ContactsDDBB.h"

class ContactSelectDialog : public QMainWindow
{
	Q_OBJECT

public:
	ContactSelectDialog(Contact* contact);
	~ContactSelectDialog();

private:
	Ui::ContactSelectDialog ui;
	Contact* contact;

signals:
	void mobileSelected(QString number);

private slots:
	void clicked(QString number);

};

#endif CONTACT_SELECT_DIALOG_H