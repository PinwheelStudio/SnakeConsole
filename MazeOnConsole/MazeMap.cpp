#include "MazeMap.h"



MazeMap::MazeMap()
{
}


MazeMap::~MazeMap()
{
}

void MazeMap::loadFromFile(string fileName)
{
	ifstream in;
	in.open(fileName);
	in >> this->height >> this->width;
	//in >> playerInitPosX >> playerInitPosY;
	//in >> goalPosX >> goalPosY;
	for (int i = 0; i < this->height; ++i)
	{
		for (int j = 0; j < this->width; ++j)
		{
			char tmp;
			in >> tmp;
			if (tmp == 'p')
			{
				playerInitPosY = i;
				playerInitPosX = j;
				matrix[i][j] = '0';
			}
			else if (tmp == 'g')
			{
				goalPosY = i;
				goalPosX = j;
				matrix[i][j] = '0';
			}
			else
			{
				matrix[i][j] = tmp;
			}
		}
	}

	in.close();
}