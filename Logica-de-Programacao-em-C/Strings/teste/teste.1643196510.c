#include<stdio.h>
main() {
	int y=0,x=0;
	char nome[20], v[y],d,o;
	printf("Digite o nome: ");
	gets(nome);
	while(nome[x]!=0) {
		if(nome[x]=='d') {
			v[y]='d';
			y++;
			x++;
			if(nome[x]=='o') {
				v[y]='o';
				x++;
				break;
			} else {
				y=0;
			}
		} else {
			x++;
		}
	}
	if(v[0]=='d'&&v[1]=='o') {
		printf("Existe");
	} else {
		printf("Nao existe");
	}
}