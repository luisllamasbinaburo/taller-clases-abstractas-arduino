#pragma once

#include "IMP3Player.hpp"

#include "libs/SDLibraries.hpp"

class ServiceMp3LoadFromSD
{
	IMP3Player& _mp3Player;
	SD_Hard& _SD;

public:
	ServiceMp3LoadFromSD(IMP3Player& mp3Player, SD_Hard& SD) : _mp3Player(mp3Player), _SD(SD)
	{
	}
	
	void LoadPlaylistFromSd()
	{
		//_mp3Player.PlayList;
		_SD.DoSomething();
	};
};