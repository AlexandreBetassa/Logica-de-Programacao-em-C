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
		} else if(sexo<0) {
			printf("Invalido\n\n");
		} else if(sexo>1) {
			printf("Invalido\n\n");
		}
		printf("Informe sua idade: ");
		scanf("%i", &idade);
		printf("Sua idade e: %i anos\n\n", idade);
		
		if(sexo==homem&&idade<=10){
			printf("Crianca do sexo masculino\n\n");
		}
		else if(sexo==homem&&idade<=18){
			printf("Adolescente do sexo masculino\n\n");
		}
		else if(sexo==homem&&idade<=75){
			printf("Adulto do sexo masculino\n\n");
		}
		else if(sexo==homem&&idade>75){
			printf("Idoso do sexo masculino\n\n");
		}
		else if(sexo==mulher&&idade<=10){
			printf("Crianca do sexo feminino\n\n");
		}
		else if(sexo==mulher&&idade<=18){
			printf("Adolescente do sexo feminino\n\n");
		}
		else if(sexo==mulher&&idade<=75){
			printf("Adulto do sexo feminino\n\n");
		}
		else if(sexo==mulher&&idade>75){
			printf("Idoso do sexo feminino\n\n");
		}
	}
}