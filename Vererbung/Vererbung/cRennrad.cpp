#include "cRennrad.h"

cRennrad::cRennrad(int radzahl_in, double luftdruck_in, double ertrag_in, double spass_in, int gang_in) : cNutzrad(radzahl_in, luftdruck_in, ertrag_in), cFreizeitrad(radzahl_in, luftdruck_in, spass_in){
	gang = gang_in;
}

int cRennrad::schalten(int gangwechsel) {
	if (gang >= 1) {
		gang = gangwechsel - 1;
	}
	return gang;
}

double cRennrad::aufpumpen(double druckplus) {
	if (gang == 6) {
		cout << "Druckbegrenzung" << endl;
		return druckplus -= 1;
	}
	else {
		cout << "Normale Druck" << endl;
		return druckplus;
	}
}
