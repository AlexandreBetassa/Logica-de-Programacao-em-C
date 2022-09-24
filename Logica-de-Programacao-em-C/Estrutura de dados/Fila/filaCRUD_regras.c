#include <stdio.h>
// declaracao da struct
struct carros
{
    char marca[20];
    char modelo[20];
    int id;
    int ano;
    char cor[10];
    struct carros *prox;
    struct carros *anterior;
};

// funções
int menu(int n1);
void cadastrar(void);
void solicitar(struct carros *aux);
void atribuirFila(struct carros *aux);
void imprimir(struct carros *aux);
void listar(void);
void atualizar(void);
void localizar(int n1);
void delete (void);
void exclusao(struct carros *aux);
int verificarQTDcarros(void);
int verificarID(int n1);

// ponteiros
struct carros *primeiro = NULL;
struct carros *ultimo = NULL;

// variaveis
int qtdCarros = 0;

int main()
{
    int op;

    while (op != 0)
    {
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
            printf("### ATUALIZAR ###\n");
            atualizar();
            break;

        case 4:
            printf("### DELETE ###\n");
            delete ();
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
    printf("### MENU ###\n");
    printf("INFORME A OPCAO:\n0 - Sair\n1 - Novo Cadastro\n2 - Listar\n3 - Atualizar\n4 - Delete\n>");
    scanf("%i", &op);
    return op;
}

// cadastrar
void cadastrar(void)
{
    if (qtdCarros == 10)
    {
        printf("\nNao existe espaco para novos carros\n\n");
    }
    else
    {
        struct carros *aux = (struct carros *)malloc(sizeof(struct carros));
        aux->anterior = NULL;
        aux->prox = NULL;
        solicitar(aux);
        atribuirFila(aux);
        printf("\n### CADASTRO EFETUADO COM SUCESSO ###\n");
        aux->id = qtdCarros;
        qtdCarros = qtdCarros + 1;
        imprimir(aux);
    }
}

// solicitar dados
void solicitar(struct carros *aux)
{
    printf("Informe a marca do carro:\n>");
    setbuf(stdin, NULL);
    gets(aux->marca);
    printf("Informe o modelo:\n>");
    setbuf(stdin, NULL);
    gets(aux->modelo);
    printf("Informe a cor:\n>");
    setbuf(stdin, NULL);
    gets(aux->cor);
    printf("Informe o ano:\n>");
    scanf("%i", &aux->ano);

    return aux;
}

// atribuir fila
void atribuirFila(struct carros *aux)
{
    if (qtdCarros == 0)
    {
        primeiro = aux;
        ultimo = aux;
    }
    else
    {
        ultimo->anterior = aux;
        aux->prox = ultimo;
        ultimo = aux;
    }
}

// imprimir dados
void imprimir(struct carros *aux)
{
    printf("ID: %i\n", aux->id);
    printf("Marca: %s\n", aux->marca);
    printf("Modelo: %s\n", aux->modelo);
    printf("Ano: %i\n", aux->ano);
    printf("Cor: %s\n", aux->cor);
    printf("\n");
}

// listar
void listar(void)
{
    verificarQTDcarros();
    struct carros *aux = ultimo;
    printf("\nQUANTIDADE DE CARROS CADASTRADOS: %i\n\n", qtdCarros);
    while (aux != NULL)
    {
        imprimir(aux);
        aux = aux->prox;
    }
}

// atualizar
void atualizar(void)
{

    if (verificarQTDcarros() == 1)
    {
        int id;
        printf("Informe o ID que deseja atualizar:\n>");
        scanf("%i", &id);
        localizar(id);
    }
}

// localizar
void localizar(int n1)
{
    struct carros *aux = ultimo;
    if (verificarQTDcarros() == 1)
    {
        while (aux->id != n1)
        {
            aux = aux->prox;
        }
        if (aux->id == n1)
        {
            solicitar(aux);
        }
    }
    printf("\n*** DADOS ATUALIZADOS COM SUCESSO ***\n");
    imprimir(aux);
}

// verificar qtd carros
int verificarQTDcarros(void)
{
    if (qtdCarros == 0)
    {
        printf("\nNao ha dados a serem exibidos ou alterados\n\n");
        return 0;
    }
    else
    {
        return 1;
    }
}

// confirmar exclusao
void delete (void)
{
    if (verificarQTDcarros() == 1)
    {
        struct carros *aux = primeiro;
        int op;
        imprimir(aux);
        printf("tem certeza que deseja excluir o primeiro item da fila:\n1 - SIM\n2 - NAO\n>");
        scanf("%i", &op);
        if (op == 1)
        {
            exclusao(aux);
            printf("\nEXCLUSAO EFETUADA COM SUCESSO\n");
        }
        else
        {
            printf("\nOPERACAO CANCELADA PELO USUARIO\n");
        }
    }
}

// excluir
void exclusao(struct carros *aux)
{
    primeiro = aux->anterior;
    if (primeiro != NULL)
    {
        primeiro->prox = NULL;
    }
    else
    {
        primeiro = NULL;
        ultimo = NULL;
    }
    free(aux);
    listar();
    qtdCarros = qtdCarros - 1;
}