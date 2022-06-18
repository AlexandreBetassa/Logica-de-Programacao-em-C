#include<stdio.h>

main() {
	float notaDig, SomaNota, media;
	for(int n=1; n<=10; n++) {
		printf("Digite a nota %i: ",n);
		scanf("%f", &notaDig);
		SomaNota=SomaNota+notaDig;
	}
	printf("A media de notas e: %.2f", SomaNota/10);
}