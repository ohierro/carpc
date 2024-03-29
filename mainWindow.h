#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "ui_mainWindow.h"

#include "modules/gps/gpsWindow.h"
#include "modules/music/musicWindow.h"
#include "modules/mobile/mobileWindow.h"
#include "core/MusicPlayer.h"


class MainWindow : public QMainWindow
{
	Q_OBJECT


public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	MusicPlayer musicPlayer;

	Ui::MainForm ui;
	GPSWindow gpsWindow;
	MusicWindow* musicWindow;
	MobileWindow* mobileWindow;

	enum WINDOW { MUSIC_WINDOW, MOBILE_WINDOW, GPS_WINDOW };

	void changeWindow(WINDOW window);
	void loadStyleSheet(const QString &sheetName);

private slots:
	void changeToGPS();
	void changeToMusic();
	void changeToMobile();

	void backToMain();
};

#endif // MAIN_WINDOW_H