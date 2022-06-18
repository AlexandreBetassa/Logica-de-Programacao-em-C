#include<stdio.h>
main() {
	int valor[]= {13,21,52,19,99,11,17},nPode=0,pode=0;
	for(int i=0; i<7; i++) {
		if(valor[i]>=18) {
			pode++;
		} else if(valor[i]<18) {
			nPode++;
		}
	}
	if(pode>nPode)
		printf("A maioria pode dirigir");
	else
		printf("A maioria nao pode dirigir");
}