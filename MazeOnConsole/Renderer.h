#pragma once
#include <iostream>
#include <CoreWindow.h>
#include "MazeMap.h"
#include "Player.h"

using namespace std;

class Renderer
{
public:
	char wallTexture = '#';
	char corridorTexture = ' ';
	char voidTexture = ' ';
	char playerTexture = '@';
	char goalTexture = 'G';
	Renderer();
	~Renderer();
	void gotoxy(int x, int y);
	void txtColor(int color);
	void drawMap(MazeMap *m);
	void drawPlayer(Player *p);
	void erasePlayer(Player *p);

	void debugDrawPlayerPos(Player * p);

	void drawGoal(MazeMap * m);

};

