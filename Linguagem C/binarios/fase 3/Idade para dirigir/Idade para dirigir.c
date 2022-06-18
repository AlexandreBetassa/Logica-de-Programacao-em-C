#include<stdio.h>

main() {
	int x;
	printf("Por favor informe sua idade: ");
	scanf("%i",&x);

	if(x==0) {
		printf("Idade invalida");
	} else if(x<18) {
		printf("Voce nao possui idade para dirigir");
	} else {
		printf("Voce possui idade para dirigir");
	}
}