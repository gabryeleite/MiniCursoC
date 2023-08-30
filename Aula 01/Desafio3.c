#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio, 2);

    printf("Area = %.3f\n", area);

    return 0;
}