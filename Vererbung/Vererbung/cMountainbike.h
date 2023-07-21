#pragma once
#include <iostream>
#include "cFahrrad.h"
#include "cFreizeitrad.h"
using namespace std;

class cMountainbike : public cFreizeitrad {
private:
	void schimpfen();
public:
	cMountainbike(int radzahl_in = 2, double luftdruck_in = 1.3, double spass_in = 100.0);
	double downhill(int hoehendifferenz);
	void steinschlag();
};

