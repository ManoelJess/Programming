
#include "cJukebox.h"



cJukebox::cJukebox(const int& size_in)
{
		size = size_in < 0 ? 0 : size_in;		// negative Arraylaenge nicht zulassen

		if (!(p = new int[size])) {
			size = 0;						// keinen Speicher bekommen, Array als leer signalisieren
		}
}


int cJukebox::operator[](int index)
{
	if (index >= 1 && index <= 100) {
		//index = index * 2;
		cout << "Titel " << index << ": " << "Lang leben Twist, Boogie, RocknRoll!" << endl;
		return index * 2;
	}
	else if (index >= 101 && index <= 200) {
		//index = index * 13 - 100;
		cout << "Titel " << index << ": " << "Melancholisch schauen und gelegentlich seufzen" << endl;
		return index * 13 - 100;
	}
	else if (index >= 201 && index <= 300 && index != 222) {
		//index = index * 717 % 17;
		cout << "Titel " << index << ": " << "Raven bis zum Morgengrauen" << endl;
		return index * 717 % 17;
	}
	else if(index == 222){
		cout << "Titel " << index << ": " << "It is time to say goodbye" << endl;
		return -1;
	}
}
