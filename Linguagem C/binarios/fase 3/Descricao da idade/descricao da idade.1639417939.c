#include<stdio.h>

main()
{
	while(1){
	int x;
	printf("Digite sua idade: ");
	scanf("%i", &x);
	
	if(x<=0){
		printf("Ainda nao nasceu\n\n");
	}
	else if(x<=10){
		printf("Crianca\n\n");
	}
	else if(x<=18){
		printf("Adolescente\n\n");
	}
	else if(x<70){
		printf("Adulto\n\n");
	}
	else if(x>=70){
		printf("Idoso\n\n");
	}
}
}