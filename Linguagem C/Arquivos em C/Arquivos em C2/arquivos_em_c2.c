#include <stdio.h>

int main(void)
{
    FILE *arq;

    arq = fopen("Arquivo de 0 a 1000", "w");
    if (arq == NULL)
    {
        printf("Falha na abertura do arquivo.!!!");
        exit(1);
    }
    else
        for (int x = 0; x < 1001; x++)
        {
            fprintf(arq, "Frase %i\n", x);
        }

    fclose(arq);
    printf("\nArquivo gravado com sucesso!!!\n");

    getchar;
    return 0;
}