#include<stdio.h>
main() {
	int soma=0,x=0;
	char nome[99], aux;
	printf("Digite o nome: ");
	gets(nome);
	printf("Digite a letra a ser contada: ");
	scanf("%c", &aux);
	for(x=0; nome[x]!='\0'; x++) {
		if(nome[x]==aux) {
			soma=soma+1;
		}
	}
	if(soma==0) {
		printf("Nao existe a letra %c", aux);
	} else if(soma==x){
	printf("Todas as letras sao %c",aux);
	}else if(soma!=0){
		printf("Existem %i letras, %c na palavra %s",soma, aux,nome);
	}
}