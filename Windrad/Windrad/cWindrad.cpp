#include "cWindrad.h"

//Implementation von jeder Methode
cWindrad::cWindrad(string Typ_in, double hoehe_in, double leistung_in, double breiteAngabe_in, double laengeAngabe_in) {
	Typ = Typ_in;
	hoehe = (hoehe_in < 0)? hoehe_in * -1:hoehe_in;
	leistung = leistung_in;
	breiteAngabe = breiteAngabe_in;
	laengeAngabe = laengeAngabe_in;
}

void cWindrad::eingabe() {
	cout << "Geben Sie bitte der Typ des Windrads" << endl;
	cin >> Typ;
	cout << "Geben Sie bitte die Leistung des Windrads" << endl;
	cin >> leistung;
	cout << "Geben Sie bitte die Hoehe des Windrads" << endl;
	cin >> hoehe;
	cout << "Geben Sie bitte die Breite des Windrads" << endl;
	cin >> breiteAngabe;
	cout << "Geben Sie bitte die Laenge des Windrads" << endl;
	cin >> laengeAngabe;
	korrHoehe();
}

void cWindrad::ausgabe() {
	cout << "Typ = " << Typ << endl;
	cout << "Hoehe = " << hoehe << endl;
	cout << "Leistung = " << leistung << endl;
	cout << "BreiteAngabe = " << breiteAngabe << endl;
	cout << "LaengeAngabe = " << laengeAngabe << endl;
	korrHoehe();
	cout << "---------------------------------------------" << endl;
}

string cWindrad::get_Typ() {
	return Typ;
}

void cWindrad::korrHoehe() {
	if (breiteAngabe > 53.2 && laengeAngabe < 6.7) {
		if (hoehe > 200) {
			hoehe = 200;
		}
		else if (hoehe > 130) {
			hoehe = 130;
		}
	}
}

