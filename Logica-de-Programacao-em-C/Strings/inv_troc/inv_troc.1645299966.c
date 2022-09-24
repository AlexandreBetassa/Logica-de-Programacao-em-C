#include<stdio.h>
main() {
	int somaC=0,x=0,y=0;
	char nome[99], aux[99];
	//pedindo informacao
	printf("Digite o nome: ");
	gets(nome);
	//somando as letras do nome
	for(x=0; nome[x]!='\0'; x++) {
		somaC=somaC+1;
	}
	if(nome[x]=='\0') {
		somaC=somaC-1;
	}
	//inverter o nome
	for(somaC; somaC>-1; somaC--) {
		if(nome[somaC]!='a') {
			if (nome[somaC]!='e') {
				if (nome[somaC]!='i') {
					if (nome[somaC]!='o') {
						if (nome[somaC]!='u') {
							aux[y]=nome[somaC];
							y++;
						}
					}
				}
			}
		}
	}
	printf("%s", aux);
}