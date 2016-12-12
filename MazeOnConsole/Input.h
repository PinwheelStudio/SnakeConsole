#pragma once
#include <conio.h>
#include <Windows.h>
class Input
{
public:
	bool esc, up, down, left, right;
	Input();
	~Input();
	void getKey();
};

