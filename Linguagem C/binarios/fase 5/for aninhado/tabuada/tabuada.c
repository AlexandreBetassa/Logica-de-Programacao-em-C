#include<stdio.h>

main() {
	while(1){
	int NumDig;
	printf("Qual tabuada deseja saber: ");
	scanf("%i",&NumDig);
	for(int x=0; x<=10; x++) {
		printf("%i x %i = %i\n",NumDig,x,NumDig*x);
	}
	printf("FIM\n\n");
}
}