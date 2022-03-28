#include "MP3Player.hpp"

MP3Player mp3Player;

void setup()
{
	mp3Player.Init();
	mp3Player.LoadPlaylistFromSD();
}

void loop()
{
	mp3Player.Play();
	mp3Player.Stop();

	mp3Player.Draw();
}