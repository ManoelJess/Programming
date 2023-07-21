
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define NIL (struct h_stau *)0

/* Teilnehmerliste anlegen / ausgeben */

struct stau {
	char fahrz_herst[1024];
	char fahrz_model[1024];
	char kennzeichen[1024];
	int anz_pers;
};

struct h_stau {
	struct stau pers;
	struct h_stau *next_pers;
};

struct h_stau *anhaengen(char *fahrz_herst, char *fahrz_model, char *kennzeichen, int anz_pers){
	struct h_stau *help = malloc (sizeof(struct h_stau));
	if(help == NIL){
		printf("Fehler beim Allokieren vom Speicher\n");
		fprintf(stderr, "Malloc() error: %i (%s)\n", errno, strerror(errno));
		exit(1);
	}
	
	strcpy(help->pers.fahrz_herst, fahrz_herst);
	strcpy(help->pers.fahrz_model, fahrz_model);
	strcpy(help->pers.kennzeichen, kennzeichen);
	help->pers.anz_pers = anz_pers;
	
	help-> next_pers = NIL;
	
	return help;

}

void anzeigen(struct h_stau *pointer){
	printf("%s    \t| %s  \t| %s     \t| %i  \n", pointer->pers.fahrz_herst, pointer->pers.fahrz_model, pointer->pers.kennzeichen, pointer->pers.anz_pers);
	
	if(pointer->next_pers != NIL){
		anzeigen(pointer->next_pers);
	}
}

void delete(struct h_stau *pointer){
	if(pointer->next_pers == NIL){
		delete(pointer->next_pers);
	}
	free((void *)pointer);
}

/*Ausklinken / Einklinken eines Fahrzeugs */

void auslinken (struct h_stau *pointeur){
	pointeur = pointeur-> next_pers;
	if(pointeur != NIL){
		free(pointeur);
	}
	else if(pointeur == NIL ){
		pointeur = pointeur->next_pers;
	}
}

int main(){
	struct h_stau *erste_pers;
	struct h_stau *actuel;
	struct h_stau *ps = anhaengen ("Audi", "   RS3", "  WO - RP 9", 1);;
	
	erste_pers = actuel = anhaengen ("Audi", "   RS3", "  WO - RP 9", 1);
	
	actuel->next_pers = anhaengen ("VW", "        Golf GTI", "  NE – RD 255", 2);
	actuel = actuel->next_pers;
	
	actuel->next_pers = anhaengen ("Porsche", "Cayenne", "  WIL - DE 13", 5);
	actuel = actuel->next_pers;
	
	actuel->next_pers = anhaengen ("Ford", "Mustang", "  ES – EL 68", 3);
	actuel = actuel->next_pers;
	
	actuel->next_pers = anhaengen ("Setra", "S 515 HD", "  B - US 42 ", 47);
	actuel = actuel->next_pers;
	
	actuel->next_pers = anhaengen ("Simca", "1301 Special", " OL - DY 71", 4);
	
	actuel = actuel->next_pers;
	
	anzeigen(erste_pers);
	
	printf("-----------------------------------------------------------------------------------------------\n");
	
	printf("Geben Sie was\n");
	scanf("%s", ps->pers.kennzeichen);

	auslinken(ps);
	
	anzeigen(erste_pers);
	
	delete(erste_pers);

	return 0;
}