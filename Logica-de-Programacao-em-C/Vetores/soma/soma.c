#include<stdio.h>
main(){
	int v[10]={3,7,6,4,1,9,8,2,15,5}, soma=0;
	for(int x=0;x<10;x++){
		soma=soma+v[x];
	}
	printf("A soma e %i", soma);
}
