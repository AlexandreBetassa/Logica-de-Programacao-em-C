#include<stdio.h>

main() {
	int aluno[10];
	for(int x=0; x<10; x++) {
		printf("Digite a nota do aluno %i: ", x+1);
		scanf("%i", &aluno[x]);
	}
	for(int x=0; x<10; x++) {
		printf("Nota do aluno %i\n", aluno[x]);
	}
}