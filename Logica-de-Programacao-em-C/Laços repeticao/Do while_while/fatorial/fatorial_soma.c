#include<stdio.h>

main() {
	int numDig=0,x=0;
	printf("Digite um numero: ");
	scanf("%i", &numDig);
	if(numDig>1000){
		printf("Invalido\n");
	}
	else if(numDig<0){
		printf("Invalido\n");
	}
	else
	x=numDig-1;
	while(x>=1){
	numDig=x+numDig;
	x--;
	}
	printf("O resultado e: %i", numDig);
}
