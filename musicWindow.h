#ifndef MUSIC_WINDOW_H
#define MUSIC_WINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include "ui_musicWindow.h"

#include "MusicPlayer.h"

class MusicWindow : public QMainWindow
{
	Q_OBJECT

public:
	MusicWindow(MusicPlayer* player);
	~MusicWindow();

	QWidget* getBackButton();
	
private:
	Ui::MusicForm ui;

	QStringListModel folderModel;
	QStringListModel fileModel;

	MusicPlayer* player;

private:
	void initFolderList();
	void initFileList(QString& folderSelected);

private slots:
	void folderSelected();
	void fileSelected();
};

#endif // MUSIC_WINDOW_H
