#include<stdio.h>
main() {
	int qtdNome;
	char nome[99], aux[99];

	printf("Digite a quantidade de nomes que deseja informar: ");
	scanf("%i",&qtdNome);

	for(int x=0; x<qtdNome; x++) {
		printf("Digite o %i nome", x+1);
		gets(nome);
	}
	for(int x=0; x<qtdNome; x++) {
		ptinf("%s",nome);
	}
}