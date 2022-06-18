#include <stdio.h>
int main(void)
{
    FILE *arq;
    char nome[10];

    printf("Qual o nome do arquivo que deja salvar?:\n ");
    setbuf(stdin, NULL);
    gets(nome);
    arq = fopen(nome, "w");
    if (arq == 0)
    {
        printf("FALHA NA ABERTURA DO ARQUIVO");
    }
    else
        printf("Arquivo gravado com sucesso!");
        fclose(arq);

    getchar;
    return 0;
}