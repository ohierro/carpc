#include "gpsWindow.h"
#include <Qt>

GPSWindow::GPSWindow(QWidget *parent) {
	if (parent != NULL) {
		ui.setupUi(parent);
	} else {
		ui.setupUi(this);	
	}
}

GPSWindow::~GPSWindow() {
}

QWidget* GPSWindow::getBackButton() {
	return ui.pushButton;
}