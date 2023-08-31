#include <stdio.h>

int main()
{
    int contador = 1; //criando a variável inteira "contador" que já recebe o valor 1

    while(contador <= 10){ //Verifica se o valor do "contador" é menor ou igual a 10
        printf("%d\n", contador); //Caso seja, imprime na tela o valor do "contador"
        contador++;        //Incrementa 1 ao valor do "contador"
    }
    //Ao final terá sido impresso na tela o contador de 1 até 10

    return 0;
}