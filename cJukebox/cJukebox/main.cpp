/*Die Musiktitel in der Jukebox werden über ein Array verwaltet. Es gibt eine Subskription für 300
Titel.
Titel 1-100 sind die Rock&Roll-Titel, dort wird beim Zugriff auf einen dieser Titel vom Subscript-
Operator ausgegeben: „Lang leben Twist, Boogie, RocknRoll!“ (Ausgabestring).
Titel 101 bis 200 sind die Schnulzen, dort wird beim Zugriff ausgegeben: „Melancholisch
schauen und gelegentlich seufzen“.
Titel 201 bis 300 sind die Techno-Titel, dort wird ausgegeben „Raven bis zum Morgengrauen“.
Titel 222 ist speziell. Da kommt der Titel „It’s time to say goodbye“ und das Programm wird nach
dieser Ausgabe beendet.*/

#include "cJukebox.h"
using namespace std;

int main() {

	cJukebox jukebox1(300);
	int i, index;
	i = jukebox1[37];
	cout << "Subskriptionsergebnis: " << i << endl;
	cout << "Subskriptionsergebnis: " << jukebox1[278] << endl;

	do {
		cout << "Geben Sie einen Titel-Index ein (1-300): ";
		cin >> index;
		i= jukebox1[index];
		cout << "Rueckgabewert: " << i << endl;
	} while (index != 222);

	return 0;
}