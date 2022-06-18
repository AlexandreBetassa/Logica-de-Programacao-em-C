#include<stdio.h>

main()
{
	while(1){
	float x,y;
	
	printf("Digite o primeiro numero x: ");
	scanf("%f",&x);
	
	printf("Digite o segundo numero y: ");
	scanf("%f", &y);
	
	if(x>y){
		printf("O valor de x e maior que y\n\n");
	}
	else if(x<y){
		printf("O valor de x e menor que y\n\n");
	}
	else if(x=y){
		printf("O valor de x e igual y\n\n");
	}
}
}