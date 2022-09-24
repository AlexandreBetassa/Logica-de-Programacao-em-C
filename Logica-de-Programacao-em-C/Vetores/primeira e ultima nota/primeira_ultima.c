#include<stdio.h>

main() {
	int aluno[5];
	for(int x=0; x<5; x++) {
		printf("Informe a nota do aluno %i: ", x+1);
		scanf("%i", &aluno[x]);
	}
	printf("A nota do aluno 1 e: %i\n", aluno[0]);
	printf("A nota do aluno 5 e: %i\n", aluno[4]);
}
