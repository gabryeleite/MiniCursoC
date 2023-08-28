#include <stdio.h>
#include <math.h>

int main()
{
    float base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%f", &base);
    printf("Altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("Area = %.4f\n", area);
    printf("Perimetro = %.4f\n", perimetro);
    printf("Diagonal = %.4f\n", diagonal);

    return 0;
}