#include<stdio.h>
main() {
	int x=0,y=0;
	char nome[99], aux[99];
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
	for(int x=1; aux[x]!='\0'; x++) {
		printf("%c",aux[x]);
	}
}