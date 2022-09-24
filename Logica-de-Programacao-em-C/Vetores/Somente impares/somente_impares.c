#include<stdio.h>
main() {
	int v[10] = {34,22,45,12,11,55,29,20,80,92}, vt[4], x=0,y=0,div=0;
	do{
		div=v[x]%2;
		if(div>=1){
		vt[y]=v[x];
		y++;
	}
		x++;
		}while(x<10);
		y=0;
		while(y<4){
			printf("%i\n", vt[y]);
		y++;
		}
	}
