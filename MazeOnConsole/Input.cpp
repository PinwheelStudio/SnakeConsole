#include "Input.h"



Input::Input()
{
	esc = up = down = left = right = false;
}


Input::~Input()
{
}

void Input::getKey()
{
	esc = up = down = left = right =  false;
	char c = _getch();
	if (c == 27)
		esc = true;
	else /*if (c == 224)*/
	{
		c = _getch();
		if (c == 72)
			up = true;
		else if (c == 75)
			left = true;
		else if (c == 77)
			right = true;
		else if (c == 80)
			down = true;
	}
}