#pragma once
#include <iostream>
#include<string>

using namespace std;

class cStadt { // Hilfsklasse fuer den Verbindungsplan
private:
	string stadtName;
	string ziele[4];
public:
	cStadt(string, string, string, string, string);
	string get_Name();
	void listeZiele(); // Gibt Name und mögliche Ziele der Stadt aus
	bool checkZiel(string zi); // Prueft zi auf gueltiges Ziel
	bool checkStadt(cStadt* staedte, string stadt);
	// Prueft die Existenz von stadt
};
