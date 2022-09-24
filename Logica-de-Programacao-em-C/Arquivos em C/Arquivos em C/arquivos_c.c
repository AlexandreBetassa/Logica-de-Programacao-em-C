#include <stdio.h>
int main(void)
{

    FILE *arq;

    // abertura para criação de arquivo
    arq = fopen("Arquivo de teste.xls", "w");
    fclose(arq);
    printf("Arquivo criado com sucesso");

    getchar;
    return 0;
}