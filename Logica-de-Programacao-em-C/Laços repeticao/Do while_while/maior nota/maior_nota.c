#include<stdio.h>

main() {
	float notaDig=0, maiorNota=0;
	int aluno=1;
	while(notaDig>=0) {
		printf("Por favor digite a nota do aluno %i: ", aluno);
		scanf("%f", &notaDig);
		aluno++;
		if(notaDig>=maiorNota)
		maiorNota=notaDig;	
	}
	printf("A maior nota e: %.2f", maiorNota);
}