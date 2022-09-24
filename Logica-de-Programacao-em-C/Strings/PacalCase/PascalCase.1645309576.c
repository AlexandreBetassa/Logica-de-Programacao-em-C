#include<stdio.h>
main() {
	char nome[99];

	printf("Digite o nome: ");
	gets(nome);

	for(int x=0; nome[x]!='\0'; x++) {
		if(nome[0]>96){
			nome[0]=nome[0]-32;
		}
		else if(nome[x]==32) {
			x++;
			if(nome[x]>96) {
				nome[x]=nome[x]-32;
			}
		}
	}
	printf("%s",nome);
}