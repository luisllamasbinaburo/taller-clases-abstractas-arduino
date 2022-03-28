
#pragma once

class MP3Player
{
public:
	Audio_Hard audio;
	SD_Hard sd;
	TFT_Hard tft;

	std::string CurrentSong;
	std::vector<std::string> PlayList;
	bool IsPlaying;

	void DrawBackground()
	{
		tft.DoSomething();
	}

	void DrawButtons()
	{
	}

	void DrawList()
	{
	}

	void Draw()
	{
		DrawBackground();
		DrawButtons();
		DrawList();
	}

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

	void LoadPlaylistFromSD()
	{
		sd.DoSomething();
	}
};