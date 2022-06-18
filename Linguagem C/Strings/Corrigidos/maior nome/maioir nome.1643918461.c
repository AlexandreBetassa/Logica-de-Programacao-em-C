#include<stdio.h>
main() {
	int soma, x=0,y=0,maior,aux;
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
			soma=soma+1;
		}if(soma>=aux){
			aux=soma;
			maior=x;
		}
		soma=0;
		x++;
	}
	printf("O maior nome e %s",nome[maior]);
}