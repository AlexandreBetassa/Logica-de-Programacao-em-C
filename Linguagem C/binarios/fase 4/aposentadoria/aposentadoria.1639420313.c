#include<stdio.h>

main() {
	while(1) {
		int homem=1, mulher=0, sexo, idade, tempoServ;
		printf("Por favor informe seu sexo\n1 para homem\n0 para mulher:\n");
		scanf("%i", &sexo);
		if(sexo==homem) {
			printf("Masculino\n\n");
		} else if(sexo==mulher) {
			printf("Feminino\n\n");
			}else {
				printf("Invalido\n\n");
			}
			printf("Informe sua idade: ");
			scanf("%i", &idade);
			printf("Sua idade e: %i anos\n\n", idade);
			printf("Informe seu tempo de servico: ");
			scanf("%i", &tempoServ);
			printf("Seu tempo de servico e de: %i anos\n\n", tempoServ);

			if(sexo==homem&&idade>65||tempoServ>35) {
				printf("Pode aposentar\n\n");
			} else if(sexo==homem&&idade<=65||tempoServ<=35) {
				printf("Nao pode aposentar\n\n");
			} else if(sexo==mulher&&idade>55||tempoServ>25) {
				printf("Pode aposentar");
			} else if(sexo==mulher&&idade<=55||tempoServ<=25) {
				printf("Nao pode aposentar");
			}
		}
	}