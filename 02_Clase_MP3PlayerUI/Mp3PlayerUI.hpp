#pragma once

#include "Mp3Player.hpp"

class Mp3PlayerUI
{
public:
	Mp3Player& _mp3Player;
	TFT_Hard& _tft;

	Mp3PlayerUI(Mp3Player& mp3Player, TFT_Hard& tft) : _mp3Player(mp3Player), _tft(tft)
	{
	}

	void DrawBackground()
	{
		tft.DoSomething();
	}

	void DrawList()
	{
		for (auto song : _mp3Player.PlayList)
		{
		}
	}

	void Draw()
	{
		DrawBackground();
		DrawList();
	}
};