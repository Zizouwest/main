#include <stdio.h>
#include <stdbool.h>

int main(){
	int a = 16;
	int b = 3;
	int addition = a + b;
	int soustraction = b - a;
	int multiplication = a * b;
	float division = (float)a / (float)b;
	int reste = a % b;
	if (a == b){
		bool vrai = true;
		printf("la condition est %d\n", vrai);
	}else {
		bool faux = false;
		printf("la condition est %d\n", faux);
	}
	if (a > b){
                bool vrai = true;
                printf("la condition est %d\n", vrai);
        }else {
                bool faux = false;
                printf("la condition est %d\n", faux);
        }
       	printf("l'addition est égal a : %d\n", addition);
	printf("la soustraction est égal a : %d\n", soustraction);
	printf("la multiplication est égal a : %d\n", multiplication);
	printf("la division est égal a : %lf\n", division);
	printf("le reste de la div est égal a : %d\n", reste);



}



