#include <stdio.h>
#include <stdlib.h>

struct livro
{
    char titulo[20];
    int paginas;
    float valor;
    struct livro *prox;
};

// variaveis globais
int qtdLivroCad = 0;
struct livro *topo = NULL;

// declaração de funções
void cadastrar(void); // função cadastrar livro
void listar(void);    // função listar
int menu(int n1);

// função principal
int main()
{
    int op;
    do
    {

        op = menu(op);
        switch (op)
        {

        case 0:
            break;

        case 1:
            cadastrar();
            break;

        case 2:
            listar();
            break;

        default:
            printf("\nOPERACAO INVALIDA!!!\n");
            menu(op);
        }
    } while (op != 0);
    printf("\n***SAIR***\n");
    getchar();
    return 0;
}
int menu(int n1)
{
    int op;
    printf("\nSelecione a opcao desejada:\n0 - SAIR\n1 - CADASTRAR\n2 - lISTAR\n> ");
    scanf("%i", &op);
    return op;
}

void cadastrar(void) // função cadastrar
{
    printf("\n***CADASTRAR***\n");
    struct livro *aux = (struct livro *)malloc(sizeof(struct livro)); // alocacao de memoria
    printf("Digite o nome do livro: ");
    setbuf(stdin, NULL);
    gets(aux->titulo);
    printf("Digite a quantidade de paginas: ");
    scanf("%i", &aux->paginas);
    printf("Qual o valor do livro: R$");
    scanf("%f", &aux->valor);

    if (qtdLivroCad == 0)
    {
        topo = aux;
    }
    else
    {
        aux->prox = topo;
        topo = aux;
    }
    qtdLivroCad = qtdLivroCad + 1;
    printf("\nLIVRO INSERIDO COM SUCESSO!!!\n ");
    return;
}

void listar(void) // função listar
{
    if (qtdLivroCad == 0)
    {
        printf("Nao ha livros cadastrados!!!");
    }
    printf("\n***LISTAR***\n");
    printf("Quantidade de livros cadastrados: %i\n\n", qtdLivroCad);
    struct livro *aux = topo;
    while (aux != NULL)
    {
        printf("Nome do livro: %s\n", aux->titulo);
        printf("Quantidade de paginas do livro: %i\n", aux->paginas);
        printf("Valor do livro: R$ %.2f\n\n", aux->valor);
        aux = aux->prox;
    }
    return;
}