#include<stdio.h>
main() {
	char nome[99];

	printf("Digite o nome: ");
	gets(nome);

	for(int x=0; nome[x]!='\0'; x++) {
		// se primeira letra do nome for minuscula, transformo em maiuscula
		if(nome[0]>96) {
			nome[0]=nome[0]-32;
			//se nome de x após espaço for minusculo, transformo para maiusculo
		} else if(nome[x]==32) {
			x++;
			if(nome[x]>96)
				nome[x]=nome[x]-32;
			//se restante das letras do nome maiuscula transformo em minuscula
		} else if(x>0) {
			if (nome[x]<97) {
				nome[x]=nome[x]+32;
			}
		}
	}
	printf("%s",nome);
}