#include<stdio.h>
main() {
	float nota[999999999999],somaNota=0;
	int x=0;
	while(1) {
		printf("Digite a nota do aluno %i: ", x+1);
		scanf("%f", &nota[x]);
		if(nota[x]<0) {
			printf("Invalido\n");
		} else if(nota[x]>0) {
			somaNota=somaNota+nota[x];
			x++;
		}
	}
}