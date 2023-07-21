#include "cPrimZahl.h"

cPrimZahl::cPrimZahl(int aktprim)
{
	/* Der Konstruktor ermittelt die nächste Primzahl, die größer ist als der Wert des KonstruktorParameters */
	while (!isPrim(aktprim)) {
		aktprim++;
	}
	/* ...  und speichert diesen Primzahl-Wert in der Mitgliedsvariablen */
	this->aktprim = korrektur(aktprim);
}

bool cPrimZahl::isPrim(int n)				// Pruefung einer Zahl auf Primzahl
{
		for (int i = 2; i <= n / 2; i++) {
			if (n % i) {
				continue;
			}
			else {
				return false;
			}
		}
		return true;
}

/*  Ist die nächst größere Primzahl größer als maxprim, so soll die größte Primzahl kleiner maxprim gespeichert werden. */
int cPrimZahl::korrektur(int zahl)
{
	if (zahl <= MAXPRIM && zahl >= 2) {
		return zahl;
	}
	else if (zahl < 2) {
		return 2;
	}
	for (int i = MAXPRIM; i > 0; i--) {
		if (isPrim(i)) {
			return i;
		}
	}
}

cPrimZahl cPrimZahl::operator++(void)
{
	aktprim++;
	while (!isPrim(aktprim)) {
		aktprim++;
	}
	aktprim = korrektur(aktprim);
	return *this;
}

cPrimZahl cPrimZahl::operator--(void)
{
	aktprim--;
	while (!isPrim(aktprim)) {
		aktprim--;
	}
	aktprim = korrektur(aktprim);
	return *this;
}

cPrimZahl cPrimZahl::operator[](int index)
{
	cPrimZahl* help = new cPrimZahl[index];
	if (index >= 0 && index < MAXPRIM) {
		while (!isPrim(index)) {
			index++;
		}
		index = korrektur(index);
		return index;
	}
}

ostream& operator<<(ostream& o, cPrimZahl primzahl)
{
	o << "Primzahl:" << primzahl.aktprim << endl;
	return o;
}
