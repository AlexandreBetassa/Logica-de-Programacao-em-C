#include<stdio.h>
main() {
	int v[12]={23,12,54,22,67,92,41,11,80,99,54,15},x=0,y=0,aux;
	while(x<12) {
		while(y<12) {
			if(v[y]<v[x]) {
				aux=v[y];
				v[y]=v[x];
				v[x]=aux;
			} else
				y++;
		}
		x++;
		y=x;
	}
	for(int x=0; x<12; x++) {
		printf("%i, ",v[x]);
	}
}