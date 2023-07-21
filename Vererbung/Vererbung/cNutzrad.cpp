#include "cNutzrad.h"

cNutzrad:: cNutzrad(int radzahl_in, double luftdruck_in, double ertrag_in): cFahrrad(radzahl_in, luftdruck_in){
	ertrag = ertrag_in;
}

double cNutzrad::kassieren(double einkommen) {
	return einkommen + ertrag;
}

double cNutzrad::wartungmachen(double kosten) {
	return ertrag - kosten;
}