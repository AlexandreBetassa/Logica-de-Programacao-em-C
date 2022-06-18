
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// w = abre em branco.
// a = abre pra adicionar.
// r = abre pra ler.
// wb = abre em branco.
// ab = abre pra adicionar.
// rb = abre pra ler.

// declaração de struct
struct Pessoa
{
    char nome[20];
    int id;
    int ano;
    int mes;
    int dia;
};

// funções principais
void cadastrar()
{
    FILE *arq = fopen("pessoas.bin", "ab");
    struct Pessoa pessoanova;
    printf("Digite seu nome: ");
    setbuf(stdin, NULL);
    gets(pessoanova.nome);
    printf("\nDigite o ano em que voce nasceu: ");
    scanf("%d", &pessoanova.ano);
    printf("\nDigite o mes em que voce nasceu: ");
    scanf("%d", &pessoanova.mes);
    printf("\nDigite o dia em que voce nasceu: ");
    scanf("%d", &pessoanova.dia);
    pessoanova.id = obterUltimoId();
    fwrite(&pessoanova, sizeof(pessoanova), 1, arq);
    fclose(arq);
}

void listar()
{
    FILE *arq = fopen("pessoas.bin", "rb");
    struct Pessoa pessoaLer;
    printf("\n\nLista de pessoas:\n");
    while (fread(&pessoaLer, sizeof(pessoaLer), 1, arq))
        printf("Nome: %s\nId = %d\nData nascimento = %d/%d/%d\n----\n", pessoaLer.nome, pessoaLer.id, pessoaLer.dia, pessoaLer.mes, pessoaLer.ano);
    fclose(arq);
}

void deletar()
{
    int idEscolhido;
    printf("\nDigite o id a ser deletado!.");
    scanf("%d", &idEscolhido);
    deletarPessoa(idEscolhido);
}

void deletarPessoa(int idEscolhido)
{
    FILE *arq = fopen("pessoas.bin", "rb");
    FILE *arqBackup = fopen("pessoas_backup.bin", "wb");
    struct Pessoa pessoaLer, pessoaNova;
    while (fread(&pessoaLer, sizeof(pessoaLer), 1, arq))
    {
        if (pessoaLer.id != idEscolhido)
        {
            for (int x = 0;x <= 20; x++)
            {
                pessoaNova.nome[x] = pessoaLer.nome[x];
            }
            pessoaNova.ano = pessoaLer.ano;
            pessoaNova.dia = pessoaLer.dia;
            pessoaNova.mes = pessoaLer.mes;
            pessoaNova.id = pessoaLer.id;
            fwrite(&pessoaNova, sizeof(pessoaNova), 1, arqBackup);
        }
    }
    fclose(arq);
    fclose(arqBackup);
    remove("pessoas.bin");
    rename("pessoas_backup.bin", "pessoas.bin");
}

void atualizar()
{
    int idEscolhido;
    printf("\nDigite o id a ser atualizado!.");
    scanf("%d", &idEscolhido);

    struct Pessoa pessoanova;
    printf("\nDigite o nome: ");
    setbuf(stdin,NULL);
    gets(pessoanova.nome);
    printf("\nDigite o ano em que voce nasceu: ");
    scanf("%d", &pessoanova.ano);
    printf("\nDigite o mes em que voce nasceu: ");
    scanf("%d", &pessoanova.mes);
    printf("\nDigite o dia em que voce nasceu: ");
    scanf("%d", &pessoanova.dia);
    pessoanova.id = idEscolhido;

    deletarPessoa(idEscolhido);
    FILE *arq = fopen("pessoas.bin", "ab");
    fwrite(&pessoanova, sizeof(pessoanova), 1, arq);
    fclose(arq);
}

void main()
{
    int opcao = 1;
    while (opcao != 0)
    {
        printf("\n1:cadastrar\n2:deletar\n3:atualizar\n4:listar\n0:sair\n>");
        scanf("%d", &opcao);
        if (opcao == 1)
            cadastrar();
        else if (opcao == 2)
            deletar();
        else if (opcao == 3)
            atualizar();
        else if (opcao == 4)
            listar();
    }
}

// funções auxiliares
int obterUltimoId()

{
    int ultimoId = 0;
    FILE *arq = fopen("pessoas.bin", "rb");
    struct Pessoa pessoaLer;
    while (fread(&pessoaLer, sizeof(pessoaLer), 1, arq))
        ultimoId = ultimoId < pessoaLer.id ? pessoaLer.id : ultimoId;
    fclose(arq);
    return ultimoId + 1;
}