#pragma once

#include "global.h"
#include "dsTexture.h"
#include <time.h>
#include "dsOpenALSoundManager.h"
#include <stdlib.h>
#include "MyGamebase.h"
#include "MyRect.h"
#include "Mysuin.h"
#include "Myballoon.h"
#include "MyScore.h"

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand()%(n))

//���� �÷��� ���� üũ
enum class EState { Menu = 0, Insturction=1,GameLoding = 2, Game = 3, GameOver = 4,GameWin=5 };
enum class ELevel { GameOver = 0, Level_1 = 1, Level_2 = 2, Level_3 = 3, Level_4 = 4, Level_5 = 5 , GameWin=6};
extern ELevel Level;


//�ʱ�ȭ
void lnit();
void LoadingGameImage();


void MouseMove(int x, int y);
void MouseClick(int x, int y);

// �׸� �׸��� ��� �Լ�
void My_Game_Draw();
// ���� ������
void My_Game_Main();
//�뷡 ����
void My_Game_Music();
//ǳ�� �ʱ�ȭ ����
void BalloonSet();
//ǳ�� �� ���� ����
void BalloonNum();