
#include "Mysuin.h"


Mysuin::Mysuin()
{
	for (int i = 0; i < 3; i++)
	{
		g_48[i]=NULL;
		g_53[i]= NULL;
		g_60[i]= NULL;
		g_70[i]= NULL;
		g_90[i]= NULL;
	}
	
	SuIn_Kg = 99;

	 happy=FALSE;
	 sad=FALSE;

	Level_1_check = FALSE;
	Level_2_check = FALSE;
	Level_3_check = FALSE;
	Level_4_check = FALSE;
	Level_5_check = FALSE;
}


Mysuin::~Mysuin()
{
	for (int i = 0; i < 3; i++)
	{
		if (g_48[i])
			delete g_48[i];
		if (g_53[i])
			delete g_53[i];
		if (g_60[i])
			delete g_60[i];
		if (g_70[i])
			delete g_70[i];
		if (g_90[i])
			delete g_90[i];
		
	}
}

void Mysuin::Loading()
{
	g_48[0] = new dsTexture("48");
	g_48[0]->LoadFromFilename("48.png");

	g_48[1] = new dsTexture("48_happy");
	g_48[1]->LoadFromFilename("48_happy.png");

	g_48[2] = new dsTexture("48_sad");
	g_48[2]->LoadFromFilename("48_sad.png");

	g_53[0] = new dsTexture("53");
	g_53[0]->LoadFromFilename("53.png");

	g_53[1] = new dsTexture("53_happy");
	g_53[1]->LoadFromFilename("53_happy.png");

	g_53[2] = new dsTexture("53_sad");
	g_53[2]->LoadFromFilename("53_sad.png");

	g_60[0] = new dsTexture("60");
	g_60[0]->LoadFromFilename("60.png");

	g_60[1] = new dsTexture("60_happy");
	g_60[1]->LoadFromFilename("60_happy.png");

	g_60[2] = new dsTexture("60_sad");
	g_60[2]->LoadFromFilename("60_sad.png");

	g_70[0] = new dsTexture("70");
	g_70[0]->LoadFromFilename("70.png");

	g_70[1] = new dsTexture("70_happy");
	g_70[1]->LoadFromFilename("70_happy.png");

	g_70[2] = new dsTexture("70_sad");
	g_70[2]->LoadFromFilename("70_sad.png");

	g_90[0] = new dsTexture("90");
	g_90[0]->LoadFromFilename("90.png");

	g_90[1] = new dsTexture("90_happy");
	g_90[1]->LoadFromFilename("90_happy.png");

	g_90[2] = new dsTexture("90_sad");
	g_90[2]->LoadFromFilename("90_sad.png");
}

void Mysuin::Game_48()
{
	if (happy == TRUE)
		g_48[1]->Draw(0, 0, 0);
	else if (sad == TRUE)
		g_48[2]->Draw(0, 0, 0);
	else
		g_48[0]->Draw(0, 0, 0);
}
void Mysuin::Game_53()
{
	if (happy == TRUE)
		g_53[1]->Draw(0, 0, 0);
	else if (sad == TRUE)
		g_53[2]->Draw(0, 0, 0);
	else
		g_53[0]->Draw(0, 0, 0);
}
void Mysuin::Game_60()
{
	if (happy == TRUE)
		g_60[1]->Draw(0, 0, 0);
	else if (sad == TRUE)
		g_60[2]->Draw(0, 0, 0);
	else
		g_60[0]->Draw(0, 0, 0);
}
void Mysuin::Game_70()
{
	if (happy == TRUE)
		g_70[1]->Draw(0, 0, 0);
	else if (sad == TRUE)
		g_70[2]->Draw(0, 0, 0);
	else
		g_70[0]->Draw(0, 0, 0);
}
void Mysuin::Game_90()
{
	if (happy == TRUE)
		g_90[1]->Draw(0, 0, 0);
	else if(sad==TRUE)
		g_90[2]->Draw(0, 0, 0);
	else
	g_90[0]->Draw(0, 0, 0);
}


void Mysuin::Kg_Diet(int food)
{
	if (food == 1)
	{
		SuIn_Kg += 2;
	}
	else if (food == 2)
	{
		SuIn_Kg -= 2;
	}
}

void Mysuin::Level_set()
{
	if (SuIn_Kg > 99)
	{
		Level = ELevel::GameOver;
	}
	if (90 <SuIn_Kg &&SuIn_Kg <= 99)
	{
		Level_1_check = TRUE;
		Level = ELevel::Level_1;
	}
	if (70 <SuIn_Kg&& SuIn_Kg <= 90)
	{
		Level_2_check = TRUE;
		Level = ELevel::Level_2;
	}
	if (60 < SuIn_Kg&&SuIn_Kg <= 70)
	{
		Level_3_check = TRUE;
		Level = ELevel::Level_3;
	}
	if (53 < SuIn_Kg &&SuIn_Kg <= 60)
	{
		Level_4_check = TRUE;
		Level = ELevel::Level_4;
	}
	if (46 < SuIn_Kg&&SuIn_Kg <= 53)
	{
		Level_5_check = TRUE;
		Level = ELevel::Level_5;
	}
	if (SuIn_Kg <= 46)
	{
		Level = ELevel::GameWin;
	}
	
}