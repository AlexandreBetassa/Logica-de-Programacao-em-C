#include<stdio.h>
main() {
	int x=0;
	float nota, somaNota=0;
	while(1) {
		printf("Digite a nota do aluno %i: ", x+1);
		scanf("%f", &nota);
		if(nota<0) {
			printf("Invalido\n");
		} else if(nota>0) {
			somaNota=somaNota+nota;
			x++;
		} else if(nota==0) {
			break;
		}
	}
	printf("A media e: %.3f\n", somaNota/x);
}