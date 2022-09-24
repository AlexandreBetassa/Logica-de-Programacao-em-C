#include<stdio.h>
main() {
	int x=0,y=-1;
	char nome[200], aux[200];
	printf("Digite a palavra: ");
	gets(nome);
	for(x=0; nome[x]!='\0'; x++);
	if(nome[x]=='\0') {
		for(x; x>-1; x--) {
			aux[y]=nome[x];
			y++;
		}
	} else {
		x++;
	}
	printf("A palavra e %s e o contrario e %s",nome,aux);
}