#include <stdio.h>

void somarUm (int * pontVetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        pontVetor[i] = pontVetor[i] + 1;
        // ou
        // *(pontVetor + i) = *(pontVetor + i) + 1;
    }
}

int main()
{
    int vetorzinho[] = {4, 8, 12, 16};

    printf("\nVETOR ORIGINAL = %d %d %d %d\n",
        vetorzinho[0],
        vetorzinho[1],
        vetorzinho[2],
        vetorzinho[3]
    );

    int * pont = &vetorzinho[0];
    somarUm(pont, 4);

    printf("VETOR FINAL = %d %d %d %d\n",
        vetorzinho[0],
        vetorzinho[1],
        vetorzinho[2],
        vetorzinho[3]
    );




    return 0;
}