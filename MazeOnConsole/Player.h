#pragma once
#include "MazeMap.h"
class Player
{
public:
	Player();
	~Player();
	void assignMap(MazeMap * m);
	int posX, posY;
	MazeMap *m;
	void initPos(int x, int y);
	bool canGoUp();
	bool canGoRight();
	bool canGoLeft();
	bool canGoDown();
	void goUp();
	void goRight();
	void goLeft();
	void goDown();
	bool reachTheGoal();
};

