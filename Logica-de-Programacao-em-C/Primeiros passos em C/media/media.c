#include<stdio.h>

main()
{
	float n1,n2,n3,n4,n5;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	printf("Digite a quarta nota: ");
	scanf("%f",&n4);
	n5=(n1+n2+n3+n4)/4;
	printf("A media das notas e: %.1f \n",n5);
	
}