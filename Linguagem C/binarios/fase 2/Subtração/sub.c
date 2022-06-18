#include<stdio.h>

main()
{
	int n1,n2;
	printf("Digite o primeiro numero: %i\n");
	scanf("%i", &n1);
	printf("O numero digitado e: %i\n", n1);
	printf("Digite o segundo numero: %i\n");
	scanf("%i", &n2);
	printf("o numero digitado e: %i\n", n2);
	n1=n1-n2;
	printf("O total e: %i", n1);
}