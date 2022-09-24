#include<stdio.h>
main() {
	int v[5]= {56,54,87,25,21},vt[5], maior=0;
	for(int x=0; x<5; x++) {
		maior=0;
		for(int y=0; y<5; y++) {
			if(v[y]>maior)
				maior=v[y];
		}
		vt[5-x]=maior;
	}
	for(int x=0; x<6; x++) {
		printf("%i\n", vt[x]);
	}
}