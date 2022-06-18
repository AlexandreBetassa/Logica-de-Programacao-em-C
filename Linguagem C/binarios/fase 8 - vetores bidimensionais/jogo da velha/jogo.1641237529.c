#include<stdio.h>
main() {
	int v[3][3],valor,jogo=0,x,y,check=0;
	//vez do jogador 1
	while(check<1) {
		printf("Vez do jogador X\n\n");
		printf("Digite a linha e a coluna desejada: ");
		scanf("%i %i", &v[x][y]);
		v[x][y]=1;
		//Vez do jogador 2
		printf("Vez do jogador O\n\n");
		printf("Digite a linha e a coluna desejada: ");
		scanf("%i, %i", &v[x][y]);
		v[x][y]=0;
		for(int x=0; x<3; x++) {
			for(int y=0; y<3; y++) {
				printf("%i", v[x][y]);
			}
		}
	}
}

