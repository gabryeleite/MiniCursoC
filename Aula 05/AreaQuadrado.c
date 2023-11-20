// Faça uma função areaQuadrado que recebe como parametro o lado(float)
// e retorna a area do quadrado (A = lado * lado)

#include <stdio.h>

float areaQuadrado(float l) { // funcao do tipo float (retorna um valor real)
    return (l *l); // recebe como parametro um valor real L e retorna a mutiplicação de L * L
}

int main()
{
    float lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = areaQuadrado(lado); // chamada da função areaQuadrado passando como parametro a variavel real lado
    // por se tratar de uma função com retorno (nao void) é necessário que uma variável receba esse retorno 
    // a variavel e o retorno devem ser do mesmo tipo

    printf("Area: %.2f\n", area);

    return 0;
}