#include "ContactSelectDialog.h"

#include <QPushButton>
#include <QSignalMapper>

ContactSelectDialog::ContactSelectDialog() {
	ui.setupUi(this);
}

ContactSelectDialog::~ContactSelectDialog() {

}

void ContactSelectDialog::show(Contact* contact) {
	this->contact = contact;

	QSignalMapper* signalMapper = new QSignalMapper(this);
	   
	foreach(PhoneInfo* info, contact->phones) {
		QPushButton* button = new QPushButton(info->number);
		ui.verticalLayout->addWidget(button);

		signalMapper->setMapping(button, QString(info->number));
		connect(button, SIGNAL(clicked()), signalMapper, SLOT (map())); 
	}

	connect(signalMapper, SIGNAL(mapped(QString)),this, SLOT(clicked(QString)));
	QMainWindow::show();
}

void ContactSelectDialog::clicked(QString number) {
	emit mobileSelected(number);
	this->destroy();
}