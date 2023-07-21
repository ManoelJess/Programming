#include "cLageSkala.h"

int main() {
	cLageSkala s1;
	cout << "Ausgabemethode:" << endl;
	s1.ausgabe();

	cout << "Ausgabeoperator:" << endl;
	cout << s1 << endl;
	
	++s1; ++s1; ++s1;
	cout << "Dreimal ++s1" << endl;
	cout << s1 << endl;
	
	cout << "Ueberladenen Operator >>:" << endl;
	cin >> s1;
	cout << "Nach Eingabe, Ausgabe mit der Ausgabemethode:" << endl;
	s1.ausgabe();

	cout << "Nach Eingabe, Ausgabe mit der Ausgabeoperator:" << endl;
	cout << s1 << endl;

	--s1;
	cout << "Nach --s1, Ausgabe mit der Ausgabeoperator:" << endl;
	cout << s1 << endl;

	return 0;
}