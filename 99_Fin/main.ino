
#pragma once

#include "libs/SDLibraries.hpp"
#include "libs/TFTLibraries.hpp"

#include "MP3Player_Logged.hpp"
#include "MP3PlayerUI.hpp"
#include "ServiceMp3LoadFromSD.hpp"

SD_Hard SD;
TFT_Hard tft;

MP3Player_Logged mp3Player;
MP3PlayerUI mp3PlayerUI(mp3Player, tft);

ServiceMp3LoadFromSD ServiceMp3LoadFromSD(mp3Player, SD);

void setup()
{
	mp3Player.Init();
	ServiceMp3LoadFromSD.LoadPlaylistFromSd();
}

void loop()
{
	mp3Player.Play();
	mp3Player.Stop();

	mp3PlayerUI.Draw();
}
