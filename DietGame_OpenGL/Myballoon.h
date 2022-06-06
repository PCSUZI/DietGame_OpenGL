#pragma once

#include "Mymain.h"

struct FRAME_INFO
{
	int x;
	int y;
	int width;
	int height;
	int good_or_worst; //good= 1, worst=2
	bool is_Draw;
};

enum ANI_INDEX
{
	HP_5 = 5,
	HP_4 = 4,
	HP_3 = 3,
	HP_2 = 2,
	HP_1 = 1,
	HP_0 = 0
};

class Myballoon
{
protected:
	dsTexture	*g_food;
	FRAME_INFO g_food_Info_[12][6];

public:

	int  m_aniSpeed;
	int m_aniIndex;
	int m_HP;
	int m_good_or_worst;

	int srcX;
	int srcY;

	int width;
	int height;

	int dstX;
	int dstY;

	bool is_Draw;

	void Draw();
	void Loding();
	void reset();
	void move();

	Myballoon();
	~Myballoon();
};

