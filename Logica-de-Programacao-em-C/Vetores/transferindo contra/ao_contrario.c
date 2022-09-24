#include<stdio.h>
main() {
	int v[6]= {22,41,12,56,34,78},vt[6];
	for(int i=0; i<6; i++) {
		vt[5-i]=v[i];
	}
	for(int i=0; i<6; i++) {
		printf("%i\n",vt[i]);
	}
}n