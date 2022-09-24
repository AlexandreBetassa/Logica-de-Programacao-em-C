#include<stdio.h>
main() {
	int v[11]= {34,22,34,98,74,34,41,12,56,34,78}, r=0;
	for(int x=0; x<11; x++) {
		if(v[x]==34) {
			r=r+1;
		}
	}
	printf("Existem %i numeros 34 repetidos", r);
}