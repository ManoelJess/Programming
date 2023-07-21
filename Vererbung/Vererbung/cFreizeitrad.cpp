#include "cFreizeitrad.h"

cFreizeitrad::cFreizeitrad(int radzahl_in, double luftdruck_in, double spass_in) : cFahrrad(radzahl_in, luftdruck_in) {
	spass = spass_in;
}

void cFreizeitrad::abschliessen(bool disziplin) {
	if (disziplin) {
		spass += 20;
	}
	else {
		spass = 0.0;
	}
}

double cFreizeitrad::geniessen(double genuss) {
	return genuss + spass;
}