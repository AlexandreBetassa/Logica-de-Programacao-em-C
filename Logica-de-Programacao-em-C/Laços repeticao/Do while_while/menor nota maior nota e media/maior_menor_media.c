#include<stdio.h>

main() {
	float media=0, menorNota=10, maiorNota=0, somaNota=0, notaDig=0;
	int aluno=1;
	while(notaDig>=0) {
		printf("Por favor digite a nota do aluno %i: ", aluno);
		scanf("%f", &notaDig);
		aluno++;
		if(notaDig>=0&&notaDig<=menorNota) {
			menorNota=notaDig;
		} else if(notaDig>=maiorNota){
		maiorNota=notaDig;
		}
		somaNota=somaNota+notaDig;
	}
	media=somaNota/aluno;
	printf("A maior nota e: %.2f\n", maiorNota);
	printf("A menor nota e: %.2f\n", menorNota);
	printf("A media da sala e: %.2f\n", media);
}