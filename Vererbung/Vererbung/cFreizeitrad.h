#pragma once
#include "cFahrrad.h"
#include <iostream>

class cFreizeitrad : public virtual cFahrrad {
protected:
	double spass;
public:
	cFreizeitrad(int radzahl_in, double luftdruck_in, double spass_in);
	void abschliessen(bool disziplin);
	double geniessen(double genuss);
};

