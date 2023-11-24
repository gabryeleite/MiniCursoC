#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int * ponteiro;
    ponteiro = malloc(sizeof(int) * tamanho);
    // ou
    // int vetor[tamanho];

    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &ponteiro[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%3d ", ponteiro[i]);
    }

    return 0;
}