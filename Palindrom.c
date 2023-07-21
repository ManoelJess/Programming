#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 20

void rot13(char array[], char arr[]){
	int stelle = 0;
	while(array[stelle] != '\0'){
		char help = array[stelle];
		if(help >= 'a' && help <= 'm'){
			arr[stelle] = help + 13;
			stelle++;
		}
		else if(help >= 'n' && help <= 'z'){
			arr[stelle] = help - 13;
			stelle++;
		}
		else{
			arr[stelle++] = help;
		}
	}
	arr[stelle] = '\0';
}

//Ueberprueft, ob der String ein Palindrom ist oder nicht
bool isPali(char Array[], int lenght){
	for(int i=0; i<lenght; i++){
		if(Array[lenght--] == Array[i]){
			return true;
		}
		else if(Array[lenght--] != Array[i]){
			return false;
		}
	
		if(lenght % 2 != 0){
			return false;
		}

	}
	return false;
	isPali(Array, lenght--);
}

int main(){

	char input[SIZE +1];
	char palindrom[SIZE * 2 + 1];
	int laenge = 0;
	printf("Geben Sie ein Wort zur Palindrombildung\n");
	do{
		char wort;
		
		wort = getchar();
		if(wort == '\n'){
			break;
		}
		
		input[laenge++] = wort;
	}while(laenge < SIZE);
	input[laenge++] = '\0';
	int len = strlen(input);
	printf("Die laenge ist %i\n", len);
	
	printf("Das eingegebene Wort ist %s\n", input);

	strcpy(palindrom, input);
	for(int i=0; i<len; i++){
		palindrom[len + i] = input[len - i - 1];
	}
	printf("Das Palindrom lautet %s\n", palindrom);
	
	char inputRot13[SIZE +1];
	char outputRot13[SIZE +1];
	
	printf("Geben Sie ein Wort zur Verschluesselung\n");
	scanf("%s", inputRot13);
	rot13(inputRot13, outputRot13);
	
	printf("Das verschluesellte Wort lautet %s\n", outputRot13);
	
	char Wort[SIZE + 1];
	printf("Geben Sie ein Wort\n");
	scanf("%s", Wort);
	int wsize = strlen(Wort);
	printf("Die laenge ist %i\n", wsize);
	if( isPali(Wort, wsize) ){
		printf("Das Wort %s ist ein Palindrom\n", Wort);
	}
	else{
		printf("Das Wort %s ist nicht ein Palindrom\n", Wort);	
	}


	return 0;
}