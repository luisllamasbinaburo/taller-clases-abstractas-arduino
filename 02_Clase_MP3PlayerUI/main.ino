#include "libs/AudioLibraries.hpp"
#include "libs/TFTLibraries.hpp"
#include "libs/SDLibraries.hpp"

#include "Mp3Player.hpp"
#include "Mp3PlayerUI.hpp"

TFT_Hard tft;
SD_Hard sd;

Mp3Player mp3Player;
Mp3PlayerUI mp3PlayerUI(mp3Player, tft);

void setup()
{
	mp3Player.Init();
}

void loop()
{
	mp3Player.Play();
	mp3Player.Stop();
	
	mp3PlayerUI.Draw();
}