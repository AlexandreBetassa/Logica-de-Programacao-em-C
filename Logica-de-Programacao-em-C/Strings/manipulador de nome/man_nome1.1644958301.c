#include<stdio.h>

main() {
	char nome[99],aux[99];
	printf("Digite o nome: ");
	gets(nome);
	for(int x=0;nome[x]!='\0';x++){
		aux[x]=tolower(nome[x]);
	}
	printf("%s",aux);
}