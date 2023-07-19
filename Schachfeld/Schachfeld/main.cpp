//Implementierung des Schachspiels

#include <iostream>

using namespace std;

class cSchachfeld {
private:
	char spalte;
	int reihe;
	cSchachfeld* pprev;

	bool isGueltig(char spalte_in, int reihe_in) {			//Die Funktion prueft, ob der Spieler sich richtig bewegt hat
		if (!(reihe_in >= 1 && reihe_in <= 8) || !(spalte_in >= 'a' && spalte_in <= 'h')) return false;
		return (abs(reihe - reihe_in) == 2 && abs(spalte - spalte_in) == 1) || (abs(reihe - reihe_in) == 1 && abs(spalte - spalte_in) == 2);
	}
public:
	cSchachfeld(char spalte_in, int reihe_in, cSchachfeld* pprev_in = (cSchachfeld*)0) {		//Universellkonstruktor
		spalte = spalte_in;
		reihe = reihe_in;
		pprev = pprev_in;
		cout << endl;
		ausgabe();
		cout << endl;
	}
	~cSchachfeld() {		//Destruktor
		if (pprev) delete pprev;
		cout << "Dekonstruktion von ";
		ausgabe();
		cout << endl;

	}
	void ausgabe() {		//Ausgabe der aktuellen Position des Spielers
		cout << spalte << "/" << reihe;
	}
	bool geschlagen() {			//Prueft, ob der Koenig erreicht ist oder nicht und wenn es der Fall ist, hat der Spieler das Spiel gewonnen
		if (spalte == 'c' && reihe == 1) return true;
		return false;
	}

	cSchachfeld* springerzug() {
		char spalte_in;
		int reihe_in, c = 0;

		do {
			if (c++) cout << "Falsche Eingabe oder ungueltiger Zug. Bitte Neueingabe. " << endl;
			moeglicheZuege();
			cout << "Spalte/Reihe (Bsp. d4): ";
			cin >> spalte_in;
			cin >> reihe_in;
		} while (!isGueltig(spalte_in, reihe_in));

		return new cSchachfeld(spalte_in, reihe_in, this);
	}
	void moeglicheZuege() {
		cout << "Moegliche Zuege sind: " << endl;
		for (int i = 0; i < 8; i++) {
			for (int j = 1; j <= 8; j++) {
				if (isGueltig((char)'a' + i, j)) {
					cout << "nach " << ((char)('a' + i)) << "/" << j << endl;
				}
			}
		}
	}
};

int main() {
	cSchachfeld* Springer = new cSchachfeld('e', 6);

	do {
		Springer = Springer->springerzug();
	} while (!Springer->geschlagen());

	cout << endl;
	cout << "Der Koenig wurde verschlagen. Bitte heimgehen." << endl;

	delete Springer;

	return 0;
}