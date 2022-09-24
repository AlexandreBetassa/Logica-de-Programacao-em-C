#include<stdio.h>
main() {
	int v[11]= {34,22,34,98,74,34,41,12,56,34,78}, num=34, qtdIgual=0;
	for(int x=0; x<12; x++) {
		if(v[x]==num)
			qtdIgual=qtdIgual+1;
	}
	printf("Existem %i numeros iguais\n", qtdIgual);
}