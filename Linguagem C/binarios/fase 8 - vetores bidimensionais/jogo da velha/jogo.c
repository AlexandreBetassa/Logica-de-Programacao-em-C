#include<stdio.h>
main() {
	int v[3][3]= {2,2,2,2,2,2,2,2,2},valor,jogo=0,x,y;
	//vez do jogador 1
	while(1) {
		printf("\nVez do jogador 1\n");
		printf("Digite a linha: ");
		scanf("%i", &x);
		if(x<0||x>2) {
			printf("Invalido");
			break;
		} else
			printf("Digite a coluna: ");
		scanf("%i",&y);
		if(y<0||y>2) {
			printf("Invalido");
			break;
		} else
			v[x][y]=1;
		int i=0,a=0,b=1,c=2;
		while(i<3) {
			printf("[%i, %i, %i] ", v[i][a],v[i][b],v[i][c]);
			printf("\n");
			i++;
			a+3;
			b+3;
			c+3;
		}
		if(v[0][2]==1&&v[1][2]==1&&v[2][2]==1||v[0][1]==1&&v[1][1]==1&&v[2][1]==1||v[0][0]==1&&v[1][0]==1&&v[2][0]==1||v[0][0]==1&&v[0][1]==1&&v[0][2]==1||v[1][0]==1&&v[1][1]==1&&v[1][2]==1||v[2][0]==1&&v[2][1]==1&&v[2][2]==1||v[2][2]==1&&v[1][1]==1&&v[0][0]==1||v[2][0]==1&&v[2][1]==1&&v[2][2]==1||v[2][0]==1&&v[1][1]==1&&v[0][2]==1) {
			printf("Jogador 1 Ganhou!!!\n");
			break;
		} else
		//jogador 2
			printf("\nVez do jogador 2:\n");
		printf("Digite a linha:");
		scanf("%i", &x);
		if(x<0||x>2) {
			printf("Invalido");
			break;
		} else
			printf("Digite a coluna: ");
		scanf("%i", &y);
		if(y<0||y>2) {
			printf("Invalido");
			break;
		} else
			v[x][y]=0;
		i=0,a=0,b=1,c=2;
		while(i<3) {
			printf("[%i, %i, %i] ", v[i][a],v[i][b],v[i][c]);
			printf("\n");
			i++;
			a+3;
			b+3;
			c+3;
		}
		if((v[0][2]==0&&v[1][2]==0&&v[2][2]==0)||(v[0][1]==0&&v[1][1]==0&&v[2][1]==0)||(v[0][0]==0&&v[1][0]==0&&v[2][0]==0)||(v[0][0]==0&&v[0][1]==0&&v[0][2]==0)||(v[1][0]==0&&v[1][1]==0&&v[1][2]==0)||(v[2][0]==0&&v[2][1]==0&&v[2][2]==0)||(v[2][2]==0&&v[1][1]==0&&v[0][0]==0)||(v[2][0]==0&&v[2][1]==0&&v[2][2]==0)||(v[2][0]==0&&v[1][1]==0&&v[0][2]==0)) {
			printf("Jogador 2 Ganhou!!!\n");
			break;
		}
	}
}