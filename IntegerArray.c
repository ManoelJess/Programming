#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRSIZE 1001

void init (int *intArray, int ASIZE){
	for(int i=0; i<ASIZE; i++){
		*(intArray + i) =(rand() % 9999) + 1;
	}
}

void ausgabe (int *intArray, int ASIZE){
	for(int i=0; i<ASIZE; i++){
		if(i % 20 == 0){
			printf("\n");
		}
		printf("%5i\t", *(intArray + i));
	}
}

void tausche (int *p, int *p1){
	int a;
	a = *p;
	*p = *p1;
	*p1 = a;
}

void sortiere (int *intArray, int ASIZE){
	for (int n = ASIZE; n>1; n--) {
		for (int i = 0; i<n-1; i++) {
			if (*(intArray + i) > *(intArray + i + 1)) {
				tausche(intArray + i, intArray + i + 1);
			}
		}
	}
}

int *mini(int *intArray, int ASIZE){
	int *min = intArray;
	for(int i=0; i<ASIZE; i++){
		if(*(intArray + i) < *min){
			*min = *(intArray + i);
		}
	}
	return min;
}


int *maxi(int *intArray, int ASIZE){
	int *max = intArray;
	for(int i=0; i<ASIZE; i++){
		if(*(intArray + i) > *max){
			*max = *(intArray + i);
		}
	}
	return max;
}

int *median(int *intArray, int ASIZE){
	int *med = intArray;
	if(ASIZE % 2 != 0){
		*med = *(intArray + (ASIZE + 1 / 2 ) );
	}
	else if(ASIZE % 2 == 0){
		*med = ( *(intArray + (ASIZE / 2)) + *(intArray + (ASIZE / 2 + 1)) ) / 2;
	}
	return med;
}

int suche(int *intArray, int ASIZE, int zahl){
	static int i = 0;
	if(i < ASIZE){
		for(i=0; i<ASIZE; i++){
			if(*(intArray + i)==zahl){
				printf("%i", i);
				i++;
				return suche(intArray, ASIZE, zahl);
			}
		}
	}
	else{
		return -1;
	 }
	return 0;
}


int main(){
	srand ( time(NULL) );
	int array[ARRSIZE];
	
	init(array, ARRSIZE);
	printf("Vor der Sortierung: ");
	ausgabe(array, ARRSIZE);
	printf("\n");
	
	sortiere(array, ARRSIZE);
	printf("\nNach der Sortierung: ");
	for(int i=0; i<ARRSIZE; i++){
		if(i % 20 == 0){
			printf("\n");
		}
		printf("%i\t", *(array + i));
	}
	
	printf("\n");
	
	printf("\nDer kleinste Element des Arrays ist %i\n", *mini(array, ARRSIZE));
	printf("\nDer groesste Element des Arrays ist %i\n", *maxi(array, ARRSIZE));
	printf("\nDer Median des Arrays ist %i\n", *median(array, ARRSIZE - 1));
	
	int wert=0;
	printf("\nGeben Sie eine Zahl\n");
	scanf("%i", &wert);
	int index = suche(array, ARRSIZE, wert);
	printf("\nDie gesuchte Zahl hat die Indexe %i\n", index);

	return 0;
}