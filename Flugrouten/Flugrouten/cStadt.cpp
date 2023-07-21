#include "cStadt.h"

cStadt::cStadt(string name = "", string zi1 = "", string zi2 = "",
	string zi3 = "", string zi4 = "") { // Konstruktor
	stadtName = name;
	ziele[0] = zi1; ziele[1] = zi2; ziele[2] = zi3; ziele[3] = zi4;
}
string cStadt::get_Name() { 
	return stadtName; 
}

void cStadt::listeZiele() {
	cout << "Startort der Etappe: " << stadtName << endl;
	for (int i = 0; i < 4 && ziele[i] != ""; i++)
		cout << "moegliches Etappenziel " << i + 1 << " : " <<
		ziele[i] << endl;
}

bool cStadt::checkZiel(string zi) {								// true = o.k.; false = kein gueltiges Ziel
	
		for (int i = 0; i < 4; i++)
			if (ziele[i] == zi)									// Unter den moegliche Zielen gefunden
				return true;
	cout << "Ab " << stadtName << "gibt es kein zulaessiges Ziel " <<
		zi << endl;
	return false;												// alles andere ist kein zulaessiges Ziel
}
bool cStadt::checkStadt(cStadt* staedte, string stadt) {
	// Prueft ob es die Stadt gibt
	// Mitgliedsfunktion wegen Zugriffsrechten
	int anzahlstadt = 1;
	for (int i = 0; i < anzahlstadt; i++)
		if (staedte[i].stadtName == stadt) // gefunden
			return true;
	cout << stadt << "ist keine bekannte Stadt" << endl;
	return false;
}