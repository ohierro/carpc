#ifndef MOBILE_WINDOW_H
#define MOBILE_WINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include "ui_mobileWindow.h"

#include "core/MusicPlayer.h"
#include "ContactSelectDialog.h"
#include "ContactsDDBB.h"

class MobileWindow : public QMainWindow
{
	Q_OBJECT

public:
	MobileWindow(MusicPlayer* player);
	~MobileWindow();

	QWidget* getBackButton();

private:
	Ui::MobileForm ui;
	ContactSelectDialog dialog;
	
	MusicPlayer* player;
	ContactsDDBB ddbb;

private:
	void addDigit(QString value);	
	
private slots:
	void add1();
	void add2();
	void add3();
	void add4();
	void add5();
	void add6();
	void add7();
	void add8();
	void add9();
	void add0();
	void addAsterisk();	
	void addHash();

	void removeDigit();
	void call();
	void hangUp();

	void contactSelected();
	void mobileSelected(QString number);
};

#endif // MOBILE_WINDOW_H
