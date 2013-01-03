#include "ContactSelectDialog.h"

#include <QPushButton>
#include <QSignalMapper>

ContactSelectDialog::ContactSelectDialog(Contact* contact) {
	ui.setupUi(this);

	this->contact = contact;

	QSignalMapper* signalMapper = new QSignalMapper(this);
	   
	foreach(PhoneInfo* info, contact->phones) {
		QPushButton* button = new QPushButton(info->number);
		ui.verticalLayout->addWidget(button);

		signalMapper->setMapping(button, QString(info->number));
		connect(button, SIGNAL(clicked()), signalMapper, SLOT (map()));
	}

	connect(signalMapper, SIGNAL(mapped(QString)),this, SLOT(clicked(QString)));
}

ContactSelectDialog::~ContactSelectDialog() {

}

void ContactSelectDialog::clicked(QString number) {
	emit mobileSelected(number);
	this->destroy();
}