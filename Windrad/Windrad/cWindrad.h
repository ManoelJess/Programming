#pragma once
#include <iostream>
#include <string>		
using namespace std;

class cWindrad
{
private:
	//Attribut der Klasse cWindrad
	string Typ;
	double hoehe;
	double leistung;
	double breiteAngabe;
	double laengeAngabe;
	void korrHoehe();
public:
	//Methode der Klasse cWindrad
	cWindrad(string Typ_in = "--", double hoehe_in = 130.0, double leistung_in = 0.0, double breiteAngabe_in = 0.0, double laengeAngabe_in = 0.0 );
	void eingabe();
	void ausgabe();
	string get_Typ();							//Hilfe Funktion für die Bedienung vom Typ, weil es privat ist
	//void print_korrHoehe();						//Hilfe Funktion für die Implementation der Funktion korrHoehe weil, es privat ist
};

