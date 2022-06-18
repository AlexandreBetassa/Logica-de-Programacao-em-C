#include<stdio.h>
main() {
	int soma[99]= {0}, x=0,y=0,maior[99],maiorStr=0;
	char nome[99][99], sair[4];
	while(sair[0]!='n') {
		printf("Digite um nome: ");
		scanf("%s", nome[x]);
		printf("Deseja digitar outro nome? ");
		scanf("%s", sair);
		x++;
	}
	nome[x][0]='f';
	x=0;
	while(nome[x][0]!='f') {
		for(y=0; nome[x][y]!='\0'; y++) {
			soma[x]=soma[x]+1;
		}
		maior[x]=soma[x];
		x++;
	}
	for(int z=0; z<x; z++) {
		if(maior[z]>maiorStr)
			maiorStr=z;
	}
	printf("O maior nome e %s",nome[maiorStr]);
}