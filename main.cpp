#include "t0.h"
#include "mainWindow.h"
#include <QApplication>

#include "general.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//t0 w;	
	//w.show();
	//MusicWindow w;
	//w.showFullScreen();

	MainWindow w;
	SHOW(w);

	return a.exec();
}
