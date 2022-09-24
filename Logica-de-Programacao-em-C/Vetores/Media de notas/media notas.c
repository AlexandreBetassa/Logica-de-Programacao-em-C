#include<stdio.h>
main() {
	int aluno=1;
	float nota[aluno], somaNota=0;
	while(aluno>0) {
		printf("Digite a nota do aluno %i: ", aluno+1);
		scanf("%f", &nota[aluno]);
		if(nota[aluno]<0) {
			printf("Nota invalida\nPor favor digite novamente!\n");

		} else {
			somaNota=somaNota+nota[aluno];
			aluno++;
		}
	}
}