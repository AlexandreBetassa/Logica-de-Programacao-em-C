#include<stdio.h>
main() {
	while(1) {
		int x,y;
		printf("Informe um numero: ");
		scanf("%i", &x);
		y=x%2;
		if (y==0)
		printf("O numero %i e par\n\n", x);
		else
		printf("O numero %i e impar\n\n", x);
}
}