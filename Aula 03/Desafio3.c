#include <stdio.h>

int main()
{
    int tamanho, soma = 0; //variáveis inteiras que representarão o tamanho do vetor e sua soma respectivamente

    printf("Quantos numeros serão digitados?: ");
    scanf("%d", &tamanho); //Lendo o tamanho do vetor e guardando na variável "tamanho"

    int vetor[tamanho]; //criando o vetor inteiro com tamanho "tamanho"

    for(int i = 0; i < tamanho; i++){ //Percorrendo o vetor começando em 0 e indo até o "tamanho" de 1 em 1;
        printf("Digite o %d.o valor: ", i + 1);
        scanf("%d", &vetor[i]); //armazenando o valor no vetor na posição "i"
        soma += vetor[i]; //A variável "soma" recebe o valor de "soma" + "vetor" na posição "i" (soma = soma + vetor[i])
    }

    printf("Valores digitados: "); 
    for(int i = 0; i < tamanho; i++){ //Percorrendo o vetor do mesmo modo que anteriormente
        printf("%d ", vetor[i]); //imprimindo na tela o valor do vetor na posição do contador "i"
    }
    printf("\nSoma = %d\n", soma); //Imprimindo na tela a soma dos valores do vetor
    printf("Media = %.2f\n", (float) soma / tamanho); //Imprimindo na tela a média dos valores do vetor 
                            //o (float) na frente serve de casting para garantir que nao seja uma divisão inteira

    return 0;
}