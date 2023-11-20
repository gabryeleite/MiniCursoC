// Faça uma função Potencia que recebe como parametro a base(float) e o expoente(int)
// e retorna a base elevado ao expoente

#include <stdio.h>

float Potencia(float base, int exp) { // funcao do tipo float (retorna um valor real) 
    float potencia = 1;               // e recebe como parametro um valor real e outro inteiro

    for(int i = 0; i < exp; i++) { // laço(for) até exp
        potencia *= base; // potencia = potencia * base
    } // resultado sera a base multiplicada por ela mesma 'exp' vezes
    return potencia; // retorna o valor da variavel real potencia
}

int main()
{
    float base, potencia;
    int expoente;

    printf("Digite um numero: ");
    scanf("%f", &base);

    printf("Digite o expoente (inteiro positivo): ");
    scanf("%d", &expoente);

    potencia = Potencia(base, expoente); // chamada da função POtencia passando como parametro as variaveis 
    // base(float) e expoente(real), retornando base elevado a expoente 

    printf("%.2f elevado a %d = %.2f\n", base, expoente, potencia);

    return 0;
}