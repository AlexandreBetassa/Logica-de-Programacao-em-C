#include <stdio.h>

// declaração de struct
struct livros
{
    int ID;
    char nome[20];
    int qtdPag;
    char favorito;
    struct livros *prox;
};

// declaração das funções principais
int menu(int n1);                       // função menu principal de opções
void solicitar(void);                   // função de novo cadastro
void cadastrar(struct livros *aux);     // solicitar dados do livro enquanto cadastro
void atribuirPilha(struct livros *aux); // atribuir pilha
int menuListar(int n1);                 // menu de listagens
void listar(void);                      // função de listagem
void maisPag(void);                     // função listar mais páginas
void menosPag(void);                    // função listar menos páginas
void favorito(void);                    // listar favorito
void totalPage(void);                   // imprimir total de paginas informada

// declaração de variaveis globais
int qtdLivros = 0;
int maiorQtdpag;
int menorQtdpag;
int totalPag = 0;

struct livros *topo = NULL;

int main()
{
    int op;

    while (op != 0)
    {
        op = menu(op);
        switch (op)
        {
        case 1:
            printf("\n### SOLICITAR ###\n");
            solicitar();
            break;

        case 2:
            printf("\n### LISTAR ###\n");
            listar();
            break;

            if (op < 0 || op > 3)
            {
                printf("\nOPCAO INVALIDA\n");
                break;
            }
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

    printf("\nDigite a opcao desejada:\n0 - Sair\n1 - Cadastrar novo livro\n2 - Listar\n>");
    scanf("%i", &op);
    return op;
}

// cadastrar informações do livro
void cadastrar(struct livros *aux)
{
    printf("Digite o nome do livro:\n>");
    setbuf(stdin, NULL);
    gets(aux->nome);
    printf("Informe a quantidade de paginas:\n>");
    scanf("%i", &aux->qtdPag);
    printf("Marcar como favorito?\nS - Sim\nN - Nao\n>");
    setbuf(stdin, NULL);
    scanf("%c", &aux->favorito);

    return aux;
}

// organizar e realizar verificações da pilha
void atribuirPilha(struct livros *aux)
{

    if (qtdLivros == 0)
    {
        topo = aux;
        maiorQtdpag = aux->qtdPag;
        menorQtdpag = aux->qtdPag;
        totalPag = aux->qtdPag;
    }
    else
    {
        aux->prox = topo;
        topo = aux;

        totalPag = totalPag + aux->qtdPag;

        if (aux->qtdPag > maiorQtdpag)
        {
            maiorQtdpag = aux->qtdPag;
        }
        else if (aux->qtdPag < menorQtdpag)
        {
            menorQtdpag = aux->qtdPag;
        }
    }
    aux->ID = qtdLivros;
    qtdLivros = qtdLivros + 1;
}

// função solicitar
void solicitar(void)
{
    struct livros *aux = (struct livros *)malloc(sizeof(struct livros));
    aux->prox = NULL;
    cadastrar(aux);
    atribuirPilha(aux);

    printf("\n### CADASTRO EFETUADO COM SUCESSO ###");
    return;
}

// listar pilha
void listar(void)
{
    int op;
    op = menuListar(op);
    switch (op)
    {
    case 1:
        printf("\n### LISTAR PILHA COMPLETA ###\n");
        listarPilha();
        break;

    case 2:
        printf("\n### LISTAR LIVRO COM  MAIS PAGINAS ###\n");
        maisPag();
        break;

    case 3:
        printf("\n### LISTAR LIVRO COM MENOS PAGINAS ###\n");
        menosPag();
        break;

    case 4:
        printf("\n### LISTAR LIVROS FAVORITOS ###\n");
        favorito();
        break;

    case 5:
        printf("\n### TOTAL DE PAGINAS ###\n");
        totalPage();
        break;
    }

    return;
}

// menu listar
int menuListar(int n1)
{
    int op;
    printf("\nO QUE DESEJA LISTAR?\n");
    printf("1 - Listar pilha completa\n");
    printf("2 - Livro com mais paginas\n");
    printf("3 - Livro com menos paginas\n");
    printf("4 - Listar livros favoritos\n");
    printf("5 - Total de paginas cadastradas\n>");
    scanf("%i", &op);
    return op;
}

// listar pilha completa
void listarPilha(void)
{
    if (qtdLivros == 0)
    {
        printf("\n### NAO HA DADOS A SEREM EXIBIDOS ###\n");
        return;
    }
    struct livros *aux = topo;
    while (aux != NULL)
    {
        printf("ID do livro: %i", aux->ID);
        printf("\nNome do livro: %s", aux->nome);
        printf("\nQuantidade de paginas: %i\n", aux->qtdPag);
        printf("Favorito: %c\n", aux->favorito);
        printf("\n");
        aux = aux->prox;
    }
    return;
}

// listar livros com mais paginas
void maisPag(void)
{
    if (qtdLivros == 0)
    {
        printf("\n### NAO HA DADOS A SEREM EXIBIDOS ###\n");
        return;
    }
    else
    {
        struct livros *aux = topo;
        while (aux->qtdPag != maiorQtdpag)
        {
            aux = aux->prox;
        }
        if (aux->qtdPag == maiorQtdpag)
        {
            printf("\nO livro com maior quantidade de paginas e: %s\n", aux->nome);
            printf("Quantidade de paginas: %i\n", aux->qtdPag);
            printf("ID do livro: %i\n", aux->ID);
        }
    }
}

// listar livros com mais paginas
void menosPag(void)
{
    if (qtdLivros == 0)
    {
        printf("\n### NAO HA DADOS A SEREM EXIBIDOS ###\n");
        return;
    }
    else
    {
        struct livros *aux = topo;
        while (aux->qtdPag != menorQtdpag)
        {
            aux = aux->prox;
        }
        if (aux->qtdPag == menorQtdpag)
        {
            printf("\nO livro com menor quantidade de paginas e: %s\n", aux->nome);
            printf("Quantidade de paginas: %i\n", aux->qtdPag);
            printf("ID do livro: %i\n", aux->ID);
        }
    }
}

// listar total de paginas
void totalPage(void)
{
    printf("Total de paginas informadas: %i", totalPag);
    printf("\n");
    return;
}

// função listar favoritos
void favorito(void)
{
    if (qtdLivros == 0)
    {
        printf("\n### NAO HA DADOS A SEREM EXIBIDOS ###\n");
        return;
    }
    else
    {
        struct livros *aux = topo;
        while (aux != NULL)
        {
            if (aux->favorito == 's' || aux->favorito == 'S')
            {
                printf("ID do livro favorito: %i\n", aux->ID);
                printf("Titulo do livro favorito: %s\n", aux->nome);
                printf("Quantidade de paginas: %i\n", aux->qtdPag);
                printf("\n");
            }
            aux = aux->prox;
        }
    }
    return;
}