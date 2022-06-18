#include <stdio.h>

int main()
{
    FILE *arq;
    char c;

    arq = fopen("musica.txt", "r");
    if (arq == NULL)
    {
        printf("ERRO NA ABERTURA DE ARQUIVO.");
        exit(1);
    }
    else
        printf("\n------LENDO E EXIBINDO ARQUIVO------\n\n");
    do
    {
        c = fgetc(arq);
        printf("%c", c);
    } while (c != EOF); //EOF=End of File
    fclose(arq);
    printf("\n");

    getchar;
    return 0;
}