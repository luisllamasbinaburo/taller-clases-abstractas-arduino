#pragma once

class IMP3Player
{
public:
	std::string CurrentSong;
	std::vector<std::string> PlayList;
	bool IsPlaying;

	virtual void Init() = 0;
	virtual void Play() = 0;
	virtual void Stop() = 0;
	virtual void NextSong() = 0;
	virtual void PrevSong() = 0;
};