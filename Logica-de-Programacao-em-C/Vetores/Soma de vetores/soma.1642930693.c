#include<stdio.h>
main() {
	int v[]= {41,54,12,55,204,619,15}, soma=0,x=0;
	while(x<7) {
		soma=soma+v[x];
		x++;
	}
	printf("%i", soma);
}