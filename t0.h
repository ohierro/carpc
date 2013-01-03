#ifndef T0_H
#define T0_H

#include <QMainWindow>
#include "ui_t0.h"
#include "musicWindow.h"

class t0 : public QMainWindow
{
	Q_OBJECT

public:
	t0(QWidget *parent = 0);
	~t0();

private:
	Ui::t0Class ui;
	
	int value;	
	void loadStyleSheet(const QString &sheetName);

	MusicWindow *musicForm;

private slots:
	void openFile();
	void openMusicForm();
};

#endif // T0_H
