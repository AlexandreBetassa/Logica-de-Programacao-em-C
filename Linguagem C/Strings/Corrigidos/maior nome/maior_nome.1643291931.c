#include<stdio.h>
main() {
	int soma[10][10], x=0;
	char nome[10][99],sair[4];
	sair[4]='\0';
	while(sair!='nao') {
		printf("Digite um nome: ");
		scanf("%s", nome[x]);
		printf("Deseja digitar outro nome? ");
		scanf("%s",sair);
		x++;
	}
}