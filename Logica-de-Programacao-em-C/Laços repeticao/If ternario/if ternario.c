#include<stdio.h>

main(){
	while(1){
		int x,y;
		printf("Por favor informe um numero: ");
		scanf("%i", &x);
		y=x%2;
		y==1?printf("O numero e impar\n\n"):printf("O numero e par\n\n");
	}
}