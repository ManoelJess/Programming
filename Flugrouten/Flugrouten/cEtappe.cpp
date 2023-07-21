#include "cEtappe.h"

cEtappe::cEtappe(cStadt stadt1_in, cStadt stadt2_in): stadt1(stadt1_in), stadt2(stadt2_in){
}

void cEtappe::etaPlan() {
	string ziel;
	cStadt* newZiel = 0;
	//cEtappe* new ;
	stadt1.listeZiele();
	stadt1.checkZiel(ziel);
	stadt1.checkStadt(newZiel, ziel);

	//return new;
}