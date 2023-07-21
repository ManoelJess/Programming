//Das Programm gibt die ersten 10000 Primzahlen aus.

#include "cPrimZahl.h"

int main() {

	char input;
	//cPrimZahl primzahl(rand() % 10000); int i;
	cPrimZahl primzahl; int i;
	do {
		//cout << "Primzahl ist " << primzahl << endl;
		cout << "> ";
		cin >> input;
		switch (input) {
		case '+':			//Wenn der User "+" eingibt, ist die naechtse Primzahl ausgegeben
			++primzahl;
			cout << "Nach ++primzahl" << endl;
			cout << primzahl;
			break;
		case '-':			//Wenn der User "-" eingibt, ist die vorherige Primzahl ausgegeben
			--primzahl;
			cout << "Nach --primzahl" << endl;
			cout << primzahl;
			break;
		case 's':			//Wenn der User "s" eingibt, soll er noch eine Zahl eingeben, dann ist die Primzahl ausgegeben, die an der Position der eingegebene Zahl ist
			cout << "Geben Sie eine Zahl: ";
			cin >> i;
			cout << "primzahl[" << i << "] = " << primzahl[i] << endl;
		case 'e':			//Wenn der User "e" eingibt, ist das Programm beendet.
			cout << "Unbekanntes Kommando." << endl;
			break;
		default:
			break;
		}
	} while (input != 'e');

	return 0;
}