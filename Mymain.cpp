#include "Mymain.h"

EState State;
ELevel Level;

MyGamebase myGamebase;
MyScore myscore;
Mysuin Suin;
DWORD g_aniTickCount;
DWORD g_balloonCount;

Myballoon balloon[10];
int balloonNum = 2;

char Score_char[2];


#define Game_TIME 1


//초기화
void lnit()
{
	State = EState::Menu;
}
//이미지 셋팅
void LoadingGameImage()
{
	myGamebase.Loading();
	Suin.Loading();
	g_aniTickCount = GetTickCount();

	for (int i = 0; i < 10; i++)
		balloon[i].Loding();

	g_balloonCount = GetTickCount();
	myscore.GameScoreLoding();

}
//노래
void My_Game_Music()
{
	dsOpenALSoundManager *pSoundManger = GetOpenALSoundManager();
	dsSound *pSound = pSoundManger->LoadSound("test.wav", true);

	pSound->Play();
	
}
//키 값
void MouseMove(int x, int y)
{
	switch (State)
	{
	case EState::Menu:
	{
		if (MyRect::Collision(x, y, 150, 500, 168, 43))
			myGamebase.Start_check = TRUE;
		else
			myGamebase.Start_check = FALSE;

		if (MyRect::Collision(x, y, 150, 580, 170, 49))
			myGamebase.ins_check = TRUE;
		else
			myGamebase.ins_check = FALSE;

		if (MyRect::Collision(x, y, 185, 660, 106, 35))
			myGamebase.Exit_check = TRUE;
		else
			myGamebase.Exit_check = FALSE;

	}
	break;
	case EState::Insturction:
	{
		if (MyRect::Collision(x, y, 300, 710, 168, 43))
			myGamebase.Start_check = TRUE;
		else
			myGamebase.Start_check = FALSE;

		if (MyRect::Collision(x, y, 10, 720, 106, 35))
			myGamebase.Exit_check = TRUE;
		else
			myGamebase.Exit_check = FALSE;
	}
	break;

	default:
		break;
	}
}
void MouseClick(int x, int y)
{
	switch (State)
	{
	case EState::Menu:
	{
		if (MyRect::Collision(x, y, 150, 500, 168, 43))
			State = EState::GameLoding;

		if (MyRect::Collision(x, y, 150, 580, 170, 49))
			State = EState::Insturction;

		if (MyRect::Collision(x, y, 185, 660, 106, 35))
			exit(1);
	}
	break;
	case EState::Insturction:
	{
		if (MyRect::Collision(x, y, 300, 710, 168, 43))
			State = EState::GameLoding;

		if (MyRect::Collision(x, y, 10, 720, 106, 35))
			State = EState::Menu;
			
	}
	break;
	case EState::GameLoding:
	{

	}
	break;
	case EState::Game:
	{
		for (int i = 0; i < 10; i++)
		{
			if (MyRect::Collision(x, y, balloon[i].dstX, balloon[i].dstY, balloon[i].width, balloon[i].height - 50))
			{
				balloon[i].m_HP -= 1;

				if (balloon[i].m_HP == 0)
				{
					balloon[i].is_Draw = FALSE;
					Suin.Kg_Diet(balloon[i].m_good_or_worst);

				}
				if (balloon[i].is_Draw == FALSE)
					balloon[i].reset();
				
			}
		}
		
		
	}
	break;
	case EState::GameWin:
	{
		State = EState::Menu;
		Suin.SuIn_Kg = 99;
		balloonNum = 2;
		Suin.Level_1_check = FALSE;
		Suin.Level_2_check = FALSE;
		Suin.Level_3_check = FALSE;
		Suin.Level_4_check = FALSE;
		Suin.Level_5_check = FALSE;
	}
	break;
	case EState::GameOver:
	{
		State = EState::Menu;
		Suin.SuIn_Kg = 99;
		balloonNum = 2;
		Suin.Level_1_check = FALSE;
		Suin.Level_2_check = FALSE;
		Suin.Level_3_check = FALSE;
		Suin.Level_4_check = FALSE;
		Suin.Level_5_check = FALSE;
	}
	break;
	default:
		break;
	}

}

