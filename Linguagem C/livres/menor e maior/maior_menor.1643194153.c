#include<stdio.h>
main() {
	int v[]= {34,22,34,98,74,34,41,12,56,34,78},maior=0,menor=1000;
	for(int x=0; x<11; x++) {
		if(v[x]>maior) {
			maior=v[x];
		} else if(v[x]<menor) {
			menor=v[x];
		}
	}
	printf("O maior e: %i\nO menor e: %i", maior,menor);
}