#include <stdio.h>

int main()
{
    int tamanho; //variável inteira que representará o tamanho do vetor

    printf("Quantos numeros serão digitados?: ");
    scanf("%d", &tamanho); //Lendo o tamanho do vetor e guardando na variável "tamanho"

    int vetor[tamanho]; //criando o vetor inteiro com tamanho "tamanho"

    for(int i = 0; i < tamanho; i++){ //Percorrendo o vetor começando em 0 e indo até o "tamanho" de 1 em 1;
        printf("Digite o %d.o valor: ", i + 1);
        scanf("%d", &vetor[i]); //armazenando o valor no vetor na posição "i"
    }

    printf("Valores Negativos:\n");
    for(int i = 0; i < tamanho; i++){ //Percorrendo o vetor do mesmo modo que anteriormente
        if(vetor[i] < 0){ //Verifica se o valor do vetor na posição "i" é menor que zero, ou seja, negativo
            printf("%d\n", vetor[i]); //Caso seja, imprime na tela o valor
        }
    }

    return 0;
}