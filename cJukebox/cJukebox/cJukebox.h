#pragma once
#include <iostream>
using namespace std;

class cJukebox
{
	int* p;
	int size;
public:
	cJukebox(const int&);
	int operator[](int index);
};
