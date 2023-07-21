#pragma once
#include <iostream>
#include "cFahrrad.h"
#include "cNutzrad.h"

class cLastdreirad : public cNutzrad {
private:
	double nutzlast;
public:
	cLastdreirad(int radzahl_in = 3, double luftdruck_in = 3.8, double ertrag_in = 380.00, double nutzlast_in = 72.50);
	double zuladen(double lastplus);
	double abladen(double lastminus);
};

