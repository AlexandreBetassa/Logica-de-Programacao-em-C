#include<stdio.h>
main() {
	int x=0;
	char nome[99];
	printf("Digite o nome: ");
	scanf("%s", nome);
	while(nome[x]!='\0') {
		if(nome[x]==nome[x]-32)
			nome[x]=nome[x]+32;
		x++;
	}
	printf("%s",nome);
}