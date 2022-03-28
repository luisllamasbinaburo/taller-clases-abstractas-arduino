#pragma once

class Mp3Player
{
public:
	Audio_Hard audio;

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

