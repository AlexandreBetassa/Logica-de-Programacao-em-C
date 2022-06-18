#include<stdio.h>

main() {
	int x=1,y=1,z=1;
	while(x<11) {
		y=1;
		while(y<11) {
		z=1;
			while(z<11) {
				printf("%i %i %i\n",x,y,z);
				z++;
				}
			printf("\n");
			y++;
		}
		printf("\n");
		x++;
	}
}