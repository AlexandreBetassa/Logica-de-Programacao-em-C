#include<stdio.h>
main() {
	char nome[99];
	printf("Digite o nome: ");
	gets(nome);
	for(int x=0; nome[x]!='\0'; x++) {
		if(nome[x]==nome[x]-32) {
		}
	}
	printf("%s",nome);
}