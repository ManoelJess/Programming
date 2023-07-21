#include "cLastdreirad.h"

cLastdreirad::cLastdreirad(int radzahl_in, double luftdruck_in, double ertrag_in, double nutzlast_in) : cNutzrad(radzahl_in, luftdruck_in, ertrag_in){
	nutzlast = nutzlast_in;
}

double cLastdreirad::zuladen(double lastplus) {
	nutzlast += lastplus;
	return nutzlast;
}

double cLastdreirad::abladen(double lastminus) {
	return nutzlast - lastminus;
}