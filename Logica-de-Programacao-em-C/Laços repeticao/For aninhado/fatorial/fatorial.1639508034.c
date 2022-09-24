#include<stdio.h>

main() {
	int numDig,x;
	for(int x=numDig; x>=1; x--) {
		printf("Por favor digite um numero: ");
		scanf("%i", &numDig);
		if(numDig>50) {
			printf("Invalido\n");
		} else if(numDig<0) {
			printf("Invalido\n");
		} else
			printf("O fatorial e: %i\n\n", numDig*x);
	}
}