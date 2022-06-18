#include<stdio.h>

struct cadastro_cliente {//declaracao e arquitetura de struct
	int ID;//declaracao e arquitetura de struct (ID)
	char Nome[50];//declaracao e arquitetura de struct (Nome ate 50 caracteres)
	int anoNasc;//declaracao e arquitetura de struct (Ano de nascimento)
	int ativo;//declaracao e arquitetura de struct (status do usuario ativo ou inativo)
};

void main (void) {//main
	struct cadastro_cliente cadastro[100];//declaração de struct
	int fun=101;//declaração de variavel escolha de ação "função"
	int qtdCad=0;//declaração de variavel para quantidade de cadastros ativos
	int aux;//declaração de variaveis para auxilio geral(dinamica)
	int x=0;//declaração de posição de vetor nome
	int y=0;//variavel de saida ds looping while

	while(1) {//while do programa main
		printf("***INDICE***\n");//indice de ações
		printf("0-SAIR\n");//define valor para função sair
		printf("1-NOVO CADASTRO\n");//define valor para função novo usuario
		printf("2-ATUALIZAR CADASTRO\n");//define valor para função satualizar usuario
		printf("3-EXCLUIR CADASTRO\n");//define valor para função excluir cadastro
		printf("4-LISTAR USUARIOS CADASTRADOS\n");//define valor para função listar todos os usuarios
		printf("Escolha uma opcao: ");//pedindo para o usuario escolher uma opção
		scanf("%i", &fun);//atribuindo o valor da função na variavel 'fun'
		if(fun<0||fun>4) { //verificação de valor de opção escolhido
			printf("\nOPCAO INVALIDA!!!\n");//caso valor diferente do informado escrever 'opção invalida'
			printf("_________________________\n");//terminador
		}

		if(fun==0) {//função sair
			printf("***SAIR***\n");//informando a opção selecionada
			printf("_________________________\n");//terminador
			break;//saindo do looping
			return;//retornando valor
		}//função sair

		while(fun==1) { //cadastro de novo usuario
			printf("_________________________\n");//terminador
			printf("\n***CADASTRO DE NOVO USUARIO***\n\n");
			y=0; //indexador para termino de while
			while(y!=1) {//localizando usuario inativo
				for(x=0; cadastro[x].ativo!=0; x++) { //looping para localização de cadastro inativado "cadastro[x].ativo==0"
					if(x>100) {//se x>101 nao ha mais espaço para a criação de novos usuarios
						printf("NAO HA ESPAÇO PARA NOVOS CADASTRADOS!!!");//printando informação para o usuario
						break;//stop do looping
					}//se x>101 nao ha mais espaço para a criação de novos usuarios
				}//looping para localização de cadastro inativado "cadastro[x].ativo==0
				y=1;//defino o valor de y=1 para saida do while e continuação do programa
			}//localizando usuario inativo
			y=0;
			while(y!=1) {
				printf("Digite o ID do novo cadastrado: ");//solicitando novo ID para o usuario
				scanf("%i", &aux);
				for(int x=0; x<=qtdCad; x++) {//looping para verificação de ID ja utilizado
					if(cadastro[x].ID==aux&&cadastro[x].ativo==1) {//se algum cadastro ja estiver com o ID igual o informado
						printf("ID JA UTILIZADO!!!\n");//informa que o ID ja esta sendo utilizado
						y=0;
						break;
					}//se algum cadastro ja estiver com o ID igual o informado
					else {
						y=1;
					}
				}//final do for de verificação de ID ja utilizado
			}//final do while de cadastro de novo ID

			cadastro[x].ID=aux;//designando ID após analise de repetição

			printf("Digite o nome do usuario: ");//pedindo nome de usuarioi
			setbuf(stdin,NULL);//limpando buffer de string do teclado
			gets(cadastro[x].Nome);//desiganando vetor de armazenamento do nome

			printf("Digite o ano de nascimento: ");//pedindo ano de nascimento
			scanf("%i",&cadastro[x].anoNasc);//designando vetor de armazenamento do ano de nascimento

			printf("\n***USUARIO CADASTRADO COM SUCESSO!!!***\n");//imprimindo informações cadastradas
			printf("\nID de usuario: %i", cadastro[x].ID);//imprimindo informações cadastradas
			printf("\nNome de usuario: %s", cadastro[x].Nome);//imprimindo informações cadastradas
			printf("\nAno de nascimento: %i\n", cadastro[x].anoNasc);//imprimindo informações cadastradas
			printf("_________________________\n");
			cadastro[x].ativo=1;//ativando usuario no banco de dados
			qtdCad=qtdCad+1;//somando +1 para a quantidade de usuarios cadastrados
			fun=101;//sair do cadastro de usuarios
			break;
		}//cadastro de novo usuario

		while(fun==2) { //atualizar usuario
			printf("_________________________\n");//terminador
			printf("***ATUALIZAR USUARIO***\n\n");//opção escolhida pelo usuario
			printf("Qual o ID de usuario que deseja atualizar?: ");//perguntando qual usuario deseja atualizar
			scanf("%i", &aux);//atribuindo o valor de ID para a função auxiliar para encontrar o usuario
			for(x=0; cadastro[x].ID!=aux; x++) { //looping para localizar usuario
				if(x>qtdCad) { //se x maior que quantidade de usuarios cadastrados
					printf("USUARIO NAO LOCALIZADO!!!\n");//informando que o usuario nao foi localizado
					break;
				}//x maior que quantidade de usuarios cadastrado
			}//looping para localizar usuario
			if(cadastro[x].ativo==0) {
				printf("USUARIO NAO LOCALIZADO!!!\n");
				printf("_________________________\n");//terminador
				break;
			} else//imprimindo os valores atuais ao usuario
				printf("\n***USUARIO LOCALIZADO!!!***");//informando que o usuario foi localizado
			printf("\nID de usuario: %i", cadastro[x].ID);//imprimindo informações cadastradas
			printf("\nNome de usuario: %s", cadastro[x].Nome);//imprimindo informações cadastradas
			printf("\nAno de nascimento: %i\n\n", cadastro[x].anoNasc);//imprimindo informações cadastradas
			printf("Qual o campo que deseja atualizar? ");//perguntando ao usuario qual campo ele deseja atualizar
			printf("\n1-NOME\n2-ANO DE NASCIMENTO\n");//perguntando ao usuario qual campo ele deseja atualizar
			printf("Digite o valor da opcao: ");//perguntando ao usuario qual campo ele deseja atualizar
			scanf("%i",&aux);//atribuindo valor a variavel auxiliar
			if(aux==1) {//se 'aux=1' atualizar nome
				printf("Informe o novo nome: ");//pedindo ao usuario para digitar novo nome
				fflush(stdin);//limpando buffer de entrada(teclado)
				gets(cadastro[x].Nome);//atribuindo novo nome ao vetor
			} else if(aux==2) { //se 'aux==2' atualizar o ano de nascimento
				printf("Informe o novo ano de nascimento: ");//pedindo ao usuario digitar novo ano de nascimento
				scanf("%i", &cadastro[x].anoNasc);//atribuindo novo valor ao vetor
			}//se 'aux==2' atualizar o ano de nascimento
			//imprimindo os valores atualizados ao usuario
			printf("\nCADASTRO ATUALIZADO COM SUCESSO!!!***\n");//informando que o cadastro foi atualizado com sucesso
			printf("\nID de usuario: %i", cadastro[x].ID);//imprimindo informações cadastradas
			printf("\nNome de usuario: %s", cadastro[x].Nome);//imprimindo informações cadastradas
			printf("\nAno de nascimento: %i\n", cadastro[x].anoNasc);//imprimindo informações cadastradas
			printf("_________________________\n");//separador
			fun=101; //saindo do looping "atualizar usuario"
		}//atualizar usuario

		while(fun==3) { //funcao excluir usuario
			printf("_________________________\n");//separador
			printf("***EXCLUIR USUARIO***\n\n");//função 'excluir usuario'
			printf("Informe o ID do usuario a ser excluido: ");//solicitando o cadastro a ser excluid
			scanf("%i", &aux);//atribuindo valor a variavel auxiliar
			for(x=0; cadastro[x].ID!=aux; x++) { //looping para encontrar ID de usuario
				if(x>qtdCad) { //se 'x' maior que quantidade de usuario cadastrados
					printf("USUARIO NAO LOCALIZADO!!!\n");//informar que usuario nao foi localizado
				}//se 'x' maior que quantidade de usuario cadastrados
			}//looping para encontrar ID de usuario
			printf("***USUARIO LOCALIZADO***\n");//informando que o usuario nao foi localizado
			printf("\nID de usuario: %i", cadastro[x].ID);//imprimindo informações cadastradas
			printf("\nNome de usuario: %s", cadastro[x].Nome);//imprimindo informações cadastradas
			printf("\nAno de nascimento: %i\n\n", cadastro[x].anoNasc);//imprimindo informações cadastradas
			printf("CONFIRMAR EXCLUSAO?(SEUS DADOS NAO PODERAO MAIS SER RECUPERADOS)\n");//pedindo confirmao de exclusao para o usuario
			printf("1-SIM\n2-NAO\n");//informando opções
			scanf("%i", &aux);//designando valor a variavel auxiliar para analise de opção escolhida pelo usuario
			if(aux==1) {//se 'aux=1' confirmando esclusao
				cadastro[x].ativo=0;//designando que o cadastro foi desativado
				printf("***CADASTRO EXCLUIDO COM SUCESSO!!!***\n");//informando que o cadastro foi excluido comm sucesso
				printf("_________________________\n");//separador
				qtdCad=qtdCad-1;//diminuindo quantidade de usuarios cadsatrados
				break;//saindo do looping
			} else if(aux==2);//cancelando opção de exclusao
			printf("***OPERACAO CANCELADA!!!***\n");//informando que a operação foi cancelada
			printf("_________________________\n");//separador
			break;//saindo do looping de exclusao
		}//funcao excluir usuario

		while(fun==4) { //mostrando usuarios ativos cadastrados
			printf("_________________________\n");//separador
			printf("***LISTANDO USUARIOS***\n");//listando usuarios
			if(qtdCad==0) {
				printf("***NAO HA DADOS A SEREM EXIBIDOS***\n");
				printf("_________________________\n");//separador
				break;
			}else
			printf("Quantidade de usuarios cadastrados: %i\n\n", qtdCad);
			for(int x=0; x<=100; x++) {//looping para impressao na tela de usuarios cadastrados
				if(cadastro[x].ativo==1) {//se cadastro ativo, imprimesse na tela os usuarios
					printf("***DADOS DE USUARIO CADASTRADO***\n");//imprimindo informações cadastradas
					printf("\nID de usuario: %i", cadastro[x].ID);//imprimindo informações cadastradas
					printf("\nNome de usuario: %s", cadastro[x].Nome);//imprimindo informações cadastradas
					printf("\nAno de nascimento: %i\n\n", cadastro[x].anoNasc);//imprimindo informações cadastradas
					printf("_________________________\n");//separador
				}
			}//looping para impressao na tela de usuarios cadastrados
			break;//saindo do looping de 'mostrando usuarios ativos cadastrados'
		}//mostrando usuarios ativos cadastrados
	}//while do programa main
}//final da main
