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

//게임 플레이 상태 체크
enum class EState { Menu = 0, Insturction=1,GameLoding = 2, Game = 3, GameOver = 4,GameWin=5 };
enum class ELevel { GameOver = 0, Level_1 = 1, Level_2 = 2, Level_3 = 3, Level_4 = 4, Level_5 = 5 , GameWin=6};
extern ELevel Level;


//초기화
void lnit();
void LoadingGameImage();


void MouseMove(int x, int y);
void MouseClick(int x, int y);

// 그림 그리기 담당 함수
void My_Game_Draw();
// 게임 돌리기
void My_Game_Main();
//노래 셋팅
void My_Game_Music();
//풍선 초기화 셋팅
void BalloonSet();
//풍선 수 오류 방지
void BalloonNum();