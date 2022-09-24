#include<stdio.h>
main() {
	int l1[3][3];
	for(int x=0; x<3; x++) {
		for(int y=0; y<3; y++) {
			printf("Digite os valores da linha %i coluna %i: ", x+1, y+1);
			scanf("%i", &l1[x][y]);
		}
	}
	for(int x=0; x<3; x++) {
		for( int y=0;y<3;y++)
		printf("%i ", l1[x][y]);
		printf("\n");
	}
}