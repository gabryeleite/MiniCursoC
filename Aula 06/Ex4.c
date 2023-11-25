/*
    [EXERCÍCIO 4]
    >>  Uso de ponteiros para alocação dinâmica de variáveis e manipulações.

        Desenvolver um programa que leia do usuário valores, armazene num vetor de inteiros e faça manipulação do vetor alocado.
        O usuário fornecerá anteriormente quantos itens quer armazenar.
        --- Crie um ponteiro para o vetor e então leia do usuário qual será a quantidade de itens. Em seguida, faça
            a alocação deste vetor com tamanho exato para armazenar a dada quantidade de itens. Permita ao usuário
            fornecer os valores de cada item e os armazene sequencialmente no vetor alocado. Crie uma função
            "multiplicaPor2" que multiplica elemento a elemento do vetor por meio de ponteiro. Por fim, mostre ao usuário
            os valores que foram armazenados no vetor.
            OPCIONAL: crie uma função "imprimeVetor" que torne prático a impressão dos valores do vetor, também por meio de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h> // Biblioteca utilizada para fornecer a função malloc() para alocação dinâmica de memória

// Protótipos de função (útil para deixar o código mais organizado)
void multiplicaPor2 (int tamanho, int * vetor);
void imprimeVetor   (int tamanho, int * vetor);

int main()
{
    // Criação das variáveis e do ponteiro para o vetor.
    // Note que o vetor AINDA não foi alocado, pois não se sabe qual será seu tamanho.
    int * vetor;
    int tamanho;

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

    // Impressão dos valores originais lidos
    printf("\n[PRIMEIRA IMPRESSAO]\n{");
    imprimeVetor(tamanho, vetor);
    printf("}\n");

    // Manipulação dos valores com passagem do vetor por referência para função
    multiplicaPor2(tamanho, vetor);

    // Impressão dos valores manipulados
    printf("\n[SEGUNDA IMPRESSAO]\n{");
    imprimeVetor(tamanho, vetor);
    printf("}\n\n");

    return 0;
}

// Utilizando protótipos, podemos colocar a implementação das funções em posições quaisquer do código e chamá-las
// em qualquer ordem.
void multiplicaPor2 (int tamanho, int * vetor)
{
    for (int i = 0; i < tamanho; i++)
        *(vetor + i) = *(vetor + i) * 2;
}

void imprimeVetor (int tamanho, int * vetor)
{
    for (int i = 0; i < tamanho; i++)
        printf("%3d ", *(vetor + i));
}