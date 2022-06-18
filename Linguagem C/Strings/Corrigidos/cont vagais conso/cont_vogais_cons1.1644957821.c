#include<stdio.h>
main() {
	int aMaiorV,aMenorV,aMaiorC,aMenorC,maiorV=0,menorV=0,maiorC=0,menorC=0;
	char nome[5][99];
	//pedindo informações ao usuário
	for (int x=0; x<5; x++) {
		printf("Digite o %i nome: ", x+1);
		scanf("%s", nome[x]);
	}
	//somando vogais e consoantes
	int somaV=0,somaC=0;
	for(int x=0; x<5; x++) {
		for(int y=0; nome[x][y]!='\0'; y++) {
			if(nome[x][y]=='a'||nome[x][y]=='e'||nome[x][y]=='i'||nome[x][y]=='o'||nome[x][y]=='u') {
				somaV=somaV+1;
			} else {
				somaC=somaC+1;
			}
		}
		//comparações, indicando maiores e menores
		if(x==0) {
			aMaiorV=somaV;
			aMenorV=somaV;
			aMaiorC=somaC;
			aMenorC=somaC;
		} else if(somaV>aMaiorV) {
			aMaiorV=somaV;
			maiorV=x;
		} else if(somaV<aMenorV) {
			aMenorV=somaV;
			menorV=x;
		}
		if(somaC>aMaiorC) {
			aMaiorC=somaC;
			maiorC=x;
		} else if(somaC<aMenorC) {
			aMenorC=somaC;
			menorC=x;
		}
		somaC=0;
		somaV=0;
	}
	printf("\nO nome com mais vogais e: %s\nO nome com menos vogais e: %s\nO nome com mais consoantes e: %s\nO nome com menos consoantes e: %s", nome[maiorV],nome[menorV],nome[maiorC],nome[menorC]);
}