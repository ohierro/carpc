#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H

#include <Qt>
#include <QString>

#include <QMediaPlayer>
#include <QMediaPlaylist>

class MusicPlayer {

public:
	MusicPlayer();

	void play(QString file);
	void stop();
	void pause();
	void seek(int position);
	//void getInfo();


	bool isPlaying();
	QString getSongName();

private:
	bool playing;
	QString file;

	QMediaPlayer* mediaPlayer;
	QMediaPlaylist* playlist;
};

#endif // MUSIC_PLAYER_H