#include<stdio.h>
main() {
	//indexadores
	int x=0,y=0;
	//vetor principal e vetor auxiliar
	char vp[]="ASDFGASDFASDFGAASDASDFGHalexandeASDDFASDFQADF", va[]="alexandre";
	//condicao de analise enquanto nao houver terminador
	while(vp[x]!=0) {
		//comparacao se a posicao dos dois vetores sao iguais, se sim soma mais uma posicao 
		//em cada vetor
		if(vp[x]==va[y]) {
			x++;
			y++;
			//condicao de analise se o vetor auxiliar completou todos os valores, indicando igualdade 
			//caso exista imprimesse na tela que existe subtrings na palavra
			if(va[y]==0) {
				printf("Existe");
				break;
			}
			//caso as posicoes nao sejam iguais, ira somar mais um posicao somente em vp
			//ate que haja condicao de igualdade ou ate que se encontre o terminador
		} else
			x++;
	}
	//caso nao se complete todos os vetores do vetor auxiliar e do vetor principal
	//significa que nao aconteceu igualdade, sendo assim nao existe uma substring na palavra
	//entao essa condicao faz com que imprima na tela que nao existe uma condicao de igualdade
	// nos vetores
	if(va[y]!=0) {
		printf("Nao existe");
	}
}