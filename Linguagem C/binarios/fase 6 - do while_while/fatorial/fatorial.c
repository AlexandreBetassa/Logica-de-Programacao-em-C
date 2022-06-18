#include<stdio.h>

main() {
	//peço informações ao usuario
	int numSug=0,x=0;
	printf("Qual fatorial deseja saber: ");
	scanf("%i", &numSug);
	//comparo para analisar se o numero e valido
	if(numSug<1) {
		printf("Invalido\n");
	} else if(numSug>50) {
		printf("Invalido\n");
	} else
	x=numSug-1;
	while(x>1) {
		numSug=x*numSug;
		x--;
	}
	printf("O fatorial e: %i\n", numSug);
}
