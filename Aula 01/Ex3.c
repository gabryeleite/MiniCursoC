#include <stdio.h>

int main()
{
    float largura, comprimento, valorm2, area, terreno;

    printf("Largura do terreno: ");
    scanf("%f", &largura);
    printf("Comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Valor do metro quadrado: ");
    scanf("%f", &valorm2);

    area = largura * comprimento;
    terreno = area * valorm2;

    printf("Area do terreno: %.2f\n", area);
    printf("Preco do terreno: %.2f\n", terreno);

    return 0;
}