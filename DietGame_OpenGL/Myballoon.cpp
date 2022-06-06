
#include "Myballoon.h"


Myballoon::Myballoon()
{

	g_food_Info_[0][HP_5].x = 4;
	g_food_Info_[0][HP_5].y = 4;
	g_food_Info_[0][HP_5].width = 57;
	g_food_Info_[0][HP_5].height = 116;
	g_food_Info_[0][HP_5].good_or_worst = 2;

	g_food_Info_[0][HP_4].x = 5;
	g_food_Info_[0][HP_4].y = 141;
	g_food_Info_[0][HP_4].width = 60;
	g_food_Info_[0][HP_4].height = 111;
	g_food_Info_[0][HP_4].good_or_worst = 2;

	g_food_Info_[0][HP_3].x = 5;
	g_food_Info_[0][HP_3].y = 268;
	g_food_Info_[0][HP_3].width = 62;
	g_food_Info_[0][HP_3].height = 112;
	g_food_Info_[0][HP_3].good_or_worst = 2;

	g_food_Info_[0][HP_2].x = 9;
	g_food_Info_[0][HP_2].y = 395;
	g_food_Info_[0][HP_2].width = 60;
	g_food_Info_[0][HP_2].height = 114;
	g_food_Info_[0][HP_2].good_or_worst = 2;

	g_food_Info_[0][HP_1].x = 7;
	g_food_Info_[0][HP_1].y = 521;
	g_food_Info_[0][HP_1].width = 56;
	g_food_Info_[0][HP_1].height = 111;
	g_food_Info_[0][HP_1].good_or_worst = 2;

	g_food_Info_[0][HP_0].x = 10;
	g_food_Info_[0][HP_0].y = 636;
	g_food_Info_[0][HP_0].width = 60;
	g_food_Info_[0][HP_0].height = 135;
	g_food_Info_[0][HP_0].good_or_worst = 2;


	g_food_Info_[1][HP_5].x = 83;
	g_food_Info_[1][HP_5].y = 7;
	g_food_Info_[1][HP_5].width = 56;
	g_food_Info_[1][HP_5].height = 116;
	g_food_Info_[1][HP_5].good_or_worst = 2;

	g_food_Info_[1][HP_4].x = 86;
	g_food_Info_[1][HP_4].y = 138;
	g_food_Info_[1][HP_4].width = 53;
	g_food_Info_[1][HP_4].height = 119;
	g_food_Info_[1][HP_4].good_or_worst = 2;

	g_food_Info_[1][HP_3].x =88;
	g_food_Info_[1][HP_3].y = 268;
	g_food_Info_[1][HP_3].width = 56;
	g_food_Info_[1][HP_3].height = 114;
	g_food_Info_[1][HP_3].good_or_worst = 2;

	g_food_Info_[1][HP_2].x = 91;
	g_food_Info_[1][HP_2].y = 394;
	g_food_Info_[1][HP_2].width = 56;
	g_food_Info_[1][HP_2].height = 112;
	g_food_Info_[1][HP_2].good_or_worst = 2;

	g_food_Info_[1][HP_1].x = 87;
	g_food_Info_[1][HP_1].y = 519;
	g_food_Info_[1][HP_1].width = 57;
	g_food_Info_[1][HP_1].height = 115;
	g_food_Info_[1][HP_1].good_or_worst = 2;

	g_food_Info_[1][HP_0].x = 80;
	g_food_Info_[1][HP_0].y = 640;
	g_food_Info_[1][HP_0].width = 73;
	g_food_Info_[1][HP_0].height = 121;
	g_food_Info_[1][HP_0].good_or_worst = 2;
	/////////////////////////////////////////////////////

	g_food_Info_[6][HP_1].x = 10;
	g_food_Info_[6][HP_1].y = 781;
	g_food_Info_[6][HP_1].width = 55;
	g_food_Info_[6][HP_1].height = 113;
	g_food_Info_[6][HP_1].good_or_worst = 1;

	g_food_Info_[6][HP_0].x = 8;
	g_food_Info_[6][HP_0].y = 893;
	g_food_Info_[6][HP_0].width = 71;
	g_food_Info_[6][HP_0].height = 121;
	g_food_Info_[6][HP_0].good_or_worst = 1;


	g_food_Info_[7][HP_1].x = 90;
	g_food_Info_[7][HP_1].y = 779;
	g_food_Info_[7][HP_1].width = 58;
	g_food_Info_[7][HP_1].height = 112;
	g_food_Info_[7][HP_1].good_or_worst = 1;

	g_food_Info_[7][HP_0].x = 81;
	g_food_Info_[7][HP_0].y = 891;
	g_food_Info_[7][HP_0].width = 80;
	g_food_Info_[7][HP_0].height = 121;
	g_food_Info_[7][HP_0].good_or_worst = 1;

	//////////////////////////////////////////////////////
	g_food_Info_[2][HP_5].x = 165;
	g_food_Info_[2][HP_5].y = 7;
	g_food_Info_[2][HP_5].width = 53;
	g_food_Info_[2][HP_5].height = 113;
	g_food_Info_[2][HP_5].good_or_worst = 2;

	g_food_Info_[2][HP_4].x = 161;
	g_food_Info_[2][HP_4].y = 140;
	g_food_Info_[2][HP_4].width = 63;
	g_food_Info_[2][HP_4].height = 113;
	g_food_Info_[2][HP_4].good_or_worst = 2;

	g_food_Info_[2][HP_3].x = 160;
	g_food_Info_[2][HP_3].y = 267;
	g_food_Info_[2][HP_3].width = 68;
	g_food_Info_[2][HP_3].height = 114;
	g_food_Info_[2][HP_3].good_or_worst = 2;

	g_food_Info_[2][HP_2].x = 169;
	g_food_Info_[2][HP_2].y = 391;
	g_food_Info_[2][HP_2].width = 57;
	g_food_Info_[2][HP_2].height = 117;
	g_food_Info_[2][HP_2].good_or_worst = 2;

	g_food_Info_[2][HP_1].x = 160;
	g_food_Info_[2][HP_1].y = 518;
	g_food_Info_[2][HP_1].width = 66;
	g_food_Info_[2][HP_1].height = 113;
	g_food_Info_[2][HP_1].good_or_worst = 2;

	g_food_Info_[2][HP_0].x = 160;
	g_food_Info_[2][HP_0].y = 640;
	g_food_Info_[2][HP_0].width = 75;
	g_food_Info_[2][HP_0].height = 117;
	g_food_Info_[2][HP_0].good_or_worst = 2;


	g_food_Info_[3][HP_5].x = 252;
	g_food_Info_[3][HP_5].y = 10;
	g_food_Info_[3][HP_5].width = 60;
	g_food_Info_[3][HP_5].height = 121;
	g_food_Info_[3][HP_5].good_or_worst = 2;

	g_food_Info_[3][HP_4].x = 248;
	g_food_Info_[3][HP_4].y = 141;
	g_food_Info_[3][HP_4].width = 61;
	g_food_Info_[3][HP_4].height = 124;
	g_food_Info_[3][HP_4].good_or_worst = 2;

	g_food_Info_[3][HP_3].x = 252;
	g_food_Info_[3][HP_3].y = 267;
	g_food_Info_[3][HP_3].width = 58;
	g_food_Info_[3][HP_3].height = 126;
	g_food_Info_[3][HP_3].good_or_worst = 2;

	g_food_Info_[3][HP_2].x = 256;
	g_food_Info_[3][HP_2].y = 396;
	g_food_Info_[3][HP_2].width = 56;
	g_food_Info_[3][HP_2].height = 120;
	g_food_Info_[3][HP_2].good_or_worst = 2;

	g_food_Info_[3][HP_1].x = 250;
	g_food_Info_[3][HP_1].y = 520;
	g_food_Info_[3][HP_1].width = 57;
	g_food_Info_[3][HP_1].height = 121;
	g_food_Info_[3][HP_1].good_or_worst = 2;

	g_food_Info_[3][HP_0].x = 244;
	g_food_Info_[3][HP_0].y = 645;
	g_food_Info_[3][HP_0].width = 73;
	g_food_Info_[3][HP_0].height = 122;
	g_food_Info_[3][HP_0].good_or_worst = 2;

	///////////////////////////////////////////////

	g_food_Info_[8][HP_1].x = 90;
	g_food_Info_[8][HP_1].y = 777;
	g_food_Info_[8][HP_1].width = 61;
	g_food_Info_[8][HP_1].height = 113;
	g_food_Info_[8][HP_1].good_or_worst = 1;

	g_food_Info_[8][HP_0].x = 86;
	g_food_Info_[8][HP_0].y = 891;
	g_food_Info_[8][HP_0].width = 71;
	g_food_Info_[8][HP_0].height = 121;
	g_food_Info_[8][HP_0].good_or_worst = 1;


	g_food_Info_[9][HP_1].x = 167;
	g_food_Info_[9][HP_1].y = 779;
	g_food_Info_[9][HP_1].width = 70;
	g_food_Info_[9][HP_1].height = 112;
	g_food_Info_[9][HP_1].good_or_worst = 1;

	g_food_Info_[9][HP_0].x = 170;
	g_food_Info_[9][HP_0].y = 895;
	g_food_Info_[9][HP_0].width = 74;
	g_food_Info_[9][HP_0].height = 113;
	g_food_Info_[9][HP_0].good_or_worst = 1;

	/////////////////////////////////////////////////////

	g_food_Info_[4][HP_5].x = 325;
	g_food_Info_[4][HP_5].y = 9;
	g_food_Info_[4][HP_5].width = 69;
	g_food_Info_[4][HP_5].height = 104;
	g_food_Info_[4][HP_5].good_or_worst = 2;
	
	g_food_Info_[4][HP_4].x = 326;
	g_food_Info_[4][HP_4].y = 140;
	g_food_Info_[4][HP_4].width = 66;
	g_food_Info_[4][HP_4].height = 103;
	g_food_Info_[4][HP_4].good_or_worst = 2;

	g_food_Info_[4][HP_3].x = 328;
	g_food_Info_[4][HP_3].y = 266;
	g_food_Info_[4][HP_3].width = 68;
	g_food_Info_[4][HP_3].height = 104;
	g_food_Info_[4][HP_3].good_or_worst = 2;

	g_food_Info_[4][HP_2].x = 335;
	g_food_Info_[4][HP_2].y = 395;
	g_food_Info_[4][HP_2].width = 65;
	g_food_Info_[4][HP_2].height = 101;
	g_food_Info_[4][HP_2].good_or_worst = 2;

	g_food_Info_[4][HP_1].x = 330;
	g_food_Info_[4][HP_1].y = 517;
	g_food_Info_[4][HP_1].width = 64;
	g_food_Info_[4][HP_1].height = 105;
	g_food_Info_[4][HP_1].good_or_worst = 2;

	g_food_Info_[4][HP_0].x = 328;
	g_food_Info_[4][HP_0].y = 640;
	g_food_Info_[4][HP_0].width = 68;
	g_food_Info_[4][HP_0].height = 108;
	g_food_Info_[4][HP_0].good_or_worst = 2;


	g_food_Info_[5][HP_5].x = 400;
	g_food_Info_[5][HP_5].y = 8;
	g_food_Info_[5][HP_5].width = 55;
	g_food_Info_[5][HP_5].height = 110;
	g_food_Info_[5][HP_5].good_or_worst = 2;

	g_food_Info_[5][HP_4].x = 401;
	g_food_Info_[5][HP_4].y = 141;
	g_food_Info_[5][HP_4].width = 55;
	g_food_Info_[5][HP_4].height = 110;
	g_food_Info_[5][HP_4].good_or_worst = 2;

	g_food_Info_[5][HP_3].x = 398;
	g_food_Info_[5][HP_3].y = 266;
	g_food_Info_[5][HP_3].width = 61;
	g_food_Info_[5][HP_3].height = 110;
	g_food_Info_[5][HP_3].good_or_worst = 2;

	g_food_Info_[5][HP_2].x = 409;
	g_food_Info_[5][HP_2].y = 395;
	g_food_Info_[5][HP_2].width = 53;
	g_food_Info_[5][HP_2].height = 107;
	g_food_Info_[5][HP_2].good_or_worst = 2;

	g_food_Info_[5][HP_1].x = 400;
	g_food_Info_[5][HP_1].y = 518;
	g_food_Info_[5][HP_1].width = 59;
	g_food_Info_[5][HP_1].height = 111;
	g_food_Info_[5][HP_1].good_or_worst = 2;

	g_food_Info_[5][HP_0].x = 398;
	g_food_Info_[5][HP_0].y = 641;
	g_food_Info_[5][HP_0].width = 68;
	g_food_Info_[5][HP_0].height = 115;
	g_food_Info_[5][HP_0].good_or_worst = 2;

	////////////////////////////////////////////////

	g_food_Info_[10][HP_1].x = 334;
	g_food_Info_[10][HP_1].y = 779;
	g_food_Info_[10][HP_1].width = 54;
	g_food_Info_[10][HP_1].height = 115;
	g_food_Info_[10][HP_1].good_or_worst = 1;

	g_food_Info_[10][HP_0].x = 330;
	g_food_Info_[10][HP_0].y = 894;
	g_food_Info_[10][HP_0].width = 71;
	g_food_Info_[10][HP_0].height = 113;
	g_food_Info_[10][HP_0].good_or_worst = 1;


	g_food_Info_[11][HP_1].x = 405;
	g_food_Info_[11][HP_1].y = 777;
	g_food_Info_[11][HP_1].width = 58;
	g_food_Info_[11][HP_1].height = 115;
	g_food_Info_[11][HP_1].good_or_worst = 1;

	g_food_Info_[11][HP_0].x = 407;
	g_food_Info_[11][HP_0].y = 894;
	g_food_Info_[11][HP_0].width = 70;
	g_food_Info_[11][HP_0].height = 119;
	g_food_Info_[11][HP_0].good_or_worst = 1;

	m_aniIndex = 0;
	m_HP = 5;
	is_Draw = false;
}


