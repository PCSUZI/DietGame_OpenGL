#pragma once
#include "Mymain.h"

class MyGamebase
{
private:
	dsTexture *g_gameStart[2];
	dsTexture *g_gameExit[2];
	dsTexture *g_gameins[2];

public:
	dsTexture *g_Main;
	dsTexture *g_Insturction[2];
	dsTexture *g_ready;
	dsTexture *g_go;
	dsTexture *g_Win;
	dsTexture *g_Lose;

	int g_index = 0;

	bool Start_check;
	bool Exit_check;
	bool ins_check;

	MyGamebase();
	~MyGamebase();

	void Loading();
	void Draw_gameStart(int x, int y);
	void Draw_gameExit(int x, int y);
	void Draw_gameins(int x, int y);


};

extern MyGamebase myGamebase;