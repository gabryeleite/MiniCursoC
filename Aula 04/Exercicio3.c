// Faça um programa que leia o nome(char) e duas notas(float) de um aluno e os amerzene em uma struct,
// Calcule a media(float) das notas e armazene-a na estrutura também

#include <stdio.h>

typedef struct { // Estrutura Aluno contendo os campos: nome(char), nota1(float), nota2(float) e media(float)
    char nome[40];
    float nota1, nota2;
    float media;
} Aluno; 

int main()
{
    Aluno aluno; // declarando uma variavel do tipo Aluno

    printf("Digite o nome: ");
    scanf("%[^\n]", aluno.nome); // lendo o nome do aluno e armazenando na estrutura

    printf("Digite as duas notas: ");
    scanf("%f %f", &aluno.nota1, &aluno.nota2); // lendo as notas do aluno e armazenando na estrutura

    aluno.media = (aluno.nota1 + aluno.nota2) / 2.0; // calculando a media e armazenando na estrutura

    printf("Media de %s: %.2f\n", aluno.nome, aluno.media); // imprimindo o nome e a media do aluno

    return 0;
}