/*
    [EXERCÍCIO 3]
    >>  Uso de ponteiros para manipular vetores por meio de aritmética

        Desenvolver um programa que manipule vetores somente por meio de ponteiros. Investigue seu comportamento.
        --- Crie um vetor de inteiros e insira valores quaisquer manualmente. Em seguida, crie um ponteiro e o associe à
            referência do vetor. Agora, por meio do ponteiro criado, percorra o vetor somando o valor inteiro 1 a cada
            elemento. Em seguida, ao invés de utilizar o ponteiro criado, realize o processo contrário (subtrair 1), mas
            utilizando a variável que armazena o vetor "como se fosse" um ponteiro. Houve algum resultado inesperado?
            Mostre todos os valores do valor em cada etapa de manipulação.
*/

#include <stdio.h>

int main()
{
    // Criação das variáveis e definição de valores ao vetor
    int tamanho = 4;
    int vetor[] = {4, 8, 12, 16};

    // Criação do ponteiro e associação por referência
    int * ponteiro = &vetor[0];

    // Impressão dos valores originais
    printf("\n[PRIMEIRA IMPRESSAO]\n{");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%3d ", vetor[i]);
    }
    printf("}\n");

    // Manipulação do vetor somando uma unidade utilizando referências com ponteiros
    for (int i = 0; i < tamanho; i++)
    {
        *(ponteiro + i) = *(ponteiro + i) + 1;
    }

    // Impressão dos valores do vetor após primeira manipulação
    printf("\n[SEGUNDA IMPRESSAO]\n{");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%3d ", vetor[i]);
    }
    printf("}\n");

    // Manipulação do vetor subtraindo uma unidade utilizando a variável vetor como um ponteiro
    for (int i = 0; i < tamanho; i++)
    {
        *(vetor + i) = *(vetor + i) - 1;
    }

    // Impressão dos valores do vetor após segunda manipulação
    printf("\n[TERCEIRA IMPRESSAO]\n{");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%3d ", vetor[i]);
    }
    printf("}\n\n");

    return 0;
}