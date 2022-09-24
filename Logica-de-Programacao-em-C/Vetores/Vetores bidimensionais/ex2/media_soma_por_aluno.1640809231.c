#include<stdio.h>
main() {
	float aluno[4][5], totalAluno[4], media[4];
	for(int x=0; x<4; x++) {
		for(int y=0; y<5; y++) {
			printf("digite a nota %i do aluno %i: ", y+1,x+1);
			scanf("%f", &aluno[x][y]);
		}
	}
	for(int x=0; x<4; x++) {
		for(int y=0; y<5; y++) {
			totalAluno[x]=totalAluno[x]+aluno[x][y];
		}
		media[x]=totalAluno[x]/5;
	}
	for(int x=0; x<4; x++)
		printf("A nota do aluno %i e: %.2f e a media e: %.2f\n",x+1, totalAluno[x], media[x]);
}