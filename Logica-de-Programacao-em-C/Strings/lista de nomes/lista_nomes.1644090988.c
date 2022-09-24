#include<stdio.h>
main(){
	char nome[99];
	int qtdNome=0, x=0;
	
	printf("Digite a quantidade de nomes que deseja informar: ");
	scanf("%i", &qtdNome);
	
	while(x<qtdNome){
		printf("Digite o %i nome: ", x+1);
		gets(nome[x]);
		x++;
	}
	
	for (int x=0;x<qtdNome;x++){
		printf("%s",nome[x]);
	}
}