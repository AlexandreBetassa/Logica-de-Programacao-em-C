#include<stdio.h>

main() {
	int x=0,y=0,z=0,mem;
	char nome[99], auxNome[99], auxSub[1];

	//pedindo informações ao usuário
	printf("Digite seu nome completo: ");
	setbuf(stdin,NULL);
	gets(nome);

	//designando letra "auxSub" a ser substituida pelo sobrenome
	auxSub[0]=nome[2];

	//analisando final do nome
	for(x; nome[x]!='\0'; x++) {
	}
	//se nome no final, analisando qual o ultimo sobrenome
	if(nome[x]=='\0')
		for(x; nome[x-1]!=32; x--) {
		}
	//definindo posição de inicio do sobrenome
	y=x;
	mem=x;

	//substituindo letra por sobrenome
	for(x=0; nome[x]!='\0'; x++) {
		auxNome[z]=nome[x];
		z++;
		if(nome[x]==auxSub[0]) {
			z=z-1;
			for(y=mem; nome[y]!='\0'; y++) {
				auxNome[z]=nome[y];
				z++;
			}
		}
	}

	//printando o final do programa na tela
	auxNome[z]='\0';
	printf("%s", auxNome);
}