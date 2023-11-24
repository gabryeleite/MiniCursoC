#include <stdio.h>

int multiplicaVetor(int * pont, int tamanho)
{
    int resultado = 1;
    for (int i = 0; i < tamanho; i++)
    {
        resultado = resultado * pont[i];
    }
    return resultado;
}

int main()
{
    int vetor[1000] = {3, 2, 3};
    int * pont = &vetor[0];

    int calculo = multiplicaVetor(pont, 3);
    printf("calculo = %d\n", calculo);

    return 0;
}