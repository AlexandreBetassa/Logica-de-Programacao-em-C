#include<stdio.h>

main(){
int numSug=1,contador=1;
	printf("Por favor digite um numero: ");
	scanf("%i",&numSug);
		while(contador<=numSug){
			printf("%i\n", contador);
			contador++;
		}
}