#include<stdio.h>

main() {
	int qtd,pos,z=0,y,i;
	//pedindo quantos produtos deseja informar
	printf("Digite a quantidade de produtos desejada: ");
	scanf("%i", &qtd);
	char produto[qtd][99],aux[qtd][99];
	//pedindo o nome dos produtos
	for(int x=0; x<qtd; x++) {
		printf("Digite o nome do produto %i: ",x+1);
		setbuf(stdin,NULL);
		gets(produto[x]);
	}
	//imprimindo lista de produtos informada inicialmente
	printf("\nLISTA DE PRODUTOS\n");
	for(int x=0; x<qtd; x++) {
		printf("%s\n",produto[x]);
	}
	//pedindo posicao a ser atualizada
	for(int x=qtd; x!=0; x--) {
		printf("\nIndique uma posicao: ");
		setbuf(stdin,NULL);
		scanf("%i", &pos);
		pos=pos-1;
		//analisando se a posição informaca é maior que a quantidade existente
		if(pos>qtd||pos<0) {
			printf("Posicao invalida!!!\n\n");
			x++;
			//transferindo cacaracteres
		} else {
			aux[pos][0]='O';
			aux[pos][1]='K';
			aux[pos][2]=32;
			aux[pos][3]='-';
			aux[pos][4]=32;
			for(y=5; produto[pos][z]!='\0'; y++) {
				aux[pos][y]=produto[pos][z];
				z++;
			}
			//retornando caracteres para vetor de string original
			aux[pos][y]='\0';
			z=0;
			for(i=0; aux[pos][i]!='\0'; i++) {
				produto[pos][i]=aux[pos][i];
			}
			produto[pos][i]='\0';
			y=0;
			i=0;
			//imprimindo lista de produtos atualizada
			for(int x=0; x<qtd; x++) {
				printf("%s\n",produto[x]);
			}
		}
	}
}