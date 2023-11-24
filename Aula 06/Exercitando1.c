#include <stdio.h>

float divide(int * a, int * b)
{
    return (float) (*a) / (*b);
}

int main()
{
    int valorA = 6;
    int valorB = 3;

    int * pontA = &valorA;
    int * pontB = &valorB;

    float resultado = divide(pontA, pontB);
    printf("Resultado = %.2f\n", resultado);

    return 0;
}