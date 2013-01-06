#ifndef CONTACTS_DDBB_H
#define CONTACTS_DDBB_H

#include <Qt>
#include <QString>
#include <QList>
#include <QDomDocument>

enum PhoneType { MOBILE, HOME, WORK };

struct PhoneInfo {
	QString name;
	PhoneType type;
	QString number;
};

struct Contact {
	QString name;	
	QList<PhoneInfo*> phones;
};


class ContactsDDBB {
public:
	void readFromFile(QString file);
	QList<Contact*> getContacts();

private:
	Contact* parseContact(QDomElement* element);

private:
	QList<Contact*> contacts;

};

#endif // CONTACTS_DDBB_H