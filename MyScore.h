#pragma once
#include "Mymain.h"

class MyScore
{
protected:
	dsTexture *g_number[10];
public:
	MyScore();
	~MyScore();

	void GameScoreLoding(); //점수 이미지 로딩
	void Number_Draw(char a, int x, int y);

};

extern MyScore myscore;