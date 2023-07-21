#include "cMountainbike.h"

cMountainbike::cMountainbike(int radzahl_in, double luftdruck_in, double spass_in) : cFreizeitrad(radzahl_in, luftdruck_in, spass_in) {

}


double cMountainbike::downhill(int hoehendifferenz) {
	return spass += 10 * hoehendifferenz;
}

void cMountainbike::schimpfen() {
	cout << "Schon wieder ein Stein, macht keinen Spass mehr" << endl;
}

void cMountainbike::steinschlag() {
	do {
		spass -= 2000;
		while (spass < 0) {
			spass++;
		}
		if (spass == 0) {
			schimpfen();
		}
	}while(spass != 0);
}

