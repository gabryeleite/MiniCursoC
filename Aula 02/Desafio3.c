#include <stdio.h>

int main()
{
    float x, y;     //criando as coordenadas reais

    printf("Digite valor de X: ");  //lendo valor de X a e guardando na variável "x"
    scanf("%f", &x);
    printf("Digite valor de Y: ");  //lendo valor de Y a e guardando na variável "y"
    scanf("%f", &y);

    if(x == 0 && y == 0){   //Verificando se ambos os valores são zero (Origem)
        printf("Origem\n");
    }
    else if(x > 0 && y > 0){    //Se nao, verifica se X e Y são positivos (Primeiro quadrante)
        printf("Q1\n");
    }
    else if(x < 0 && y > 0){    //Se nao, verifica se X é negativo e Y positivo (Segundo quadrante)
        printf("Q2\n");
    }
    else if(x < 0 && y < 0){    //Se nao, verifica se X e Y são negativos (Terceiro quadrante)
        printf("Q3\n");
    }
    else{                       //Se nao, sobre apenas o quarto quadrante onde X é positivo e Y negativo
        printf("Q4\n");
    }

    return 0;
}