// 그림 그리기 담당 함수
void My_Game_Draw()
{

	DWORD tickCount;
	tickCount = GetTickCount();

	switch (State)
	{
	case EState::Menu:
	{
		myGamebase.g_Main->Draw(0, 0, 0);
		myGamebase.Draw_gameStart(150, 500);
		myGamebase.Draw_gameins(150, 580);
		myGamebase.Draw_gameExit(185, 660);
		if (tickCount - g_aniTickCount > 500)
		{
			g_aniTickCount = tickCount;
		}

	}
	break;
	case EState::Insturction:
	{
		myGamebase.g_Insturction[myGamebase.g_index]->Draw(0, 0, 0);
		if (tickCount - g_aniTickCount > 500)
		{
			myGamebase.g_index++;
			myGamebase.g_index = myGamebase.g_index % 2;
			g_aniTickCount = tickCount;
		}
		myGamebase.Draw_gameStart(300, 710);
		myGamebase.Draw_gameExit(10, 720);

	}
	break;
	case EState::GameLoding:
	{
		Suin.Game_90();

		BalloonSet();

			if (tickCount - g_aniTickCount > 1500)
			myGamebase.g_ready->Draw(170, 100, 0);
			if (tickCount - g_aniTickCount > 3000)
				myGamebase.g_go->Draw(140, 190, 0);;
			if (tickCount - g_aniTickCount > 4000)
				State = EState::Game;
		
	}
	break;
	case EState::Game:
	{
		Suin.Level_set();
		BalloonNum();

		switch (Level)
		{
		case ELevel::Level_1:
		{
			Suin.Game_90();


			if (tickCount - g_balloonCount > Game_TIME)
			{
				for (int i = 0; i<balloonNum; i++)
				balloon[i].move();

				g_balloonCount = tickCount;
			}
			

		}
			break;
		case ELevel::Level_2:
		{
				Suin.Game_70();

				if (tickCount - g_balloonCount > Game_TIME)
				{
					for (int i = 0; i<balloonNum; i++)
						balloon[i].move();

					g_balloonCount = tickCount;
				}
		}
			break;
		case ELevel::Level_3:
		{
			Suin.Game_60();
			if (tickCount - g_balloonCount > Game_TIME)
			{
				for (int i = 0; i<balloonNum; i++)
					balloon[i].move();

				g_balloonCount = tickCount;
			}
		}
			break;
		case ELevel::Level_4:
		{
			Suin.Game_53();
			if (tickCount - g_balloonCount > Game_TIME)
			{
				for (int i = 0; i<balloonNum; i++)
					balloon[i].move();

				g_balloonCount = tickCount;
			}
		}
			break;
		case ELevel::Level_5:
		{
			Suin.Game_48();
			if (tickCount - g_balloonCount > Game_TIME)
			{
				for (int i = 0; i<balloonNum; i++)
					balloon[i].move();

				g_balloonCount = tickCount;
			}
		}
			break;
		case ELevel::GameOver:
		{
			State = EState::GameOver;
		}
			break;
		case ELevel::GameWin:
		{
			State = EState::GameWin;
		}
			break;
		default:
			break;
		}

		for (int i = 0; i<10; i++)
			balloon[i].Draw();

		itoa(Suin.SuIn_Kg, Score_char, 10);
		myscore.Number_Draw(Score_char[0], 350, 680);
		myscore.Number_Draw(Score_char[1], 400, 680);


	}
	break;
	case EState::GameWin:
	{
		myGamebase.g_Win->Draw(0, 0, 0);
	}
	break;
	case EState::GameOver:
	{
		myGamebase.g_Lose->Draw(0, 0, 0);
	}
	break;
	default:
		break;
	}
}
// 게임 돌리기 충돌 관리
void My_Game_Main()
{
	for (int i = 0; i < 10; i++)
	{
		if (balloon[i].dstY > 270)
		{
			if (balloon[i].m_good_or_worst == 1)
			{
				Suin.happy = TRUE;
				Suin.sad = FALSE;
			}
			else if (balloon[i].m_good_or_worst == 2)
			{
				Suin.happy = FALSE;
				Suin.sad = TRUE;
			}
		}

		if (balloon[i].dstY == 0)
		{
			Suin.happy = FALSE;
			Suin.sad = FALSE;
		}
	}

	for (int i = 0; i < 10; i++)
		if (balloon[i].dstY == 300)
		{
			switch (Level)
			{
			case ELevel::GameOver:
				break;
			case ELevel::Level_1:
			{
				if (balloon[i].m_good_or_worst == 2)
					Suin.SuIn_Kg += 3;
				if (balloon[i].m_good_or_worst == 1)
					Suin.SuIn_Kg -= 2;
			}
				break;
			case ELevel::Level_2:
			{
				if (balloon[i].m_good_or_worst == 2)
					Suin.SuIn_Kg += 3;
				if (balloon[i].m_good_or_worst == 1)
					Suin.SuIn_Kg -= 2;
			}
				break;
			case ELevel::Level_3:
			{
				if (balloon[i].m_good_or_worst == 2)
					Suin.SuIn_Kg += 3;
				if (balloon[i].m_good_or_worst == 1)
					Suin.SuIn_Kg -= 1;
			}
				break;
			case ELevel::Level_4:
			{
				if (balloon[i].m_good_or_worst == 2)
					Suin.SuIn_Kg += 3;
				if (balloon[i].m_good_or_worst == 1)
					Suin.SuIn_Kg -= 1;
			}
				break;
			case ELevel::Level_5:
			{
				if (balloon[i].m_good_or_worst == 2)
					Suin.SuIn_Kg += 3;
				if (balloon[i].m_good_or_worst == 1)
					Suin.SuIn_Kg -= 1;
			}
				break;
			case ELevel::GameWin:
				break;
			default:
				break;
			}
			

			balloon[i].reset();
		}
	
	
}


