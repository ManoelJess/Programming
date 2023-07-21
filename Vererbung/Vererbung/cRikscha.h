#pragma once
#include <iostream>
#include "cFahrrad.h"
#include "cNutzrad.h"

class cRikscha : public cNutzrad {
private:
	int fahrgastzahl;
public:
	cRikscha(int radzahl_in = 4, double luftdruck_in = 2.7, double ertrag_in = 620.00, int fahrgastzahl_in = 1);
	int einsteigen(int rein);
	int aussteigen(int raus);
};

