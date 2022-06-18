#include<stdio.h>
main() {
	//define vetor principal e auxiliar
	char vp[99],va[99];
	//define indexadores
	int x=0,y=0;
	//pedindo informacoes ao usuario
	printf("Digite a palavra a ser analisada: ");
	gets(vp);
	printf("Digite a palavra a ser encontrada: ");
	gets(va);
	while(vp[x]!=0) {
		if(vp[x]==va[y]) {
			x++;
			y++;
			if(va[y]==0) {
				printf("Existe");
				break;
			}
		} else {
			y=0;
			x++;
			
		}
		if(vp[x]==0) {
			printf("Nao existe");
		}
	}
}