#include <stdio.h>
#include <stdlib.h>

// declaração de struct
struct pessoa
{
    int ID;
    char nome[20];
    float tamanho;
    struct pessoa *prox;
    struct pessoa *anterior;
};

// funções
int menu(int n1);
void solicitar(struct pessoa *aux);
void cadastrar(void);
void atribuir(struct pessoa *aux);
void imprimir(struct pessoa *aux);
void listar(void);
void listarMaior(void);
void listarMenor(void);
void atualizar(void);
int verificarQtd(void);
void deletar(void);
void exclusao(struct pessoa *excluir);
struct pessoa *localizar(int *n1);
void reordenarLista(struct pessoa *aux);

// ponteiros
struct pessoa *primeiro = NULL;
struct pessoa *ultimo = NULL;

// variaveis globais
int qtdPessoa = 0;
int id = 0;

// função main
int main()
{
    int op;
    while (op != 0)
    {
        printf("V8\n");
        printf("### MENU ###\n");
        op = menu(op);
        switch (op)
        {
        case 1:
            printf("\n### CADASTRAR ###\n");
            cadastrar();
            break;

        case 2:
            printf("\n### LISTAR ###\n");
            listar();
            break;

        case 3:
            printf("\n### DELETAR ###\n");
            deletar();
            break;

        case 4:
            printf("\n### ATUALIZAR ###\n");
            atualizar();
            break;

        default:
            break;
        }
    }
    getchar();
    return 0;
}

// menu
int menu(int n1)
{
    int op;
    printf("0 - SAIR\n1 - CADASTRAR\n2 - LISTAR\n3 - DELETAR\n4 - ATUALIZAR\n>");
    scanf("%i", &op);
    return op;
}

// solicitar dados
void solicitar(struct pessoa *aux)
{
    printf("Digite o nome:\n>");
    setbuf(stdin, NULL);
    gets(aux->nome);
    printf("Informe sua altura:\n>");
    scanf("%f", &aux->tamanho);
}

// cadastrar
void cadastrar(void)
{
    struct pessoa *aux = (struct pessoa *)malloc(sizeof(struct pessoa));
    aux->prox = NULL;
    aux->anterior = NULL;
    solicitar(aux);
    atribuir(aux);
    aux->ID = id;
    id = id + 1;
    qtdPessoa = qtdPessoa + 1;
    printf("\n*** CADASTRO EFETUADO COM SUCESSO ***\n");
    imprimir(aux);
}

// atribuir fila
void atribuir(struct pessoa *aux)
{
    if (qtdPessoa == 0)
    {
        primeiro = aux;
    }
    else
    {
        reordenarLista(aux);
    }
}

// imprimir
void imprimir(struct pessoa *aux)
{
    printf("\nprimeiro %x", primeiro);
    printf("\nultimo %x", ultimo);

    printf("\nendereco %x", aux);
    printf("\nprox %x", aux->prox);
    printf("\nanterior %x", aux->anterior);
    printf("\n");
    printf("ID: %i\n", aux->ID);
    printf("Nome: %s\n", aux->nome);
    printf("Altura: %.2f mts\n\n", aux->tamanho);
    printf("\n");
}

// listar
void listar(void)
{
    if (verificarQtd() == 1)
    {
        int op;
        printf("1 - Listar MAIOR -> MENOR\n2 - Listar MENOR ->MAIOR\n>");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            printf("\nListar Maior -> Menor\n");
            listarMaior();
            break;

        case 2:
            printf("\nListar Menor -> Maior\n");
            listarMenor();
            break;

        default:
            printf("\nOPCAO INVALIDA\n");
            break;
        }
    }
}

// listar maior -> menor
void listarMaior(void)
{
    struct pessoa *aux = primeiro;
    while (aux != NULL)
    {
        imprimir(aux);
        aux = aux->prox;
    }
}

// listar menor->maior
void listarMenor(void)
{
    struct pessoa *aux = primeiro;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    struct pessoa *ultimo = aux;
    while (ultimo != NULL)
    {
        imprimir(ultimo);
        ultimo = ultimo->anterior;
    }
}

// deletar
void deletar(void)
{
    if (verificarQtd() == 1)
    {
        int op;
        int *id;
        struct pessoa *aux;
        printf("Digite o ID a ser deletado:\n>");
        scanf("%i", &id);
        aux = localizar(id);
        imprimir(aux);
        printf("Confirmar exclusao?\n1 - SIM\n2 - NAO\n>");
        scanf("%i", &op);
        if (op == 1)
        {
            exclusao(aux);
        }
        else
        {
            printf("\nOPERACAO CANCELADA PELO USUARIO\n");
        }
    }
}

// localizar usuario
struct pessoa *localizar(int *n1)
{
    struct pessoa *aux = primeiro;
    while (aux->ID != n1)
    {
        aux = aux->prox;
    }
    return aux;
}

// confirmar exlusao
void exclusao(struct pessoa *excluir)
{
    if (excluir == primeiro)
    {
        primeiro = excluir->prox;
        primeiro->anterior = NULL;
        free(excluir);
    }
    else if (excluir == ultimo)
    {
        ultimo = ultimo->anterior;
        ultimo->prox = NULL;
    }
    else
    {
        excluir->anterior->prox = excluir->prox;
        excluir->prox->anterior = excluir->anterior;
        qtdPessoa = qtdPessoa - 1;
    }
}

// atualizar usuario
void atualizar(void)
{
    if (verificarQtd() == 1)
    {
        int *id;
        struct pessoa *aux;
        printf("Digite o ID que deseja atualizar:\n>");
        scanf("%i", &id);
        aux = localizar(id);
        exclusao(aux);
        cadastrar();
    }
}

// verificacao de usuarios cadastrados
int verificarQtd(void)
{
    if (qtdPessoa == 0)
    {
        printf("\n*** NAO HA DADOS A SEREM EXIBIDOS OU ALTERADOS ***\n\n");
        return 0;
    }
    else
    {
        return 1;
    }
}

// reordenar fila
void reordenarLista(struct pessoa *aux)
{
    struct pessoa *analise = primeiro;
    struct pessoa *lista;

    //definindo ultimo
    while (analise->prox != NULL)
    {
        analise = analise->prox;
    }
    ultimo = analise;
    analise = primeiro;

    //caso aux maior que primeiro, aux vai para primeiro
    if (aux->tamanho > analise->tamanho)
    {
        aux->prox = primeiro;
        primeiro->anterior = aux;
        primeiro = aux;
    }
    //caso auxiliar menor que ultimo, aux vai para ultimo
    else if (aux->tamanho < ultimo->tamanho)
    {
        ultimo->prox = aux;
        aux->anterior = ultimo;
        ultimo = aux;
    }
    //para aux maior que item do meio da lista
    else
    {
        analise = primeiro;
        while (aux->tamanho < analise->tamanho)
        {
            analise = analise->prox;
        }
        lista = analise->anterior;
        if (lista->prox != NULL)
        {
            lista->prox = aux;
        }
        aux->anterior = lista;
        aux->prox = analise;
        analise->anterior = aux;
    }
}