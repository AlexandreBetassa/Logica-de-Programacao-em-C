#include<stdio.h>

main() {
	int x;
	printf("Por favor digite um numero: ");
	scanf("%i", &x);

	if(x==1) {
		printf("Homem");
	} 
	else if(x==0) {
		printf("Mulher");
	}
	else{
		printf("Invalido");
	}
}

