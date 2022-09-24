#include<stdio.h>

main() {
	while(1) {
		int homem=1, mulher=0, sexo, idade;
		printf("Por favor informe seu sexo\n1 para homem\n0 para mulher\n");
		scanf("%i", &sexo);
		if(sexo==homem) {
			printf("Masculino\n\n");
		} else if(sexo==mulher) {
			printf("Feminino\n\n");
		} else {
			printf("Invalido\n\n\n\n");
		}
		printf("Informe sua idade: ");
		scanf("%i", &idade);
		printf("Sua idade e: %i anos\n\n", idade);

		if(sexo==homem) {
			printf("Homem, ");
			if(idade<=10) {
				printf("Crianca\n\n");
			} else if(idade<=18) {
				printf("Adolescente\n\n");
			} else if(idade<=75) {
				printf("Adulto\n\n");
			} else {
				printf("Idoso\n\n");
			}
		} else if(sexo==mulher) {
			printf("Mulher, ");
			if(idade<=10) {
				printf("Crianca\n\n");
			} else if(idade<=18) {
				printf("Adolescente\n\n");
			} else if(idade<=75) {
				printf("Adulta\n\n");
			} else {
				printf("Idosa\n\n");
			}
		}
	}
}