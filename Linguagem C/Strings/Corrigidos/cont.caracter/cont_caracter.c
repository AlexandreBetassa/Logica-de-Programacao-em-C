#include<stdio.h>
main(){
	int soma=0;
	char nome[99];
	printf("Digite o nome: ");
	gets(nome);
	for (int x=0;nome[x]!='\0';x++){
		soma=soma+1;
	}
	printf("O nome possui %i caracteres.", soma);
}