Myballoon::~Myballoon()
{
}

void Myballoon::Loding()
{
	g_food = new dsTexture("Food");
	g_food->LoadFromFilename("food.png");

	srand((unsigned)time(NULL));

	is_Draw = TRUE;

	m_aniIndex = rand() % 12;
	dstX = (rand() % 440);
	dstY = (rand() % 200) - 200;

	if (m_aniIndex < 6)
		m_HP = 5;
	else if (m_aniIndex >= 6)
		m_HP = 1;

}

void Myballoon::Draw()
{

	srcX = g_food_Info_[m_aniIndex][m_HP].x;
	srcY = g_food_Info_[m_aniIndex][m_HP].y;

	width = g_food_Info_[m_aniIndex][m_HP].width;
	height = g_food_Info_[m_aniIndex][m_HP].height;

	m_good_or_worst = g_food_Info_[m_aniIndex][m_HP].good_or_worst;

	if (is_Draw == TRUE)
		g_food->Draw(dstX, dstY, srcX, srcY, width, height, 0);

}

void Myballoon::reset()
{
	randomize();

	m_aniIndex = random(12);
	is_Draw = TRUE;

	if (m_aniIndex < 6)
		m_HP = 5;
	else if (m_aniIndex >= 6)
		m_HP = 1;

	m_good_or_worst = g_food_Info_[m_aniIndex][m_HP].good_or_worst;

	
	dstY = -200;
	dstX = random(400);
}

void Myballoon::move()
{
	dstY += 1;

}