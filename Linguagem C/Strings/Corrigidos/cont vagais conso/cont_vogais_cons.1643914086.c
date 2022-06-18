#include<stdio.h>
main() {
	int maior,maiorV,menorV,menor,soma=0;
	char nome[5][99],somaVogais[5]= {0},somaCon[5]= {0};
	for (int x=0; x<5; x++) {
		printf("Digite o %i nome: ", x+1);
		gets(nome[x]);
	}
	for(int x=0; nome[x]!='\0'; x++) {
		soma=soma+1;
		if(x==0) {
			maior=soma;
			menor=soma;
		} else if(soma>maior) {
			maior=soma;
			maiorV=x;
		} else if(soma<menor) {
			menor=soma;
			menorV=x;
		}
	}
	for(int x=0; x<5; x++) {
		printf("%s\n", nome[x]);
	}
}