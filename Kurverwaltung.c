#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZEARRAY 12

struct kurverwaltung {
	int anzahl_gaeste;
	double temperatur;
	char titel_event[1024];
	
};

void ausgabe(struct kurverwaltung myArray[], int size){
	for(int i = 0;  i< size; i++){
		printf("Monat %i:\t Anzal von Gaeste: %i\t, Temperatur: %lf\t, Event Titel: %s\n",i , myArray[i].anzahl_gaeste, myArray[i].temperatur, myArray[i].titel_event);
	}
}

void tausche(struct kurverwaltung myArray[], struct kurverwaltung myArray1[] ){
	struct kurverwaltung help;
		help = *myArray;
		*myArray = *myArray1; 
		*myArray1 = help;
		
}

void sortiereAnzahl(struct kurverwaltung myArray[], int size){
	int i, n;
	for (n = size; n>1; n--) {
		for (i = 0; i<n-1; i++) {
			if ( ((myArray+i)->anzahl_gaeste) > ((myArray+i+1)->anzahl_gaeste) ) {       /* Durch Vergleichsfunktion ersetzen */
				tausche(myArray+i, myArray+i+1);
			}
		}
	}
}

void sortiereTemperatur(struct kurverwaltung myArray[], int size){
	int i, n;
	for (n = size; n>1; n--) {
		for (i = 0; i<n-1; i++) {
			if ( ((myArray+i)->temperatur) > ((myArray+i+1)->temperatur) ) {       /* Durch Vergleichsfunktion ersetzen */
				tausche(myArray+i, myArray+i+1);
			}
		}
	}
}

void sortiereEvent_titel(struct kurverwaltung myArray[], int size){
	int i, n;
	for (n = size; n>1; n--) {
		for (i = 0; i<n-1; i++) {
			if ( strcmp ((myArray+i+1 )->titel_event , (myArray+i)->titel_event ) < 0 ) {       /* Durch Vergleichsfunktion ersetzen */
				tausche(myArray+i, myArray+i+1);
			}
		}
	}
}

// Aufgabenstellung Teil b)

void textmix(struct kurverwaltung *myArray, int size){
	for(int i=0; i<size; i++){
	//struct kurverwaltung *myArray1 = myArray + i;
	char *titel_event = (myArray + i)->titel_event;
		for(int j=0; *(titel_event+j) != '\0'; j++){
			if(*(titel_event+j) == 'a'){
				*(titel_event+j) = 'o';
			}
			else if(*(titel_event+j) == 'o'){
				*(titel_event+j) = 'a';
			}
			if(*(titel_event+j) == 'A'){
				*(titel_event+j) = 'O';
			}
			else if(*(titel_event+j) == 'O'){
				*(titel_event+j) = 'A';
			}
		}
	}
}

void minmax(struct kurverwaltung myArray[], int size, struct kurverwaltung **pmin, struct kurverwaltung **pmax){
	*pmin = &myArray[0];
	*pmax = &myArray[0];
	for(int i=1; i<size; i++){
		if(myArray[i].temperatur < (*(*pmin)).temperatur){
			*pmin = &myArray[i];
		}
		if(myArray[i].anzahl_gaeste < (*pmax) -> anzahl_gaeste){
			*pmax = &myArray[i];
		}
	}
}

int main(){
	
	struct kurverwaltung myArray[SIZEARRAY] = { {412, 2.34, "Holliday on Icecream"},
			   {352, -11.32, "Skizirkus Graswandertoni"},
			   {78, 3.72, "Haselnussbluete am Kroetenbrunnen"},
			   {201, 5.68, "Rheingoldsuche mit Hagen"},
			   {534, 11.11, "Siegfried und der Maidrache"},
			   {478, 17.34, "Zauberfloete im Hochschul-Atrium"},
			   {1267, 28.99, "Pfrimmschwimmen fuer Alle"},
			   {1482, 24.02, "Heuschobernaechte rustikal"},
			   {739, 19.44, "Indian Summer in der Pfalz"},
			   {333, 10.55, "Weinlese im Weingut Oechsle"},
			   {12, 6.66, "Eat what you can mit Martinsgans"},
			   {856, -3.22, "Bratapfelwettbewerb im Heylshof"}
			    };
			
	//myArray = malloc(sizeof(struct kurverwaltung));
	
	printf("UMSORTIERT\n");
	ausgabe(myArray, SIZEARRAY);
	printf("----------------------------------------------------------------------------------------------------\n");
	
	printf("SORTIERT nach der Anzahl\n");
	sortiereAnzahl(myArray, SIZEARRAY);
	ausgabe(myArray, SIZEARRAY);
	printf("----------------------------------------------------------------------------------------------------\n");
	
	printf("SORTIERT nach der Temperatur\n");
	sortiereTemperatur(myArray, SIZEARRAY);
	ausgabe(myArray, SIZEARRAY);
	printf("----------------------------------------------------------------------------------------------------\n");
	
	printf("SORTIERT nach dem Eventstitel\n");
	sortiereEvent_titel(myArray, SIZEARRAY);
	ausgabe(myArray, SIZEARRAY);
	printf("----------------------------------------------------------------------------------------------------\n");
	
	printf("SORTIERT nach dem Austauch von Buschtaben\n");
	textmix(myArray, SIZEARRAY);
	ausgabe(myArray, SIZEARRAY);
	
	struct kurverwaltung *pmin;
	struct kurverwaltung *pmax;
	minmax(myArray, SIZEARRAY, &pmin, &pmax);
	
	 printf("\n\nMinimale Temperatur: %lf\nMaximale Gaeste: %d\n", pmin->temperatur, pmax->anzahl_gaeste);
	
	
	return 0;
	
}