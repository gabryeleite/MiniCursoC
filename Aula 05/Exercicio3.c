// Faça um procedimento tipoTriangulo que recebe como parametro os tres lados de um triangulo
// e imprime o tipo dele (Equilatero: 3 lados iguais; Escaleno: 3 lados diferentes; Isosceles: 2 lados iguais)

#include <stdio.h>

void tipoTriangulo(float a, float b, float c) { // funcao do tipo void (nao tem retorno)
    if(a == b && b == c){ // se A for igual a B e B igual a C
        printf("Triangulo Equilatero\n"); // todos os lados iguais
    } else if(a != b && b != c && a != c){ // se A for diferente de B e B diferente de C e A diferente de C
        printf("Triangulo Escaleno\n"); // todos os lados diferentes
    } else { // senao
        printf("Triangulo Isosceles\n"); // se dois lados foram iguais
    }
}

int main()
{
    float a, b, c;

    printf("Digite os lados de um triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    tipoTriangulo(a, b, c); // chamada do procedimento tipoTriangulo
    // passando como parametro as variaveis reais a, b e c

    return 0;
}