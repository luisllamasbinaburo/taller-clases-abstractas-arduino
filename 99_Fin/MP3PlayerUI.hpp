#pragma once

#include "IMP3Player.hpp"

#include "libs/TFTLibraries.hpp"

class MP3PlayerUI 
{
public:
	TFT_Hard& _tft;

	IMP3Player& _mp3Player;

	MP3PlayerUI(IMP3Player& mp3Player, TFT_Hard& tft) : _mp3Player(mp3Player), _tft(tft)
	{
	}

	void DrawBackground()
	{
		_tft.DoSomething();
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
};