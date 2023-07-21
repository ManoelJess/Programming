#include "cWindrad.h"

int main() {
	//Deklaration von Objekten mit Initialisierungen
	cWindrad wr1("Windstrom23", 131.8, 320.0, 48.3, 8.72);
	cWindrad wr2("Watt4Watt78", 192.7, 730.0, 56.76, 5.80);
	cWindrad wr3;

	//Ausgabe des Inhaltes von Objekten
	cout << "Die Windräder sind:" << endl;
	wr1.ausgabe();
	wr2.ausgabe();
	wr3.ausgabe();

	// Deklaration eines Arrays aus 1000 Elementen (Objekten)
	cWindrad array[1000];
	for (int i = 0; i < 1000; i++) {
		array[i].eingabe();							//Die Zeile ermöglicht den Benutzer Objekte zu erstellen

		if (array[i].get_Typ() == "-") {
			break;
		}

		array[i].ausgabe();							//Ausgabe des Inhaltes von Objekten			
		//korrHoehe(cWindrad::hoehe);
	}

	

	return 0;
}