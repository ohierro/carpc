#include "t0.h"
#include <qfile.h>
#include <qfiledialog.h>

t0::t0(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//ui.centralWidget->setStyleSheet("background-color: red; background-image: url(./backgroundImage.jpg)");
	//ui.pushButton->setStyleSheet("background-color: black");
	//ui.pushButton->clicked();


	//ui.comboBox->addItem("STYLE 1");
	//ui.comboBox->addItem("STYLE 2");
	//ui.comboBox->addItem("STYLE 3");
		
	//connect(ui.comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(comboSelect(int)));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(openFile()));
	connect(ui.musicButton,SIGNAL(clicked()),this,SLOT(openMusicForm()));
}

t0::~t0()
{

}

void t0::openFile() 
{
	//QFileDialog dialog;

	//dialog.setVisible(true);

	QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "", tr("QT stylesheet (*.qss)"));

	if (fileName != NULL) {
		loadStyleSheet(fileName);
	}
	/*
	if (item == 0) {
		ui.centralWidget->setStyleSheet("background-image: url(./back01.jpg); width:240px; height: 180px;");
	} 
	if (item == 1) {
		ui.centralWidget->setStyleSheet("background-image: url(./back02.jpg)");
	}	
	if (item == 2) {
		ui.centralWidget->setStyleSheet("background-image: url(./back03.jpg)");
	}
	*/
}

void t0::openMusicForm() {
	//if (musicForm == NULL) {	

	//QList<QWidget *> widgets = ui.centralWidget->findChildren<QWidget *>();
	//qDeleteAll(ui.centralWidget->findChildren<QWidget *>());
	/*
	foreach(QWidget * widget, widgets)
	{
		delete widget;
	}
	*/
//	musicForm = new MusicWindow(ui.centralWidget);
//	musicForm->setVisible(true);
		
		//ui.centralWidget->setVisible(false);		
		//musicForm = new MusicWindow(ui.centralWidget);
		//ui.centralWidget->setVisible(true);


		//musicForm->setVisible(true);
	//}
}

void t0::loadStyleSheet(const QString &sheetName)
{
    //QFile file(":/qss/" + sheetName.toLower() + ".qss");
	QFile file(sheetName);
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
	this->setStyleSheet(styleSheet);
	
	 /*
     ui.styleTextEdit->setPlainText(styleSheet);
     qApp->setStyleSheet(styleSheet);
     ui.applyButton->setEnabled(false);
	 */
}
