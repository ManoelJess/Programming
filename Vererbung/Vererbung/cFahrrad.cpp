#include "cFahrrad.h"

cFahrrad::cFahrrad() {
	radzahl = 0;
	luftdruck = 0.0;
}

cFahrrad::cFahrrad(int radzahl_in, double luftdruck_in){
	radzahl = radzahl_in; luftdruck = luftdruck_in;
}

int cFahrrad::get_radzahl() {
	return radzahl;
}

double cFahrrad::get_luftdruck() {
	return luftdruck;
}

double cFahrrad::aufpumpen(double druckplus) {
	luftdruck += druckplus;
	if (druckplus > 3.5) {
		return druckplus;
	}
}