#include<stdio.h>
main() {
	int x=1,y=4;
	while(x<41) {
		y=4;
		while(y>0) {
			printf("%i %i\n",x,y);
			y--;
		}
		printf("\n");
		x++;
	}
}