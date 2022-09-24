#include<stdio.h>
main() {
	//definicao de vetor principal e vetor auxiliar
	int y=0;
	char vp[99], va[y];
	printf("Digite a palavra: ");
	gets(vp);
	printf("Digite a palavra a ser identificada: ");
	gets(va);
	for(int x=0; vp[x]!=0; x++) {
		if(vp[x]==va[y]) {
			x++;
			y++;
		} else {
			y=0;
		}
	}
}