#pragma once
#include "Mymain.h"


class Mysuin
{
private:
	dsTexture *g_48[3];
	dsTexture *g_53[3];
	dsTexture *g_60[3];
	dsTexture *g_70[3];
	dsTexture *g_90[3];

public:
	int SuIn_Kg;

	bool happy;
	bool sad;

	void Loading();

	void Game_48();
	void Game_53();
	void Game_60();
	void Game_70();
	void Game_90();

	void Kg_Diet(int food);
	void Level_set();

	bool Level_1_check;
	bool Level_2_check;
	bool Level_3_check;
	bool Level_4_check;
	bool Level_5_check;

	Mysuin();
	~Mysuin();
};

extern Mysuin Suin;