#include<stdio.h>

main() {
	int y=0,x=0,z=0;
	char nome[99], auxNome[99], aux[99], auxSub[1];

	// pedindo informações ao usuário
	printf("Digite seu nome completo: ");
	setbuf(stdin,NULL);
	gets(nome);

	//designando letra "auxSub" a ser substituida pelo sobrenome
	auxSub[0]=nome[2];

	//analisando sobrenome

	//analisando final do nome
	for(x; nome[x]!='\0'; x++) {
	}
	//se nome no final, analisando qual o ultimo sobrenome
	if(nome[x]=='\0')
		for(x; nome[x]!=32; x--) {
		}
	if(nome[x]==32) {
		x++;
		//definindo qual o ultimo sobrenome na variavel "aux"
		while(nome[x]!='\0') {
			aux[y]=nome[x];
			y++;
			x++;
		}
	}
	aux[y]='\0';
	//substituindo letra por sobrenome,
	for(x=0; nome[x]!='\0'; x++) {
		auxNome[z]=nome[x];
		z++;
		if(nome[x]==auxSub[0]) {
			z=z-1;
			for(y=0; aux[y]!='\0'; y++) {
				auxNome[z]=aux[y];
				z++;
			}
		}
	}


	//printando o final do programa na tela
	auxNome[z]='\0';
	printf("%s", auxNome);
}