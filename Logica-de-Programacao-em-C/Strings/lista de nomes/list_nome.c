#include<stdio.h>
main() {

	char nome[5][99],aux[5][99];
	int y=0,z=0;
	for(int x=0; x<5; x++) {
		printf("Digite o nome %i: ", x+1);
		scanf("%s", nome[x]);
	}
	//transferindo em caixa alta
	for(int x=0; x<5; x++) {
		while (nome[x][y]!='\0') {
			if(nome[x][y]!='a'&&nome[x][y]!='e'&&nome[x][y]!='i'&&nome[x][y]!='o'&&nome[x][y]!='u') {
				aux[x][z]=toupper(nome[x][y]);
				z++;
			}
			y++;
		}
		aux[x][z]='\0';
		y=0;
		z=0;
	}
	//imprimindo nomes
	for(int x=0; x<5; x++) {
		printf("%s\n",aux[x]);
	}
}