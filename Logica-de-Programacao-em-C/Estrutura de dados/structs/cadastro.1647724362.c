#include<stdio.h>
void main(void){
	//declarando a struct
	struct cadastro_cliente{
		char nome[50];
		int idade;
		char email[50];
		int diaNasc;
		int mesNasc;
		int anoNasc;
	};
	struct cadastro_cliente cadastro;
	
	printf("***Cadastro de cliente***\n\n");
	//pedindo nome
	printf("Digite o nome completo: ");
	fflush(stdin);
	fgets(cadastro.nome,50,stdin);
	
	//pedindo idade
	printf("Digite a idade: ");
	fflush(stdin);
	scanf("%i",&cadastro.idade);
	
	//pedindo email
	printf("Digite o email: ");
	fflush(stdin);
	fgets(cadastro.email,50,stdin);
	
	//pedindo dia nascimento
	printf("Digite o dia de nascimento: ");
	fflush(stdin);
	scanf("%i", &cadastro.diaNasc);
	
	//pedindo mes nascimento
	printf("Digite o mes de nascimento: ");
	fflush(stdin);
	scanf("%i", &cadastro.mesNasc);
	
	//pedindo ano nascimento
		printf("Digite o ano de nascimento: ");
	fflush(stdin);
	scanf("%i", &cadastro.anoNasc);
	
	//imprimindo resultados na tela
	printf("\n");
	printf("***Exibindo dados***");
	printf("\n\n");
	printf("Nome: %s", cadastro.nome);
	printf("Idade: %i\n", cadastro.idade);
	printf("Email: %s", cadastro.email);
	printf("Dia de Nascimento: %i\n", cadastro.diaNasc);
	printf("Mes de nascimento: %i\n", cadastro.mesNasc);
	printf("Ano de nascimento: %i\n\n", cadastro.anoNasc);
	printf("***Fim dos resultados***");
	return;
}