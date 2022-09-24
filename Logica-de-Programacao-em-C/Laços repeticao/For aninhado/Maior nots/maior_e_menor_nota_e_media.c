#include<stdio.h>

main() {
	//coleta de dados
	float somaNota,maiorNota=0,menorNota=10,notaDig,media;
	for(int x=1; x<=10; x++) {
		printf("Digite a nota do aluno %i: ",x);
		scanf("%f", &notaDig);

		//comparação
		if(notaDig>=maiorNota) {
			maiorNota=notaDig;
		}
		if(notaDig<=menorNota) {
			menorNota=notaDig;
		}
		somaNota=somaNota+notaDig;
	}
	media=somaNota/10;
	printf("A maior nota e %.2f\n", maiorNota);
	printf("A menor nota e %.2f\n", menorNota);
	printf("A media da sala e %.2f\n", media);
}