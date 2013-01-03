#include "MusicPlayer.h"

#include <QString>
#include <QUrl>
#include <QMediaPlayer>
#include <QMediaPlaylist>

MusicPlayer::MusicPlayer() {
	playing = false;

	mediaPlayer = new QMediaPlayer();
	playlist = new QMediaPlaylist();
    mediaPlayer->setPlaylist(playlist);

	mediaPlayer->setMuted(false);	
	mediaPlayer->setVolume(100);
}

void MusicPlayer::play(QString file) {
	playing = true;
	this->file = file;

	QUrl mp3Url = QUrl::fromLocalFile(file); //assuming you want to play a local file
	//QDesktopServices::openUrl(mp3Url);
	playlist->addMedia(mp3Url);	
	mediaPlayer->play();
}

void MusicPlayer::stop() {

}

void MusicPlayer::pause() {

}

void MusicPlayer::seek(int position) {
}

bool MusicPlayer::isPlaying() {
	return playing;
}

QString MusicPlayer::getSongName() {
	return file;
}

/*
void MusicPlayer::statusChanged(QMediaPlayer::MediaStatus status)
{
    //handleCursor(status);

    // handle status message
    switch (status) {
    case QMediaPlayer::UnknownMediaStatus:
    case QMediaPlayer::NoMedia:
    case QMediaPlayer::LoadedMedia:
    case QMediaPlayer::BufferingMedia:
    case QMediaPlayer::BufferedMedia:
        setStatusInfo(QString());
        break;
    case QMediaPlayer::LoadingMedia:
        setStatusInfo(tr("Loading..."));
        break;
    case QMediaPlayer::StalledMedia:
        setStatusInfo(tr("Media Stalled"));
        break;
    case QMediaPlayer::EndOfMedia:
        QApplication::alert(this);
        break;
    case QMediaPlayer::InvalidMedia:
        displayErrorMessage();
        break;
    }
}*/