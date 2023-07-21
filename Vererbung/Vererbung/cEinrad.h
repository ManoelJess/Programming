#pragma once
#include <iostream>
#include "cFahrrad.h"
#include "cFreizeitrad.h"

class cEinrad :public cFreizeitrad{
public:
	cEinrad(int radzahl_in = 1, double luffdruck_in = 2.3, double spass_in = 200.0);
	double geniessen(double genuss);
};

