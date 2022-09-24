#include<stdio.h>

main() {
	float notaDig=10, menorNota=10;
	int aluno=1;
	while(notaDig>=0) {
		printf("Por favor digite a nota do aluno %i: ", aluno);
		scanf("%f", &notaDig);
		aluno++;
		if(notaDig<=menorNota&&notaDig>=0)
		menorNota=notaDig;	
	}
	printf("A maior nota e: %.2f", menorNota);
}