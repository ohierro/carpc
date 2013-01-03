#include "musicWindow.h"
#include <Qt>
#include <QFileInfo>
#include <QDir>
#include <QStringList>
#include <QStringListModel>

#include "general.h"

MusicWindow::MusicWindow(MusicPlayer* player) 
{
	ui.setupUi(this);

	this->player = player;

	initFolderList();

	// SIGNALS
	connect(ui.folderList, SIGNAL(itemSelectionChanged()), this, SLOT(folderSelected()));
	connect(ui.fileList, SIGNAL(itemSelectionChanged()), this, SLOT(fileSelected()));
}

MusicWindow::~MusicWindow() {

}

QWidget* MusicWindow::getBackButton() {
	return ui.backButton;
}

void MusicWindow::initFolderList() {
	QDir dir(MUSIC_FOLDER);
	dir.setFilter(QDir::Dirs);    
	dir.entryList(); 

	QStringList dirList;
	
	QFileInfoList list = dir.entryInfoList();
	for (int i = 0; i < list.size(); ++i) {
		QFileInfo fileInfo = list.at(i);
		//dirList << fileInfo.fileName();
		//ui.folderList << fileInfo.fileName();
		ui.folderList->addItem(fileInfo.fileName());
		//std::cout << qPrintable(QString("%1 %2").arg(fileInfo.size(), 10)
		//                                                 .arg(fileInfo.fileName()));
		//std::cout << std::endl;
    }

	
	folderModel.setStringList(dirList);
}

void MusicWindow::initFileList(QString& folderSelected) {
	QString folder = MUSIC_FOLDER;
	folder.append(PATH_SEPARATOR);
	folder.append(folderSelected);

	QDir dir(folder);
	dir.setFilter(QDir::Files);    
	dir.entryList(); 

	QStringList dirList;
	ui.fileList->clear();
	
	QFileInfoList list = dir.entryInfoList();
	for (int i = 0; i < list.size(); ++i) {
		QFileInfo fileInfo = list.at(i);
		ui.fileList->addItem(fileInfo.fileName());
    }
}

void MusicWindow::folderSelected() {
	//QList<ModelIndex>::Iterator it = indexes.begin();
	int s = ui.folderList->currentRow();

	QString folder = ui.folderList->currentItem()->text();
	initFileList(folder);
}

void MusicWindow::fileSelected() {
	QString folder = ui.folderList->currentItem()->text();
	QString file = ui.fileList->currentItem()->text();

	QString path = MUSIC_FOLDER;
	path.append(PATH_SEPARATOR);
	path.append(folder);
	path.append(PATH_SEPARATOR);
	path.append(file);

	player->play(path);
}