#include "cEinrad.h"

cEinrad::cEinrad(int radzahl_in, double luftdruck_in, double spass_in) : cFreizeitrad(radzahl_in, luftdruck_in, spass_in){

}

double cEinrad::geniessen(double genuss) {
	if (genuss < 5 || genuss > 20 ) {
		return spass;
	}
}
