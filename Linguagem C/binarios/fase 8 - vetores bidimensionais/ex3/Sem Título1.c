#include<stdio.h>
main() {
	int v[3][3];
	for(int x=0; x<3; x++) {
		for(int y=0; y<3; y++) {
			printf("Digite o numero: ");
			scanf("%i", &v[x][y]);
		}
	}
	v[0][0]=0;
	v[0][2]=0;
	v[1][1]=0;
	v[2][0]=0;
	v[2][2]=0;
	int x=0,i=0,z=1,y=2;
	while(x<3) {
		printf("[%i, %i, %i] ", v[x][i],v[x][z],v[x][y]);
		printf("\n");
		x++;
		0+3;
		z+3;
		y+3;
	}
}