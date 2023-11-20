// Faça um procedimento Paridade que recebe como parametro um valor N(int)
// e imprima se N eh par ou impar

#include <stdio.h>

void Paridade(int n) { // funcao do tipo void (nao tem retorno)
    // recebe como parametro um valor inteiro N            
    if(n % 2 == 0) { // verifica se o resto da divisao de N por 2 é igual a 0
        printf("%d eh par\n", n);
    } else {
        printf("%d eh impar\n", n);
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    Paridade(num); // chamada do procedimento Paridade passando como parametro a variavel inteira num

    return 0;
}