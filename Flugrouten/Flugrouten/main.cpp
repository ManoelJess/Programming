/*Flugroutenplanung eines Fluggastes einer kleineren Fluggesellschaft mit Zielen in
Frankreich und Deutschland. Eine Flugreise besteht aus einer oder mehreren Etappen*/

#include "cEtappe.h"
#include "cStadt.h"

int main() {

	string stadt, ziel;
	cout << "Geben sie bitte Ihre Startstadt und die Zielstadt" << endl;
	cin >> stadt;
	cin >> ziel;

	const int anzahlstadt = 12;
	cStadt staedte[anzahlstadt] = {
	cStadt("Hamburg", "Toulouse", "Paris", "", ""),
	cStadt("Berlin", "Korsika", "", "", ""),
	cStadt("Dortmund", "Korsika", "", "", ""),
	cStadt("Leipzig", "Nizza", "", "", ""),
	cStadt("Dresden", "Nizza", "", "", ""),
	cStadt("Koeln", "Nizza", "Korsika", "Paris", ""),
	cStadt("Paris", "Koeln", "Stuttgart", "Muenchen", "Hamburg"),
	cStadt("Stuttgart", "Korsika", "Paris", "", ""),
	cStadt("Muenchen", "Paris", "", "", ""),
	cStadt("Nizza", "Koeln", "Leipzig", "Dresden", ""),
	cStadt("Toulouse", "Hamburg", "", "", ""),
	cStadt("Korsika", "Stuttgart", "Koeln", "Dortmund", "Berlin")
	};

	for (int i = 0; i < 12; i++) {
		staedte[i].listeZiele();
		staedte[i].checkZiel(stadt);
		//staedte[i].checkStadt(stadt, ziel);
	}

	//cEtappe::etaPlan();

	return 0;
}