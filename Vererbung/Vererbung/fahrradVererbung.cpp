//Fahraeder mit Mehrfachverhebung

#include "cFahrrad.h"
#include "cNutzrad.h"
#include "cFreizeitrad.h"
#include "cLastdreirad.h"
#include "cRikscha.h"
#include "cMountainbike.h"
#include "cEinrad.h"
#include "cRennrad.h"
#include <iostream>

int main() {
	cLastdreirad hauruck;
	cRikscha einergehtnochrein(3, 850.50, 3);
	cMountainbike downhillstar;
	cEinrad obenbleiben;
	cRennrad nodope;

	cout << "Radzahl des Lastdreirads: " << hauruck.get_radzahl() << endl;
	cout << "Radzahl der Rikscha: " << einergehtnochrein.get_radzahl() << endl;
	cout << "Radzahl des Mountainbikes: " << downhillstar.get_radzahl() << endl;
	cout << "Radzahl des Einrads: " << obenbleiben.get_radzahl() << endl;
	cout << "Mountainbike nach 500 meter downhill, spass = "
		<< downhillstar.downhill(500) << endl;
	cout << "Mountainbike bekommt einen Steinschlag" << endl;
	downhillstar.steinschlag();
	cout << "Mountainbike nach Steinschlag, spass = "
		<< downhillstar.downhill(0) << endl;
	cout << "Mountainbike bekommt einen Steinschlag" << endl;
	downhillstar.steinschlag();
	cout << "Mountainbike nach Steinschlag, spass = "
		<< downhillstar.downhill(0) << endl;
	cout << "Radzahl des Rennrads: " << nodope.cFahrrad::get_radzahl() << endl;
	nodope.aufpumpen(1.3);
	cout << "Rennrad nach Aufpumpen, luftdruck = " << nodope.get_luftdruck() << endl;
	cout << "Ende" << endl;

	return 0;
}