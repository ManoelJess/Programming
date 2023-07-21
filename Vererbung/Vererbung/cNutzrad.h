#pragma once
#include "cFahrrad.h"
#include <iostream>
using namespace std;

class cNutzrad : public virtual cFahrrad{
protected:
	double ertrag;
public:
	cNutzrad(int radzahl_in, double luftdruck_in, double ertrag_in);
	double kassieren(double einkommen);
	double wartungmachen(double kosten);
};

