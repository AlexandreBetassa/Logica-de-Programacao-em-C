#include<stdio.h>

main() {
	int numTab=0,i=0;
	printf("Qual tabuada deseja saber: ");
	scanf("%i", &numTab);
	while(i<11){
		printf("%i\n",numTab*i);
		i++;
	}
}