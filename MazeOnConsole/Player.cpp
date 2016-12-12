#include "Player.h"
#include <iostream>
using namespace std;


Player::Player()
{
}


Player::~Player()
{
}

void Player::assignMap(MazeMap *m)
{
	this->m = m;
}

void Player::initPos(int x, int y)
{
	posX = x;
	posY = y;
}

bool Player::canGoUp()
{
	if (posY - 1 >= 0 && m->matrix[posY - 1][posX] == '0')
		return true;
	return false;
}

bool Player::canGoRight()
{
	if (posX + 1 < m->width && m->matrix[posY][posX + 1] == '0')
		return true;
	return false;
}

bool Player::canGoLeft()
{
	if (posX - 1 >= 0 && m->matrix[posY][posX - 1] == '0')
		return true;
	return false;
}

bool Player::canGoDown()
{
	if (posY + 1 < m->height && m->matrix[posY + 1][posX] == '0')
		return true;
	return false;
}

void Player::goUp()
{
	--posY;
	//cout << "u";
}

void Player::goRight()
{
	++posX;
	//cout << "r";
}

void Player::goLeft()
{
	--posX;
	//cout << "l";
}

void Player::goDown()
{
	++posY;
	//cout << "d";
}

bool Player::reachTheGoal()
{
	return posX == m->goalPosX && posY == m->goalPosY;
}
