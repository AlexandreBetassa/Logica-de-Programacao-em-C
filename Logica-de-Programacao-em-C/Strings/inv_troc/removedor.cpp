#include<stdio.h>
main() {
	int x=0,y=0;
	char nome[99], aux[99];
	//pedindo informacao
	printf("Digite o nome: ");
	gets(nome);

	//analise de vogais
	for(x; nome[x]!='\0'; x++) {
		if(nome[x]!='a'&&nome[x]!='e'&&nome[x]!='i'&&nome[x]!='o'&&nome[x]!='u') {
			aux[y]=nome[x];
			y++;
		}
	}
	if(aux[0]=='\0') {
		printf("O nome so possui vogais");
	} else
		printf("Nome original %s, nome modificado %s", nome, aux);
}