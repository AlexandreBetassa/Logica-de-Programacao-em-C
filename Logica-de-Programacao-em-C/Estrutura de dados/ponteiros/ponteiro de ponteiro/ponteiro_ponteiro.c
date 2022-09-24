#include <stdio.h>

int main(void)
{

    int x = 10;
    int *ptrx = &x;
    int **pptrx = &ptrx;

    printf("o valor de x e: %i\n", x);
    printf("O valor de x em ptrx e: %i\n", *ptrx);
    printf("O valor de x em pptrx e: %i\n", **pptrx);
}