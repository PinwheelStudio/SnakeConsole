#include "Renderer.h"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

void Renderer::gotoxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}

void Renderer::txtColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE), color);
}

void Renderer::drawMap(MazeMap *m)
{
	txtColor(112);
	for (int i = 0; i < m->height; ++i)
	{
		for (int j = 0; j < m->width; ++j)
		{
			if (m->matrix[i][j] == '0' || m->matrix[i][j] == 'p' || m->matrix[i][j] == 'g')
			{
				//txtColor(15);
				cout << corridorTexture;
			}
			else if (m->matrix[i][j] == '1')
			{
				//txtColor(42);
				cout << wallTexture;
			}
			else
			{
				//txtColor(15);
				cout << voidTexture;
			}

		}
		cout << endl;
	}
	//txtColor(15);
}

void Renderer::drawPlayer(Player * p)
{
	gotoxy(p->posX, p->posY);
	cout << playerTexture;
}

void Renderer::erasePlayer(Player * p)
{
	gotoxy(p->posX, p->posY);
	cout << " ";
}

void Renderer::debugDrawPlayerPos(Player *p)
{
	gotoxy(60, 1);
	cout << p->posX << " " << p->posY;
}

void Renderer::drawGoal(MazeMap *m)
{
	gotoxy(m->goalPosX, m->goalPosY);
	cout << goalTexture;
}