
#include "MyGamebase.h"


MyGamebase::MyGamebase()
{
	 g_gameStart[2]=NULL;
	 g_gameExit[2]= NULL;
	 g_gameins[2]= NULL;
	 g_ready= NULL;
	 g_go= NULL;
	 g_Main= NULL;
	 g_Insturction[2]= NULL;
	 g_Win= NULL;
	 g_Lose= NULL;

	bool Start_check=FALSE;
	bool Exit_check= FALSE;
	bool ins_check= FALSE;

}


MyGamebase::~MyGamebase()
{
	for (int i = 0; i < 2; i++)
	{
		if (g_gameExit[i])
			delete g_gameExit[i];
		if (g_gameins[i])
			delete g_gameins[i];
		if (g_Insturction[i])
			delete g_Insturction[i];
		if (g_gameStart[i])
			delete g_gameStart[i];
	}

	if (g_ready) //널이 아닌 어떤 값이라면 지워랏! 
		delete g_ready;
	if (g_go)
		delete g_go;
	if (g_Main)
		delete g_Main;
	if (g_Win)
		delete g_Win;
	if (g_Lose)
		delete g_Lose;
}

void MyGamebase::Loading()
{
	g_Win = new dsTexture("Win");
	g_Win->LoadFromFilename("win.png");

	g_Lose = new dsTexture("lose");
	g_Lose->LoadFromFilename("lose.png");

	g_Main = new dsTexture("Main");
	g_Main->LoadFromFilename("메인.png");

	g_go = new dsTexture("Go");
	g_go->LoadFromFilename("go.png");

	g_ready = new dsTexture("Ready");
	g_ready->LoadFromFilename("ready.png");

	g_gameExit[0] = new dsTexture("game_exit");
	g_gameExit[0]->LoadFromFilename("game_exit.png");

	g_gameExit[1] = new dsTexture("game_exit2");
	g_gameExit[1]->LoadFromFilename("game_exit2.png");

	g_gameins[0] = new dsTexture("game_ins");
	g_gameins[0]->LoadFromFilename("game_ins.png");

	g_gameins[1] = new dsTexture("game_ins2");
	g_gameins[1]->LoadFromFilename("game_ins2.png");

	g_gameStart[0] = new dsTexture("game_start");
	g_gameStart[0]->LoadFromFilename("game_start.png");

	g_gameStart[1] = new dsTexture("game_start2");
	g_gameStart[1]->LoadFromFilename("game_start2.png");

	g_Insturction[0] = new dsTexture("insturction");
	g_Insturction[0]->LoadFromFilename("insturction.png");

	g_Insturction[1] = new dsTexture("insturction2");
	g_Insturction[1]->LoadFromFilename("insturction2.png");
	
}
void MyGamebase::Draw_gameStart(int x, int y)
{
	if (!Start_check)
	g_gameStart[0]->Draw(x, y, 0);
	if(Start_check)
		g_gameStart[1]->Draw(x, y, 0);
	
}
void MyGamebase::Draw_gameExit(int x, int y)
{
	if(!Exit_check)
	g_gameExit[0]->Draw(x, y, 0);
	if(Exit_check)
	g_gameExit[1]->Draw(x, y, 0);
}
void MyGamebase::Draw_gameins(int x, int y)
{
	if (!ins_check)
	g_gameins[0]->Draw(x, y, 0);
	if (ins_check)
		g_gameins[1]->Draw(x, y, 0);
}
