#include<stdio.h>

main() {
	int aluno=1;
	float notaSomada=0,notaDig=0,media;
	while(notaDig>=0) {
		printf("Por favor digite a nota do aluno %i: ", aluno);
		scanf("%f", &notaDig);
		if(notaDig>=0)
		notaSomada=notaSomada+notaDig;
		aluno++;
	}
	media=notaSomada/aluno;
	printf("A media da sala : %.2f", media);
}