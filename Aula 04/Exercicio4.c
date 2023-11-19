// Faça um programa que leia o nome(char) e duas notas(float) de 3 alunos e os amerzene em uma struct,
// No final imprima o nome e a media de cada aluno (a media também deve ser armazenada na estrutura)

#include <stdio.h>

typedef struct { // Estrutura Aluno contendo os campos: nome(char), nota1(float), nota2(float) e media(float)
    char nome[40];
    float nota1, nota2;
    float media;
} Aluno; 

int main()
{
    Aluno a[3]; // Declarando vetor do tipo Aluno de tamanho 3

    for(int i = 0; i < 3; i++) { // Laço(for) 3 vezes para a leitura
        printf("Aluno %d:\n", i + 1); // Aluno 1, Aluno 2, Aluno 3

        printf("Digite o nome: ");
        scanf("%[^\n]", a[i].nome); // le o nome e armazena na estrutura Aluno de indice 'i'

        printf("Digite as duas notas: ");
        scanf("%f %f", &a[i].nota1, &a[i].nota2); // le as notas e armazena na estrutura Aluno de indice 'i'

        a[i].media = (a[i].nota1 + a[i].nota2) / 2.0; // calcula a media e armazena na estrutura Aluno de indice 'i'
    }

    for(int i = 0; i < 3; i++) { // Laço(for) 3 vezes para a impressao
        printf("\nAluno %d:\n", i + 1); // Aluno 1, Aluno 2, Aluno 3
        
        printf("Nome: %s\nMedia: %.2f", a[i].nome, a[i].media);
        // Impressao do nome e a da media do Aluno na posição(indice) 'i'
    }

    return 0;
}
