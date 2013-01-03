#include "mobileWindow.h"

#include <Qt>
#include <QFileInfo>
#include <QDir>
#include <QStringList>
#include <QStringListModel>
#include <QMessageBox>

#include "general.h"

#include "MusicPlayer.h"
#include "ContactsDDBB.h"
#include "ContactSelectDialog.h"

MobileWindow::MobileWindow(MusicPlayer* player) 
{
	ui.setupUi(this);

	this->player = player;

	//initFolderList();

	// SIGNALS
	// CALL NUMBERS
	connect(ui.call1Button, SIGNAL(clicked()), this, SLOT(add1()));
	connect(ui.call2Button, SIGNAL(clicked()), this, SLOT(add2()));
	connect(ui.call3Button, SIGNAL(clicked()), this, SLOT(add3()));
	connect(ui.call4Button, SIGNAL(clicked()), this, SLOT(add4()));
	connect(ui.call5Button, SIGNAL(clicked()), this, SLOT(add5()));
	connect(ui.call6Button, SIGNAL(clicked()), this, SLOT(add6()));
	connect(ui.call7Button, SIGNAL(clicked()), this, SLOT(add7()));
	connect(ui.call8Button, SIGNAL(clicked()), this, SLOT(add8()));
	connect(ui.call9Button, SIGNAL(clicked()), this, SLOT(add9()));
	connect(ui.call0Button, SIGNAL(clicked()), this, SLOT(add0()));
	connect(ui.callAsteriskButton, SIGNAL(clicked()), this, SLOT(addAsterisk()));
	connect(ui.callHashButton, SIGNAL(clicked()), this, SLOT(addHash()));
	
	// CALL, HANG UP AND DELETE BUTTONS
	connect(ui.removeButton, SIGNAL(clicked()), this, SLOT(removeDigit()));
	connect(ui.callButton, SIGNAL(clicked()), this, SLOT(call()));
	connect(ui.hangUpButton, SIGNAL(clicked()), this, SLOT(hangUp()));

	// CONTACTS 
	connect(ui.contactList, SIGNAL(itemSelectionChanged()), this, SLOT(contactSelected()));
		
	// FILL CONTACTS
	ddbb.readFromFile("ddbb\\contacts.xml");
	QList<Contact*> contacts = ddbb.getContacts();

	foreach (Contact* c,contacts) {
		ui.contactList->addItem(c->name);
	}
	//ui.contactList->
}

MobileWindow::~MobileWindow() {

}

QWidget* MobileWindow::getBackButton() {
	return ui.backButton;
}

void MobileWindow::call() {
	if (player->isPlaying()) {
		player->pause();
	}

	QString message = "calling ";
	message.append(ui.mobileNumberText->text());

	QMessageBox::StandardButton reply;
    reply = QMessageBox::critical(this, tr("QMessageBox::critical()"),
                                     message,
                                     QMessageBox::Abort | QMessageBox::Retry | QMessageBox::Ignore);
}

void MobileWindow::hangUp() {

}

void MobileWindow::addDigit(QString value) {
	QString number = ui.mobileNumberText->text();	
	number.append(value);

	ui.mobileNumberText->setText(number);
}

void MobileWindow::removeDigit() {
	QString number = ui.mobileNumberText->text();	
	number.remove(number.size()-1,1);

	ui.mobileNumberText->setText(number);
}

void MobileWindow::contactSelected() {
	QString contactName = ui.contactList->currentItem()->text();
	QList<Contact*> contacts = ddbb.getContacts();

	foreach (Contact* c,contacts) {
		if (!QString::compare(c->name,contactName)) {
			//ui.mobileNumberText = 
			if (c->phones.size() == 1) {
				ui.mobileNumberText->setText(c->phones[0]->number);
			} else {
				ContactSelectDialog* dialog = new ContactSelectDialog(c);
				connect(dialog,SIGNAL(mobileSelected(QString)),this,SLOT(mobileSelected(QString)));
				dialog->show();
			}
		}
	}
}

void MobileWindow::mobileSelected(QString number) {
	ui.mobileNumberText->setText(number);
}

void MobileWindow::add1() {
	addDigit("1");
}
void MobileWindow::add2() {
	addDigit("2");
}
void MobileWindow::add3() {
	addDigit("3");
}
void MobileWindow::add4() {
	addDigit("4");
}
void MobileWindow::add5() {
	addDigit("5");
}
void MobileWindow::add6() {
	addDigit("6");
}
void MobileWindow::add7() {
	addDigit("7");
}
void MobileWindow::add8() {
	addDigit("8");
}
void MobileWindow::add9() {
	addDigit("9");
}
void MobileWindow::add0() {
	addDigit("0");
}
void MobileWindow::addAsterisk() {
	addDigit("*");
}
void MobileWindow::addHash() {
	addDigit("#");
}