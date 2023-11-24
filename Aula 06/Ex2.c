#include <stdio.h>

int obterQuadrado(int * a, int * b)
{
    int contA = *a;
    int contB = *b;
    int soma  = contA + contB;
    int quadrado = soma * soma;

    * a = contA * contA;
    * b = contB * contB;

    return quadrado;
}

int main()
{
    int valorA = 1;
    int valorB = 2;

    int * pontA = &valorA;
    int * pontB = &valorB;

    printf("\nORIGINAL: %d %d\n", valorA, valorB);

    int resultado = obterQuadrado(pontA, pontB);

    printf("NOVO: %d %d %d\n", valorA, valorB, resultado);

    return 0;
}