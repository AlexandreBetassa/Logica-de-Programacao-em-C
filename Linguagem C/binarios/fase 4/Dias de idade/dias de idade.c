#include<stdio.h>
main() {
	
	while(1) {
		int idade;
		printf("Qual sua idade: ");
		scanf("%i", &idade);
		if (idade<=0) {
			printf("Nao existe alguem com essa idade\n\n");
		} else if(idade>100) {
			printf("Nao existe alguem com essa idade\n\n");
		} else {
			printf("Voce ja viveu %i dias\n\n", idade*365);
		}
	}
}