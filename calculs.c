#include <stdio.h>

int main(){
	int num1;
	int num2;
	int NEWnum1;
	int NEWnum2;
	float NEWdivision;
	char op[2];
	printf("Entrez l'opérateur souhaité pour le calcul : ");
        scanf("%s",op);
	printf("Entrez le premier nombre et le deuxieme nombre : ");
	scanf("%d %d",&num1, &num2);
	switch (op[0]) {
   		 case '+':
        		int add = num1 + num2;
			printf("l'addition des nombres est égal à : %d\n",add);
        		break;
    		case '-':
			int soustraction = num1 - num2;
			printf("la soustraction des nombres est égal à : %d\n",soustraction);
        		break;
    			// Ajoutez autant de cases que nécessaire
		case '*':
                        int multiplication = num1 * num2;
                        printf("la multiplication des nombres est égal à : %d\n",multiplication);
                        break;
		case '%':
                        int modulo = num1 % num2;
                        printf("le modulo des nombres est égal à : %d\n",modulo);
                        break;
		case '/':
			if(num1 == 0 || num2 == 0){
				printf("voyons on ne peut pas diviser par 0 \n");
				printf("Entre des nouvelles valeurs pour effectuer le calcul :");
				scanf("%d %d", &NEWnum1, &NEWnum2);
				float NEWdivision = (float)NEWnum1 / NEWnum2;
				printf("La division des nombres est égal à : %f\n", NEWdivision);
			}
			else{
                        	float division = (float)num1 / num2;
                        	printf("le division des nombres est égal à : %f\n",division);
                        }
			break;
    		default:
        		// Instructions si aucune des cases ne correspond
        		break;
}




}
