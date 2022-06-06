
#include "MyScore.h"


MyScore::MyScore()
{
	for(int i=0; i<10; i++)
	g_number[i] = NULL;
}


MyScore::~MyScore()
{
	for (int i = 0; i<10; i++)
		if (g_number[i])
			delete g_number[i];
}

void MyScore::GameScoreLoding()
{
	
	g_number[0] = new dsTexture("number0");
	g_number[0]->LoadFromFilename("0.png");

	g_number[1] = new dsTexture("number1");
	g_number[1]->LoadFromFilename("1.png");

	g_number[2] = new dsTexture("number2");
	g_number[2]->LoadFromFilename("2.png");

	g_number[3] = new dsTexture("number3");
	g_number[3]->LoadFromFilename("3.png");

	g_number[4] = new dsTexture("number4");
	g_number[4]->LoadFromFilename("4.png");

	g_number[5] = new dsTexture("number5");
	g_number[5]->LoadFromFilename("5.png");

	g_number[6] = new dsTexture("number6");
	g_number[6]->LoadFromFilename("6.png");

	g_number[7] = new dsTexture("number7");
	g_number[7]->LoadFromFilename("7.png");

	g_number[8] = new dsTexture("number8");
	g_number[8]->LoadFromFilename("8.png");

	g_number[9] = new dsTexture("number9");
	g_number[9]->LoadFromFilename("9.png");

}

void MyScore::Number_Draw(char a, int x, int y)
{
	switch (a)
	{
	case '0':
		g_number[0]->Draw(x, y, 0);
		break;
	case '1':
		g_number[1]->Draw(x, y, 0);
		break;
	case '2':
		g_number[2]->Draw(x, y, 0);
		break;
	case '3':
		g_number[3]->Draw(x, y, 0);
		break;
	case '4':
		g_number[4]->Draw(x, y, 0);
		break;
	case '5':
		g_number[5]->Draw(x, y, 0);
		break;
	case '6':
		g_number[6]->Draw(x, y, 0);
		break;
	case '7':
		g_number[7]->Draw(x, y, 0);
		break;
	case '8':
		g_number[8]->Draw(x, y, 0);
		break;
	case '9':
		g_number[9]->Draw(x, y, 0);
		break;
	default:
		break;
	}
}
