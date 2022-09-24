#include<stdio.h>
main() {
	float aluno[4][5], somaNota=0;
	for(int x=0; x<4; x++) {
		for(int y=0; y<5; y++) {
			printf("digite a nota %i do aluno %i: ", y+1,x+1);
			scanf("%f", &aluno[x][y]);
		}
	}
	for(int x=0;x<4;x++){
		for(int y=0;y<5;y++){
			somaNota=somaNota+aluno[x][y];
		}
}
		printf("%.2f", somaNota);
}
