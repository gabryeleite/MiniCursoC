// Faça um programa que leia o nome(char), altura(float) e peso(float) de 3 atletas e os amerzene em uma struct,
// No final imprima o atleta mais alto e o mais pesado

#include <stdio.h>
#include <string.h>

typedef struct { // Estrutura Atleta contendo os campos: nome(char), altura(float) e peso(float)
    char nome[40];
    float altura;
    float peso;
} Atleta; 

int main()
{
    Atleta a[3]; // Declarando vetor do tipo Atleta de tamanho 3
    float maiorAltura, maiorPeso;
    char nomeAlto[40], nomePesado[40];

    for(int i = 0; i < 3; i++) { // Laço(for) 3 vezes para a leitura
        printf("Atleta %d:\n", i + 1); // Atleta 1, Atleta 2, Atleta 3

        printf("Digite o nome: ");
        scanf("%[^\n]", a[i].nome); // le o nome e armazena na estrutura Atleta de indice 'i'

        printf("Digite a altura(m): ");
        scanf("%f", &a[i].altura); // le a altura e armazena na estrutura Atleta de indice 'i'

        printf("Digite o peso (Kg): ");
        scanf("%f", &a[i].peso); // le o peso e armazena na estrutura Atleta de indice 'i'
        getchar();

        if(i == 0 || a[i].altura > maiorAltura) {
            maiorAltura = a[i].altura;
            strcpy(nomeAlto, a[i].nome);
        }
        if(i == 0 || a[i].peso > maiorPeso) {
            maiorPeso = a[i].peso;
            strcpy(nomePesado, a[i].nome);
        }
    }

    for(int i = 0; i < 3; i++) { // Laço(for) 3 vezes para a impressao
        printf("\nAtleta %d:\n", i + 1); // Atleta 1, Atleta 2, Atleta 3
        
        printf("Nome: %s\nAltura: %.2f metros\nPeso: %.2f Kg\n", a[i].nome, a[i].altura, a[i].peso);
        // Impressao do nome, altura e peso do Atleta na posição(indice) 'i'
    }

    printf("\nAtleta mais alto: %s com %.2f metros\n", nomeAlto, maiorAltura);
    printf("Atleta mais pesado: %s com %.2f Kg\n", nomePesado, maiorPeso);

    return 0;
}