//풍선 초기화 셋팅
void BalloonSet()
{
	balloon[0].dstX = 0;
	balloon[0].dstY = -50;
	balloon[0].m_aniIndex = 3;
	balloon[0].m_HP = 5;

	balloon[1].dstX = 200;
	balloon[1].dstY = -100;
	balloon[1].m_aniIndex = 0;
	balloon[1].m_HP = 5;

	balloon[2].dstX = 100;
	balloon[2].dstY = -150;
	balloon[2].m_aniIndex = 5;
	balloon[2].m_HP = 5;

	balloon[3].dstX = 180;
	balloon[3].dstY = -200;
	balloon[3].m_aniIndex = 4;
	balloon[3].m_HP = 5;

	balloon[4].dstX = 350;
	balloon[4].dstY = -250;
	balloon[4].m_aniIndex = 2;
	balloon[4].m_HP = 5;

	balloon[5].dstX = 250;
	balloon[5].dstY = -300;
	balloon[5].m_aniIndex = 1;
	balloon[5].m_HP = 5;

	balloon[6].dstX = 10;
	balloon[6].dstY = -350;
	balloon[6].m_aniIndex = 2;
	balloon[6].m_HP = 5;

	balloon[7].dstX = 250;
	balloon[7].dstY = -400;
	balloon[7].m_aniIndex = 4;
	balloon[7].m_HP = 5;

	balloon[8].dstX = 30;
	balloon[8].dstY = -450;
	balloon[8].m_aniIndex = 1;
	balloon[8].m_HP = 5;

	balloon[9].dstX = 400;
	balloon[9].dstY = -500;
	balloon[9].m_aniIndex = 3;
	balloon[9].m_HP = 5;

}
//풍선 수 오류 방지
void BalloonNum()
{
	if (balloonNum >= 10)
		return;
	else
	{
		if(Suin.Level_1_check)
		balloonNum = 2;
		if (Suin.Level_1_check&&Suin.Level_2_check)
			balloonNum = 4;
		if (Suin.Level_1_check&&Suin.Level_2_check&&Suin.Level_3_check)
			balloonNum = 6;
		if (Suin.Level_1_check&&Suin.Level_2_check&&Suin.Level_3_check&&Suin.Level_4_check)
			balloonNum = 8;
		if (Suin.Level_1_check&&Suin.Level_2_check&&Suin.Level_3_check&&Suin.Level_4_check&&Suin.Level_5_check)
			balloonNum = 10;
	}
}