#include<stdio.h>
main(){
	int soma=0;
	char nome[99], aux;
	printf("Digite o nome: ");
	gets(nome);
	printf("Digite a letra a ser contada: ");
	scanf("%c", &aux);
	for(int x=0;nome[x]!='\0';x++){
		if(nome[x]==aux){
			soma=soma+1;
		}
	}
	printf("Existem %i letras, %c, no nome %s.", soma,aux,nome);
}