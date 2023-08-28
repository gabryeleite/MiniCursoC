#include <stdio.h>

int main()
{
    int x, y, soma;

    printf("Valor de X: ");
    scanf("%d", &x);
    printf("Valor de Y: ");
    scanf("%d", &y);

    soma = x + y;
    printf("Soma = %d\n", soma);

    return 0;
}