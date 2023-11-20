// Faça um procedimento Tabuada que recebe como parametro um valor N(int)
// e imprima a tabuada de N de 1 ate 10

#include <stdio.h>

void Tabuada(int n) { // funcao do tipo void (nao tem retorno)
    printf("Tabuada de %d\n", n);

    for(int i = 1; i <= 10; i++) { // laço(for) de 1 a 10 para a tabuada
        printf("%d x %d = %d\n", i, n, i * n); // "i vezes N = i * N"
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    Tabuada(num); // chamada do procedimento Tabuada passando como parametro a variavel inteira num

    return 0;
}