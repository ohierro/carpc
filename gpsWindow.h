#ifndef GPS_WINDOW_H
#define GPS_WINDOW_H

#include <QMainWindow>
#include "ui_gpsWindow.h"

class GPSWindow : public QWidget
{
	Q_OBJECT

public:
	GPSWindow(QWidget *parent = 0);
	~GPSWindow();

	QWidget* getBackButton();

private:
	Ui::GPSForm ui;
};

#endif // GPS_WINDOW_H
