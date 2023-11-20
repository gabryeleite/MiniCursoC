// Faça uma função Delta que recebe como parametro os valores a, b e c 
// de um equação quadratica e retorna o valor delta (delta = b^2 - 4*a*c)

#include <stdio.h>

float Delta(float a, float b, float c) { // funcao do tipo float (retorna um valor real)
    return (b * b - 4 * a * c); // recebe como parametro os valores reais a, b e c
} // retorna b^2 - 4 * a * c

int main()
{
    float a, b, c, delta;

    printf("Digite os valores a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = Delta(a, b, c); // chamada da função Delta passando como parametro as variaveis reais a, b e c
    // a variavel delta(float) recebe o retorno na função(float)

    printf("Delta: %.2f\n", delta);

    return 0;
}