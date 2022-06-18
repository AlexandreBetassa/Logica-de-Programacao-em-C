#include<stdio.h>

main(){
	int aluno=1;
	float notaDig, notaSomada, media;
	while (aluno<11){
		printf("Por favor insira a nota do aluno %i: ", aluno);
		scanf("%f", &notaDig);
		aluno++;
		notaSomada=notaSomada+notaDig;
	}
	media=notaSomada/10;
	printf("a media da sala e: %.2f", media );
}