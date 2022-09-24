#include<stdio.h>
main() {
	int soma[10][10], x=0;
	char nome[10][99],sair[99];
	while(sair!='nao') {
		if(sair=='sim') {
			printf("Digite um nome: ");
			scanf("%s", nome[x]);
			printf("Deseja digitar outro nome? ");
			scanf("%s", &sair);
			x++;
		} 
	}
}