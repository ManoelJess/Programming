#include "cLageSkala.h"

cLageSkala::cLageSkala(double unterGrenze_in, double aktVal_in, double oberGrenze_in)
{
	unterGrenze = unterGrenze_in;
	oberGrenze = oberGrenze_in;
	aktVal = aktVal_in;
}

void cLageSkala::ausgabe()
{
	cout << "UnterGrenze: " << unterGrenze << ", " << "OberGrenze: " << oberGrenze << ", " << "Aktuelle Werte: " << aktVal << endl;
}

cLageSkala cLageSkala::operator--()
{
	aktVal -= 1;
	return *this;
}

ostream& operator<<(ostream& o, cLageSkala& skala)
{
	int i = 0;
	double x = (skala.oberGrenze - skala.unterGrenze)/42;
	int y = (skala.aktVal - skala.unterGrenze) / x;
	o << "|";
	do {
		o << "-";
		if(i == y){
			o << "*";
		}
		i++;

	} while (i < 42);
	o << "|";

	return o;
}

istream& operator >> (istream& i, cLageSkala& skala)
{
	do {
		cout << "Untergrenze eingeben: ";
		i >> skala.unterGrenze;

		cout << "Aktueller Wert eingeben: ";
		i >> skala.aktVal;

		cout << "Obergrenze eingeben: ";
		i >> skala.oberGrenze;
	} while (skala.aktVal < skala.unterGrenze || skala.aktVal > skala.oberGrenze || skala.oberGrenze < skala.unterGrenze);
		return i;
}

cLageSkala operator++ (cLageSkala& skala)
{
	skala.aktVal += 1;
	return skala;
}
