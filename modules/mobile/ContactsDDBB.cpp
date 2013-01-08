#include "ContactsDDBB.h"

#include <Qt>
#include <QString>
#include <QFile>
#include <QDomDocument>

void ContactsDDBB::readFromFile(QString file) {
	QDomDocument domDocument;

	 QString errorStr;
     int errorLine;
     int errorColumn;

	QFile xmlFile(file);

	if (!domDocument.setContent(&xmlFile, true, &errorStr, &errorLine,
                                 &errorColumn)) {
       
									/*
									 QMessageBox::information(window(), tr("DOM Bookmarks"),
                                  tr("Parse error at line %1, column %2:\n%3")
                                  .arg(errorLine)
                                  .arg(errorColumn)
                                  .arg(errorStr));
								  */
         //return false;
     }

	QDomElement root = domDocument.documentElement();

	if (root.tagName() != "contacts") {
		//QMessageBox::information(window(), tr("DOM Bookmarks"),
                                //  tr("The file is not an XBEL file."));
        // return false;
    } else if (root.hasAttribute("version")
                && root.attribute("version") != "1.0") {
         // QMessageBox::information(window(), tr("DOM Bookmarks"),
                         //         tr("The file is not an XBEL version 1.0 "
                         //            "file."));
         // return false;
    }

	contacts.clear();

    QDomElement child = root.firstChildElement("contact");
    while (!child.isNull()) {         
		Contact* contact = parseContact(&child);
		contacts.append(contact);

        child = child.nextSiblingElement("contact");
    }
}

Contact* ContactsDDBB::parseContact(QDomElement* element) {
	Contact* contact = new Contact();
	contact->name = element->firstChildElement("name").text();

	QDomElement phones = element->firstChildElement("phones");
	QDomElement phone = phones.firstChildElement("phone");
	while (!phone.isNull()) {
		PhoneInfo* phoneInfo = new PhoneInfo();
		phoneInfo->name = phone.firstChildElement("name").text();
		phoneInfo->number = phone.firstChildElement("number").text();
		QString type = phone.firstChildElement("type").text();

		if (!QString::compare(type,"MOBILE")) {
			phoneInfo->type = MOBILE;
		} else {
			if (!QString::compare(type,"HOME")) {
				phoneInfo->type = HOME;
			} else {
				if (!QString::compare(type,"WORK")) {
					phoneInfo->type = WORK;
				} else {
					// UNKNOWN TYPE
				}
			}
		}

		contact->phones.append(phoneInfo);
		
		phone = phone.nextSiblingElement("phone");
	}

	return contact;
}

QList<Contact*> ContactsDDBB::getContacts() {
	return contacts;
}