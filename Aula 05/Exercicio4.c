// Faça uma função Fatorial que recebe como parametro um valor n(int)
// e retorna o fatorial desse numero

#include <stdio.h>

int Fatorial(int n) { // funcao do tipo int (retorna um valor inteiro) e recebe como parametro o valor inteiro N
    int fatorial = 1; 

    for(int i = 1; i <= n; i++) { // laço(for) de 1 até N
        fatorial *= i; // fatorial = fatorial * i
    }
    return fatorial; // retorna o valor da variavel inteira fatorial
}

int main()
{
    int num, fatorial;

    printf("Digite um numero: ");
    scanf("%d", &num);

    fatorial = Fatorial(num); // chamada da função Fatorial passando como parametro a variavel inteira num
    // a variavel fatorial(int) recebe o retorno na função(int)

    printf("Fatorial de %d: %d\n", num, fatorial);

    return 0;
}