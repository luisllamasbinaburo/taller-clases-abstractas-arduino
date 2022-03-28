#pragma once

#include "IMP3Player.hpp"

 #include "libs/AudioLibraries.hpp"

class MP3Player : public IMP3Player
{
public:
	Audio_Hard audio;
	SD_Hard sd;

	std::string CurrentSong;
	std::vector<std::string> PlayList;
	bool IsPlaying;

	void Init()
	{
	}

	void Play()
	{
		audio.DoSomething();
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