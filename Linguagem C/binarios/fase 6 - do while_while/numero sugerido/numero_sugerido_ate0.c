#include<stdio.h>

main(){
int numSug;
	printf("Por favor digite um numero: ");
	scanf("%i",&numSug);
		while(numSug>=0){
			printf("%i\n", numSug);
			numSug--;
		}
}