#include<stdio.h>

main() {
	int ano_nasc, ano_atual, idade;
	while(1) {
		printf("Digite seu ano de nascimento: ");
		scanf("%i",&ano_nasc);

		printf("Digite o ano atual: ");
		scanf("%i", &ano_atual);
		
		idade=ano_atual-ano_nasc;
		
		if(idade<=0){
			printf("ainda nao nasceu\n\n");
		}
		else if(idade<=10){
			printf("Sua idade e %i anos e voce e crianca\n\n", idade);
		}
		else if(idade<=18){
			printf("Sua idade e %i anos e voce e adolescente",idade);
		}
		else if(idade<=70){
			printf("Sua idade e %i anos e voce e adulto\n\n", idade);
		}
		else if(idade>70){
			printf("Sua idade e %i anos e voce e idoso\n\n", idade);
		}
		}
}