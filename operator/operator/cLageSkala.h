#pragma once
#include <iostream>
using namespace std;

class cLageSkala
{
private:
	double unterGrenze, oberGrenze, aktVal;
public:
	cLageSkala(double = 0.0, double = 0.5, double = 1.0);
	void ausgabe();
	friend ostream& operator << (ostream& o, cLageSkala&);
	friend istream& operator >> (istream& i, cLageSkala&);
	friend cLageSkala operator ++ (cLageSkala&);
	cLageSkala operator -- ();
};

