#include <stdio.h>

// criação de estrutura
struct livros
{
    char nomeLivro[20];
    char autor[20];
    int qtdCap;
    int ID;
    struct livros *prox;
    struct livros *anterior;
};

// funções principais
int menu(int n1);
void criar(void);
void listarTopo(void);
void listarBase(void);

int qtdLivros = 0;
struct livros *topo;
struct livros *base;

// função main
int main()
{
    int op;

    while (op != 0)
    {
        op = menu(op);
        switch (op)
        {
        case 1:
            printf("\n### CADASTRAR NOVO LIVRO ###\n");
            criar();
            break;

        case 2:
            printf("\n### LISTAR CIMA -> BAIXO ###\n");
            listarTopo();
            break;

        case 3:
            printf("\n### LISTAR BAIXO -> CIMA ###\n");
            listarBase();
            break;

        default:
            printf("\n### OPCAO INVALIDA ###\n\n");
            break;
        }
    }
    printf("\n### SAIR ###\n");
    getchar();
    return 0;
}

// função menu
int menu(int n1)
{
    int op;
    printf("***MENU***\n");
    printf("Digite a opcao:\n0 - SAIR\n1 - ADICIONAR LIVROS\n2 - LISTAR DE CIMA -> BAIXO\n3 - LISTAR BAIXO -> CIMA\n>");
    scanf("%i", &op);

    return op;
}

// função criar livros
void criar(void)
{
    int id;
    struct livros *aux = (struct livros *)malloc(sizeof(struct livros));
    aux->prox = NULL;
    aux->anterior = NULL;
    printf("Informe o nome do livro:\n>");
    setbuf(stdin, NULL);
    gets(aux->nomeLivro);
    printf("Digite o nome do autor do livro:\n>");
    setbuf(stdin, NULL);
    gets(aux->autor);
    printf("Informe a quantidade de capitulos do livro:\n>");
    scanf("%i", &aux->qtdCap);

    if (qtdLivros == 0)
    {
        topo = aux;
        base = aux;
    }
    else
    {
        topo->anterior = aux;
        aux->prox = topo;
        topo = aux;
    }
    aux->ID = qtdLivros;
    qtdLivros = qtdLivros + 1;
    printf("\n### LIVRO CADASTRADO COM SUCESSO ###\n");
    return;
}

// função listar cima -> baixo
void listarTopo(void)
{
    if (qtdLivros == 0)
    {
        printf("\n###  NAO HA USUARIOS A SEREM EXIBIDOS ####\n\n");
        return;
    }
    else
    {
        struct livros *aux = topo;
        printf("\nQuantidade de livros cadastradas: %i\n\n", qtdLivros);
        while (aux != NULL)
        {
            printf("ID de cadastro: %i\n", aux->ID);
            printf("Nome do livro: %s\n", aux->nomeLivro);
            printf("Autor do livro: %s\n", aux->autor);
            printf("Quantidade de capitulos: %i\n", aux->qtdCap);
            printf("\n");
            aux = aux->prox;
        }
    }
    return;
}

// função listar baixo -> cima
void listarBase(void)
{
    if (qtdLivros == 0)
    {
        printf("\n###  NAO HA USUARIOS A SEREM EXIBIDOS ####\n\n");
        return;
    }
    else
    {
        struct livros *aux = base;
        printf("\nQuantidade de livros cadastradas: %i\n\n", qtdLivros);
        while (aux != NULL)
        {
            printf("ID de cadastro: %i\n", aux->ID);
            printf("Nome do livro: %s\n", aux->nomeLivro);
            printf("Autor do livro: %s\n", aux->autor);
            printf("Quantidade de capitulos: %i\n", aux->qtdCap);
            printf("\n");
            aux = aux->anterior;
        }
    }
    return;
}
