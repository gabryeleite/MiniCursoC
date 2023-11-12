// Exemplo de estrutura em C
#include <stdio.h>

typedef struct { // Estrutura Pessoa contendo os campos: idade(int), altura(float) e peso(float)
    int idade;
    float altura;
    float peso;
} Pessoa;

int main()
{
    Pessoa p1, p2; // Declarando duas variáveis do tipo Pessoa
    
    p1.idade = 42;
    p1.altura = 1.77;
    p1.peso = 70.5;

    p2.idade = 24;
    p2.altura = 1.60;
    p2.peso = 50.9;

    printf("Dados da Pessoa 1:\n");
    printf("Idade: %d anos\nAltura: %.2f metros\nPeso: %.2f Kg\n", p1.idade, p1.altura, p1.peso);

    printf("\nDados da Pessoa 2:\n");
    printf("Idade: %d anos\nAltura: %.2f metros\nPeso: %.2f Kg\n", p2.idade, p2.altura, p2.peso);

    return 0;
}