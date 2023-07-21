#include "cRikscha.h"

cRikscha::cRikscha(int radzahl_in, double luftdruck_in, double ertrag_in, int fahrgastzahl_in) : cNutzrad(radzahl_in, luftdruck_in, ertrag_in) {
	fahrgastzahl = fahrgastzahl_in;
}

int cRikscha::einsteigen(int rein) {
	if (fahrgastzahl <= 7) {
		fahrgastzahl++;
	}
	return fahrgastzahl;
}

int cRikscha::aussteigen(int raus) {
	if (fahrgastzahl >= 0) {
		fahrgastzahl--;
	}
	return fahrgastzahl;
}