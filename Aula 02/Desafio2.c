#include <stdio.h>
#include <math.h> //Precisa desta biblioteca porque serão usados os comandos pow(elevado) e sqrt(raiz quadrada)

int main()
{
    double a, b, c, delta, x1, x2;  //Criando as variáveis reais com dupla precisão

    printf("Coeficiente a: ");  //lendo valor do coeficiente a e guardando na variável "a"
    scanf("%lf", &a);
    printf("Coeficiente b: ");  //lendo valor do coeficiente b e guardando na variável "b"
    scanf("%lf", &b);
    printf("Coeficiente c: ");  //lendo valor do coeficiente c e guardando na variável "c"
    scanf("%lf", &c);

    delta = (pow(b, 2) - 4 * a * c);    //calculando o valor de delta e guardando na variável "delta"

    if(delta < 0){                                       //Verificando se o delta é negativo
        printf("Esta equacao nao possui raizes reais");  //Caso seja, imprime na tela que nao possui raizes reais
    }
    else{                                       //Se nao, caso o delta nao seja negativo, faz a conta normalmente
        x1 = (double) (-b + sqrt(delta)) / (2 * a);
        x2 = (double) (-b - sqrt(delta)) / (2 * a);
        printf("X1 = %.4f\n", x1);  //Imprimindo na tela o valor de x1
        printf("X2 = %.4f\n", x2);  //Imprimindo na tela o valor de x2
    }

    return 0;
}