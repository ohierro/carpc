#include "mainWindow.h"
#include <Qt>
#include <QFile>

#include "general.h"

MainWindow::MainWindow(QWidget *parent) 
{
	ui.setupUi(this);

	musicWindow = new MusicWindow(&musicPlayer);	
	mobileWindow = new MobileWindow(&musicPlayer);
		
	connect(ui.gpsButton,SIGNAL(clicked()),this,SLOT(changeToGPS()));
	connect(ui.musicButton,SIGNAL(clicked()),this,SLOT(changeToMusic()));
	connect(ui.mobileButton,SIGNAL(clicked()),this,SLOT(changeToMobile()));
	
	connect(gpsWindow.getBackButton(),SIGNAL(clicked()),this,SLOT(backToMain()));
	connect(musicWindow->getBackButton(),SIGNAL(clicked()),this,SLOT(backToMain()));
	connect(mobileWindow->getBackButton(),SIGNAL(clicked()),this,SLOT(backToMain()));

	loadStyleSheet("style02/style2.qss");

	connect(ui.powerButton,SIGNAL(clicked()), qApp, SLOT(quit()));
}

MainWindow::~MainWindow() {

}

void MainWindow::changeWindow(WINDOW window) {
	switch (window) {
		case MUSIC_WINDOW:
			//musicWindow.setVisible(true);
			SHOW_P(musicWindow);
			break;
		case MOBILE_WINDOW:
			//musicWindow.setVisible(true);
			SHOW_P(mobileWindow);
			break;
		case GPS_WINDOW:
			//gpsWindow.setVisible(true);
			SHOW(gpsWindow);
			break;
	}
}

void MainWindow::changeToGPS() {
	changeWindow(GPS_WINDOW);
}
void MainWindow::changeToMusic() {
	changeWindow(MUSIC_WINDOW);
}
void MainWindow::changeToMobile() {
	changeWindow(MOBILE_WINDOW);
}

void MainWindow::backToMain() {
	gpsWindow.setVisible(false);
	musicWindow->setVisible(false);
	mobileWindow->setVisible(false);

	if (musicPlayer.isPlaying()) {
		ui.songLabel->setText(musicPlayer.getSongName());
	}
}


void MainWindow::loadStyleSheet(const QString &sheetName)
{
    //QFile file(":/qss/" + sheetName.toLower() + ".qss");
	QFile file(sheetName);
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
	
	this->setStyleSheet(styleSheet);
	
	musicWindow->setStyleSheet(styleSheet);
	mobileWindow->setStyleSheet(styleSheet);
	gpsWindow.setStyleSheet(styleSheet);
	
	 /*
     ui.styleTextEdit->setPlainText(styleSheet);
     qApp->setStyleSheet(styleSheet);
     ui.applyButton->setEnabled(false);
	 */
}
