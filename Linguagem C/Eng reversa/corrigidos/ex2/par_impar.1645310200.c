#include<stdio.h>

void main() {
	int m[3][3], par=0, impar=0;
	//pedindo valores da matriz
	for(int i=0; i<3; i++) {
		for(int n=0; n<3; n++) {
			printf("Digite o valor da posicao %i/%i: ", i+1, n+1);
			scanf("%i", &m[i][n]);
		}
	}
	//analisando primeiro vetor
	for (int i=0; i<3; i++) {
		//analisando numeros da primeira coluna
		for (int n=0; n<3; n++) {
			//se vetor impar
			if (m[i][n]%2 == 1) {
				impar++;
			} else {
				par++;
			}
		}
	}
	//imprimindo resultados
	printf("\nQuantidade de numeros pares: %i\n", par);
	printf("Quantidade de numeros impares: %i\n", impar);
}