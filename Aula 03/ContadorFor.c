#include <stdio.h>

int main()
{
    int contador; //criando a variável inteira "contador"

    for(contador = 1; contador <= 10; contador++){ //"contador" recebe o valor 1, e será incrementado de 1 em 1,
        printf("%d\n", contador);                  //até chegar ao valor 10
    }
    //Ao final terá sido impresso na tela o contador de 1 até 10

    return 0;
}