#pragma once

#include "IMP3Player.hpp"

class MP3Player_Mock : public IMP3Player
{
public:
	std::string CurrentSong;
	std::vector<std::string> PlayList;
	bool IsPlaying;

	void Init()
	{
		Serial.println("Init");
	}

	void Play()
	{
		Serial.println("Play");
	}

	void Stop()
	{
	}

	void NextSong()
	{
	}

	void PrevSong()
	{
	}
};