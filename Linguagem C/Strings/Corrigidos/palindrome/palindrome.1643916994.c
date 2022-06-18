#include<stdio.h>
main() {
	int y=0;
	char nome[99],aux[99];
	printf("Digite a palavra: ");
	gets(nome);
	for(int x=0; nome[x]!='\0'; x++) {
		aux[x]=nome[x];
		y++;
	}
	if(aux[y]=='\0')
		y--;
	int x=0;
	while(nome[x]==aux[y]) {
		x++;
		y--;
		if(y==0) {
			printf("Sao palindromes!");
			break;
		}
	} if(y>0)
		printf("Nao sao palindromes!");
}