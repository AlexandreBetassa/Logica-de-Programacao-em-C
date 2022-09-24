#include<stdio.h>

main() {
	while(1) {
		int sexo, idade;
		//coleta de dados "Sexo"
		printf("Por favor informe seu sexo\n1 para homem\n0 para mulher:\n");
		scanf("%i", &sexo);
		//Coleta de dados "Idade"
		printf("Informe sua idade: ");
		scanf("%i", &idade);
		printf("Sua idade e: %i anos\n\n", idade);
		//caso "sexo=homem"
		if(sexo==1) {
			printf("Homem, ");
			if(idade<=10) {
				printf("Crianca\n\n");
			} else if(idade<=18) {
				printf("Adolescente\n\n");
			} else if(idade<=75) {
				printf("Adulto\n\n");
			} else 
				printf("Idoso\n\n");
			//Caso "sexo=mulher"
		} else {
			printf("Mulher, ");
			if(idade<=10) {
				printf("Crianca\n\n");
			} else if(idade<=18) {
				printf("Adolescente\n\n");
			} else if(idade<=75) {
				printf("Adulta\n\n");
			} else
				printf("Idosa\n\n");
		}
	}
}
