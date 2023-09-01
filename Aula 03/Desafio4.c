#include <stdio.h>

int main()
{
    int tamanho; //variável inteira que representará o tamanho do vetor
    int maior, posicao; //variáveis inteiras para guardar o maior valor do vetor e sua respectiva posição

    printf("Quantos numeros serão digitados?: ");
    scanf("%d", &tamanho); //Lendo o tamanho do vetor e guardando na variável "tamanho"

    int vetor[tamanho]; //criando o vetor inteiro com tamanho "tamanho"

    for(int i = 0; i < tamanho; i++){ //Percorrendo o vetor começando em 0 e indo até o "tamanho" de 1 em 1;
        printf("Digite o %d.o valor: ", i + 1);
        scanf("%d", &vetor[i]); //armazenando o valor no vetor na posição "i"

        if(i == 0 || vetor[i] > maior){ //Verifica se é a primeira vez ou se o valor de vetor[i] é maior que "maior"
            maior = vetor[i]; //Caso seja, "maior" recebe o valor do vetor na posição "i"
            posicao = i; //e a variável posição recebe o valor "i"
        }
    }
    //É importante fazer a verificação se é a primeira vez porque a variável "maior" ainda não possui nenhum valor armazenado

    printf("Maior: %d\nPosicao: %d\n", maior, posicao); //Imprime na tela o maior valor encontrado no vetor e sua respectiva posição

    return 0;
}