#include<stdio.h>

main() {
int NumSug;
printf("Digite um numero: ");
scanf("%i", &NumSug);
for(int x=NumSug;x>=0;x--){
	printf("numero: %i\n",x);
}
}