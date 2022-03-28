#pragma once

#include "IMp3Player.hpp"

class Mp3Player_Mock : public IMp3Player
{

public:
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
		Serial.println("Stop");
	}

	void NextSong()
	{
		Serial.println("NextSong");
	}

	void PrevSong()
	{
		Serial.println("PrevSong");
	}

	void LoadPlaylistFromSD()
	{
		Serial.println("LoadPlaylistFromSD");
	}
};
