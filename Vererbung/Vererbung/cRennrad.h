#pragma once
#include <iostream>
#include "cNutzrad.h"
#include "cFreizeitrad.h"

using namespace std;

class cRennrad : virtual public cNutzrad, virtual public  cFreizeitrad
{
private:
	int gang;
public:
	cRennrad(int = 2, double = 5.4, double = 0.0, double = 75.00, int = 18);
	int schalten(int gangwechsel);
	double aufpumpen(double druckplus);
};

