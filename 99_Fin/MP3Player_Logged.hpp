#pragma once

#include "MP3Player.hpp"

class MP3Player_Logged : public MP3Player
{
public:
	void Init()
	{
		MP3Player::Init();
		Serial.println("Init");
		Serial.println(MP3Player::CurrentSong.c_str());
	}

	void Play()
	{
		MP3Player::Play();
		Serial.println("Play");
	}

	void Stop()
	{
		MP3Player::Stop();
		Serial.println("Stop");
	}

	void NextSong()
	{
		MP3Player::NextSong();
		Serial.println("NextSong");
	}

	void PrevSong()
	{
		MP3Player::PrevSong();
		Serial.println("PrevSong");
	}
};