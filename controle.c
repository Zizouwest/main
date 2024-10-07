#include <stdio.h>

int main(){

	for(int i = 0; i <= 1000; i++){
		if( i % 4 == 0 && i % 6 != 0){
			printf("les nombres divisble par 4 mais pas par 6 entre 1 et 1000 sont : %d\n", i);
		}
	}
        for(int i = 0; i <= 1000; i++){
                if( i % 8 == 0 && i % 2 == 0){
                        printf("les nombres divisble par 8 et est pair : %d\n", i);
                }
        }
        for(int i = 0; i <= 1000; i++){
                if( i % 5 == 0 && i % 7 == 0 && i % 10 != 0){
                        printf("les nombres divisble par 5 et 7 mais pas par 10 entre 1 et 1000 sont : %d\n", i);
                }
        }


}
