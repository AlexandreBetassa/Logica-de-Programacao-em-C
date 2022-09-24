#include<stdio.h>
main(){
	char nome[99];
	int qtdNome;
	
	printf("Digite a quantidade de nomes que deseja informar: ");
	scanf("%i", &qtdNome);
	
	for(int x=0;x<qtdNome;x++){
		printf("Digite o %i nome: ", x+1);
		gets(nome[x]);
	}
	
	for (int x=0;x<qtdNome;x++){
		printf("%s",nome[x]);
	}
}