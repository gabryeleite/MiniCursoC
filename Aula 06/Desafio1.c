/*
    [DESAFIO 1]
    >>  Generalizar um código que antes tinha alocação estática de vetor

        Desenvolver um programa com mesmos propósitos do EXERCÍCIO 3, porém com tamanho de vetor e dados fornecidos pelo usuário,
        ou seja, utilizando alocação dinâmica do vetor.
*/

#include <stdio.h>
#include <stdlib.h> // Inclusão necessária para alocação dinâmica

int main()
{
    //////////////////////////////////////////////////////////////
    // [INÍCIO] Modificações realizadas comparado ao código de Ex3

    // Criação das variáveis e ponteiro para o vetor ainda não alocado
    int tamanho;
    int *vetor;

    // Requisição de entrada do tamanho do vetor
    printf("Digite a quantidade de itens:\n>> ");
    scanf("%d", &tamanho);

    // Alocação dinâmica do vetor para um vetor de inteiros com <tamanho> posições
    vetor = malloc(sizeof(int) * tamanho);

    // Requisição de entrada dos valores de cada posição do vetor
    printf("Digite os valores dos itens:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf(">> ");
        scanf("%d", &vetor[i]);
    }
    // [FIM] Modificações realizadas comparado ao código de Ex3
    ///////////////////////////////////////////////////////////




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