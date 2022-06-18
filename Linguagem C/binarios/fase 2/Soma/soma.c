#include<stdio.h>
main()
{
	int N1, N2;
	printf("Digite o primeiro  numero: \n");
	scanf("%i", &N1);
	printf("O numero digitado e: %d\n",N1);
	printf("digite o segundo numero:\n");
	scanf("%i", &N2);
	printf("O numero digitado e: %d\n",N2);
	N1=N1+N2;
	printf("A soma e: %d", N1);
}