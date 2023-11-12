// Exemplo de vetor de estrutura em C 
#include <stdio.h>

typedef struct { // Estrutura Pessoa contendo os campos: idade(int) e altura(float) 
    int idade;
    float altura;
} Pessoa;

int main()
{
    Pessoa p[4]; // Declarando vetor do tipo Pessoa de tamanho 4
    
    for(int i = 0; i < 4; i++) { // Laço(for) 4 vezes para a leitura
        printf("Pessoa %d:\n", i + 1); // Pessoa 1, Pessoa 2, Pessoa 3, ...

        printf("Digite idade: ");
        scanf("%d", &p[i].idade); // le a idade e armazena na estrutura Pessoa de indice 'i'

        printf("Digite altura: ");
        scanf("%f", &p[i].altura); // le a altura e armazena na estrutura Pessoa de indice 'i'
    }

    for(int i = 0; i < 4; i++) { // Laço(for) 4 vezes para a impressao
        printf("\nDados da %d.a pessoa:\n", i + 1); // Dados da 1.a pessoa, Dados da 2.a pessoa, ...

        printf("Idade: %d anos\nAltura: %.2f metros\n", p[i].idade, p[i].altura);
        // Impressao da idade e a da altura da Pessoa na posição(indice) 'i'
    }

    return 0;
}