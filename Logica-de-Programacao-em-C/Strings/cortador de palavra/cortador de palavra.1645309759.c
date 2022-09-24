#include<stdio.h>
main() {
	int pos,somaC=0,y;
	char nomeP[99],aux[99],nome[99];

	printf("Digite um nome: ");
	gets(nomeP);

	//somando caracteres
	for(int x=0; nomeP[x]!='\0'; x++) {
		somaC=somaC+1;
	}
	//pedindo informações ao usuário de quantos caracteres iniciais serão cortados
	printf("Digite um numero: ");
	scanf("%i", &pos);

	//analiso se o valor informado pelo usuário nao é maior que o valor de caracteres da string
	if(pos>somaC||pos<0) {
		printf("Valor invalido!!!\n\n");
	} else
		pos=pos+1;
	//cortando letras
	y=0;
	for(pos; nomeP[pos]!='\0'; pos++) {
		nome[y]=nomeP[pos];
		y++;
	}
	nome[y]='\0';
	printf("%s\n",nome);
}