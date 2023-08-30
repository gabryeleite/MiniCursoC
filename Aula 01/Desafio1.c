#include <stdio.h>

int main()
{
    int duracao, horas, minutos, segundos;

    printf("Duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    minutos = (duracao / 60) - horas * 60;
    segundos = duracao - horas * 3600 - minutos * 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}