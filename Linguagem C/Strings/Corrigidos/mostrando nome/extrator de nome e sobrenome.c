#include<stdio.h>
main() {
	int x=0, y=0;
	char nome[99],sobrenome[99];
	printf("Digite seu nome completo: ");
	gets(nome);
	while(nome[x]!=32) {
		x++;
	}
	nome[x]='\0';
	for(x=x+1; nome[x]!='\0'; x++) {
		sobrenome[y]=nome[x];
		y++;
	}
	sobrenome[y]='\0';
	printf("Seu nome e: %s\nSeu sobrenome e: %s",nome,sobrenome);
}