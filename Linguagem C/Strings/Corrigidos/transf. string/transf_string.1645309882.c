#include<stdio.h>
main() {
	int pos,qtdC=0;
	char nome[99];

	//pedindo nome
	printf("Digite um nome: ");
	gets(nome);

	//somando quantidade de caracter
	for(int x=0; nome[x]!='\0'; x++) {
		qtdC=qtdC+1;
	}

	//retirando caracteres da posição informada
	while(nome[0]!='\0') {
		//pedindo posicao que o usuario deseja retirar o numero
		printf("Digite a posicao que deseja retirar uma letra: ");
		scanf("%i", &pos);
		//anelise de posicao valida
		if(pos>qtdC||pos<=0) {
			printf("Valor invalido!!!\n\n");
			//posicao real iniciando em 1°
		} else {
			pos=pos-1;
			//adequando nome a informacao do usuario
			while(nome[pos]!='\0') {
				nome[pos]=nome[pos+1];
				pos=pos+1;
			}
			//printando nome atualizado
			printf("%s\n\n",nome);
			qtdC=qtdC-1;
		}
	}
}