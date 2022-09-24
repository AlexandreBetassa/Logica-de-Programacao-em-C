#include<stdio.h>
main() {
	int l1[3][3];
	for(int x=0; x<3; x++) {
		for(int y=0; y<3; y++) {
			printf("Digite os valores da linha %i coluna %i: ", x+1, y+1);
			scanf("%i", &l1[x][y]);
		}
	}
	int x=0,i=0,z=1,y=2;
	while(x<3) {
			printf("[%i, %i, %i] ", l1[x][i],l1[x][z],l1[x][y]);
			printf("\n");
		x++;
		x+3;
		z+3;
		y+3;
	}
}
