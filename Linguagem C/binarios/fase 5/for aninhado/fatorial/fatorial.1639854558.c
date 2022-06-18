#include<stdio.h>

main() {
	while(1) {
		int numDig=0,x=0;
		//peço o numero
		printf("Por favor digite um numero: ");
		scanf("%i", &numDig);
		//comparo se é maior que 50 ou menor que 0
		if(numDig<0) {
			printf("Invalido\n\n");
		} else if(numDig>50) {
			printf("Invalido\n\n");
		} else
			//executo o ciclo fatorial
			for(x=(numDig-1); x>1; x--) {
				numDig=numDig*x;
			}
		printf("%i\n\n",numDig);
	}
}
