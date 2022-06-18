#include<stdio.h>
main() {
	int v[10]= {9,11,21,14,44,25,78,16,90,1},vt[3],qtd=0;
	for(int x=0; x<10; x++) {
	if(v[x]>10&&v[x]<20)
	vt[x]=v[x];
	}
	for(int x=0;x<3;x++){
		printf("%i\n",vt[x]);
	}
}
