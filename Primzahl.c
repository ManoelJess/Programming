/* 
Beschreibung: Die Funktion isprim ergibt die Primzahlen 
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrim(int number){
	static int divisor=2;
		if(number==divisor){
			divisor=2;
			return true;	
		}
		if(number % divisor == 0){
			divisor=2;
			return false;
		}
		if(divisor<number){
			divisor++;
			return isPrim (number);
		}
	//divisor=2;
	return false;
}

void doPFZ(int a, int prim) {			/* Primfaktorerzegung rekursiv */
	if (a <= 1)	
		return;				/* fertig */

	if (isPrim(prim) && a%prim == 0) {	/* teilbar durch eine Primzahl */
		printf ("Primfaktor: %i\n", prim);	/* ausgeben */
		a /= prim;			/* Zahl durch den Primfaktor teilen */
		prim--;				/* optimiert: nochmal denselben Faktor probieren */
	}

	doPFZ (a, prim+1);			/* naechste Zahl als Primfaktor testen */
}

int main(){
int n=0, z=0, max=100;

printf("Geben Sie eine natuerliche Zahlen \n");
scanf("%i",&n);
	
		if(isPrim(n)==true){
			printf("Die Zahl %i ist eine Primzahl \n", n);
		}
		else {
			printf("Die Zahl %i ist keine Primzahl \n", n);
		}
			

printf("Die Primzahlen sind:");
	for(int a=3; a<=max; a++){
		if(isPrim(a)){
			if(isPrim(a+2) && (a+2)<max){
				printf("(%i %i)\t", a, a+2);
			}
			z++;	
		}
	}
printf("\n");		
printf("Die Anzahl der Primzahlen ist : %i", z);
printf("\n");

int yps;

	printf ("Bitte eine Zahl für die Primfaktorzerlegung angeben: ");
	scanf("%i", &yps);

	doPFZ(yps, 2);	/* Start mit 2 als moeglichem Faktor */

	printf("\n");

return 0;
}
	