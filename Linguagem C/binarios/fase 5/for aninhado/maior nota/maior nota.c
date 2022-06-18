#include<stdio.h>
main() {
	float NotaDig, MaiorNota=0;
	for(int x=1; x<=10; x++) {
		printf("Digite a nota do aluno %i: ",x);
		scanf("%f", &NotaDig);
	if(NotaDig>=MaiorNota)
		MaiorNota=NotaDig;
	}
	printf("A maior nota e: %.2f", MaiorNota);
}
