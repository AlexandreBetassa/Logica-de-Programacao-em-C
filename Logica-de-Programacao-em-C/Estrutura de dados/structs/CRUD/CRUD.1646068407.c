#include<stdio.h>

//funcao principal
void main(void) {
	int fun=1000,IDrefresh,x,aux,i=0;

	//declarando a struct
	struct cadastro_cliente {
		int ID;
		char nome[50];
		int anoNasc;
	};
	struct cadastro_cliente cadastro[100];
	while(1) {

		//perguntando ao usuário o que deseja fazer
		printf("\n***Indice***\n0-Sair\n1-Cadastrar novo usuario\n2-Atualizar usuario\n3-Deletar usuario\n4-Listar todos os usuarios\nO que deseja fazer: ");
		scanf("%i",&fun);

		//Pedindo informações para novo cliente
		if(fun==0) {
			break;
		} else if(fun==1) {
			printf("\n***Cadastro de cliente***\n\n");
			//pedindo ID
			printf("Digite o ID de identificacao: ");
			fflush(stdin);
			scanf("%i",&cadastro[i].ID);
			//comparando se ja existe o ID escolhido
			
			//****************duvida*************************

			//pedindo nome
			printf("Digite o nome completo: ");
			fflush(stdin);
			fgets(cadastro[i].nome,50,stdin);

			//pedindo ano nascimento
			printf("Digite o ano de nascimento: ");
			fflush(stdin);
			scanf("%i", &cadastro[i].anoNasc);

			//imprimindo informações do usuario
			printf("\n***Usuario cadastrado***\n");
			printf("ID de usuario: %i\n", cadastro[i].ID);
			printf("Nome de usuario cadastrado: %s", cadastro[i].nome);
			printf("Ano de Nascimento cadastrado: %i\n", cadastro[i].anoNasc);
			i++;
		}
		//atualizar usuário
		else if(fun==2) {
			//definindo usuario a ser atualizado
			printf("Digite o ID de usuario que deseja atualizar:");
			fflush(stdin);
			scanf("%i",&IDrefresh);
			//localizando usuario
			for(x=0; cadastro[x].ID!=IDrefresh; x++) {
			}
			//dados atuais do usuario
			printf("ID: %i\n", cadastro[x].ID);
			printf("Nome: %s", cadastro[x].nome);
			printf("Ano de nascimento: %i\n\n", cadastro[x].anoNasc);

			//perguntando ao usuario qual campo deseja atualizar
			printf("Qual campo deseja atualizar?\n1-Nome\n2-Ano de nascimento:\n ");
			fflush(stdin);
			scanf("%i", &aux);

			//para atualizar nome
			if(aux==1) {
				printf("Digite o novo nome: ");
				fflush(stdin);
				fgets(cadastro[x].nome,50,stdin);

				//imprimindo valores atualizados
				printf("ID: %i\n", cadastro[x].ID);
				printf("Nome: %s", cadastro[x].nome);
				printf("Ano de nascimento: %i\n\n", cadastro[x].anoNasc);

				//para atualizar ano de nascimento
			} else if(aux==2) {
				printf("Digite o novo ano de nascimento: ");
				fflush(stdin);
				scanf("%i", &cadastro[x].anoNasc);
				
				//imprimindo valores atualizados
				printf("ID: %i\n", cadastro[x].ID);
				printf("Nome: %s", cadastro[x].nome);
				printf("Ano de nascimento: %i\n\n", cadastro[x].anoNasc);
			}

		} else if(fun==3) {
			
			//*******************duvida**********************

			//imprimindo resultados na tela
		} else if(fun==4) {
			printf("\n");
			printf("***Exibindo dados***");
			printf("\n\n");
			for(int i=0; i<5; i++) {
				printf("ID: %i\n", cadastro[i].ID);
				printf("Nome: %s", cadastro[i].nome);
				printf("Ano de nascimento: %i\n\n", cadastro[i].anoNasc);
			}
			printf("***Fim dos resultados***");
		}
	}
}