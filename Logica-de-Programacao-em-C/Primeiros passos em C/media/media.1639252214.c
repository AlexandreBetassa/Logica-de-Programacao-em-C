#include<stdio.h>

main()
{
	float n1,n2,n3,n4,media;
	printf("Digite a primeira nota: ");
	scanf("%.1f \n", &n1);
	printf("Digite a segunda nota: ");
	scanf("%.1f \n", &n2);
	printf("Digite a terceira nota: ");
	scanf("%.1f \n", &n3);
	printf("Digite a quarta nota: ");
	scanf("%.1f \n", &n4);
	media=(n1+n2+n3+n4)/4;
	printf("A media das notas e: %.1f \n", media);
	
}