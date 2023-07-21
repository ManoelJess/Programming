#pragma once
#include <iostream>
#include<string>
#include "cStadt.h"

using namespace std;

class cEtappe
{
private:
	cStadt stadt1;
	cStadt stadt2;
public:
	cEtappe(cStadt, cStadt);
	void etaPlan();
};

