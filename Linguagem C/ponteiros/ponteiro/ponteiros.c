#include <stdio.h>

int main(void)
{
    int x = 10;
    int *ptrx = &x;

    printf("O valor de x e: %i\n", *ptrx);
    printf("O endereco de memoria utilizado e: %x\n", &ptrx);

    getchar();
    return 0;
}