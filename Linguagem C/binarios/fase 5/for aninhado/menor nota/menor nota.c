#include<stdio.h>
main() {
	float NotaDig, MenorNota=10;
	for(int x=1; x<=10; x++) {
		printf("Digite a nota do aluno %i: ",x);
		scanf("%f", &NotaDig);
		if(NotaDig<=MenorNota)
			MenorNota=NotaDig;
	}
	printf("A menor nota e: %.2f", MenorNota);
}
