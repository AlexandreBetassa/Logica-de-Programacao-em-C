#include<stdio.h>

main() {
	int valor,soma=0;
	char palavra[99];
	printf("Digite uma palavra: ");
	gets(palavra);
	for(int x=0; palavra[x]!='\0'; x++) {
		soma=soma+1;
	}
	printf("Digite uma posicao: ");
	scanf("%i",&valor);
	if(valor>soma||valor<0)
		printf("Fora de range");
	else {
		palavra[valor]='x';
		printf("%s",palavra);
	}
}