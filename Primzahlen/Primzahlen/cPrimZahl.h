#pragma once
#include <iostream>
using namespace std;

#define MAXPRIM 10000

class cPrimZahl
{
private:
	int aktprim;
	friend ostream& operator<<(ostream&o , cPrimZahl primzahl);
public:
	cPrimZahl(int = 1);
	bool isPrim(int n);
	int korrektur(int);
	cPrimZahl operator++(void);
	cPrimZahl operator--(void);
	cPrimZahl operator[](int index);
};

