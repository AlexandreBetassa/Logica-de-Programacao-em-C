#include<stdio.h>

main() {
	int x=1,y=1;
	while(x<=40) {
		y=1;
		while(y<=4){
			printf("%i %i\n",x,y);
			y++;
		}
		printf("\n");
		x++;
	}
}