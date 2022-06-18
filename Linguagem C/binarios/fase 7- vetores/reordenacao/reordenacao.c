#include<stdio.h>
main() {
	int v[]= {5000,37000,1000,1,2}, x=0,y=0, aux;
	while(x<5) {
		while(y<5) {
			if(v[x]>v[y]) {
				aux=v[x];
				v[x]=v[y];
				v[y]=aux;
			}
			y++;
		}
		x++;
		y=x;
	}
	y=0;
	while(y<5) {
		printf("%i\n", v[y]);
		y++;
	}
}