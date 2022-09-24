#include<stdio.h>

main() {
	//coleta de dados
	float SomaNota,MaiorNota=0,MenorNota=10,NotaDig,media;
	for(int x=1; x<=10; x++) {
		printf("Digite a nota do aluno %i: ",x);
		scanf("%f", &NotaDig);

		//comparação
		if(NotaDig>=MaiorNota) {
			MaiorNota=NotaDig;
		}
		if(NotaDig<=MenorNota) {
			MenorNota=NotaDig;
		}
		SomaNota=SomaNota+NotaDig;
		media=SomaNota/x;
	}
	printf("A maior nota e %.2f\n", MaiorNota);
	printf("A menor nota e %.2f\n", MenorNota);
	printf("A media da sala e %.2f\n", media);
}