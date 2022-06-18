#include <stdio.h>

// declaração de struct
struct pessoa
{
    int ID;
    char nome[20];
    int idade;
    float peso;
    struct pessoa *prox;
};

// prototipo de funções principais
int menu(int n1);     // seleção de opções
void cadastrar(void); // cadastrar novo usuário
void listar(void);    // listar usuario
void atualizar(void); // atualizar usuario

// prototipos de funções auxiliares
struct pessoa *localizar(int n1);
struct pessoa *refreshCad(int n1);

// variaveis globais
int qtdPessoa = 0;

// struct pessoa prox = NULL;
struct pessoa *topo = NULL;

int main() // função principal
{
    int op;
    do
    {
        op = menu(op);
        switch (op)
        {
        case 1:
            printf("\nCADASTRAR\n");
            cadastrar();
            break;
        case 2:
            printf("\nATUALIZAR\n");
            atualizar();
            break;
        case 3:
            printf("\nLISTAR\n");
            listar();
            break;

            if (menu(op) < 0 || menu(op) > 3)
            {
                printf("*********OPCAO INVALIDA*******\n");
                menu(op);
                break;
            }
        }
    } while (op != 0);
    printf("\n***SAIR***\n");
}

int menu(int n1) // função menu
{
    int op;
    printf("Escolha a opcao desejada:\n0-SAIR\n1-CADASTRAR\n2-ATUALIZAR\n3-LISTAR\n> ");
    scanf("%i", &op);
    return op;
}

void cadastrar(void) // função cadastrar novo usuario
{
    struct pessoa *aux = (struct pessoa *)malloc(sizeof(struct pessoa)); // alocacao de memoria
    aux->prox = NULL;
    printf("Digite o seu nome: ");
    setbuf(stdin, NULL);
    gets(aux->nome);
    printf("Digite sua idade: ");
    scanf("%i", &aux->idade);
    printf("Informe seu peso: ");
    scanf("%f", &aux->peso);
    aux->ID = qtdPessoa;
    if (qtdPessoa == 0)
    {
        topo = aux;
    }
    else
    {
        aux->prox = topo;
        topo = aux;
    }
    printf("\nUSUARIO CADASTRADO COM SUCESSO\n\n");
    qtdPessoa = qtdPessoa + 1;
    return;
}

void listar(void) // função listar usuarios
{
    if (qtdPessoa == 0)
    {
        printf("NAO HA PESSOAS PARA LISTAR\n\n");
        return;
    }
    else
        printf("\nQUANTIDADE DE CADASTROS: %i\n", qtdPessoa);
    struct pessoa *aux = topo;
    while (aux != NULL)
    {
        printf("\nID: %i", aux->ID);
        printf("\nNome: %s", aux->nome);
        printf("\nIdade: %i", aux->idade);
        printf("\nPeso: %.2fKg\n\n", aux->peso);
        aux = aux->prox;
    }
    printf("\n***********FIM***********\n\n");
    return;
}

void atualizar(void) // função atualizar
{

    int id;
    if (qtdPessoa == 0)
    {
        printf("\n********NAO HA CADASTROS A SEREM ATUALIZADOS********\n\n");
        return;
    }
    else
    {
        printf("\nInforme o ID que deseja atualizar: ");
        scanf("%i", &id);
        struct pessoa *aux = localizar(id);
        refreshCad(aux);
        printf("\nATUALIZACAO EFETUADA COM SUCESSO\n\n");
    }
    return;
}

struct pessoa *localizar(int n1) // função auxiliar localizar
{
    struct pessoa *aux = topo;
    while (aux->ID != n1)
    {
        aux = aux->prox;
    }
    return aux;
}

struct pessoa *refreshCad(int n1) // função para inserção dos dados de atualização do usuario
{
    struct pessoa *aux = n1;
    printf("Digite o seu nome: ");
    setbuf(stdin, NULL);
    gets(aux->nome);
    printf("Digite sua idade: ");
    scanf("%i", &aux->idade);
    printf("Informe seu peso: ");
    scanf("%f", &aux->peso);
    return;
}
