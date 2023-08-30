#include <stdio.h>

int main()
{
    int a, b, c, menor;     //criando as variáveis inteiras

    printf("Primeiro valor: "); 
    scanf("%d", &a);    //lendo o primeiro valor e guardando na variável "a"
    printf("Segundo valor: ");
    scanf("%d", &b);    //lendo o segundo valor e guardando na variável "b"
    printf("Terceiro valor: ");
    scanf("%d", &c);    //lendo o terceiro valor e guardando na variável "c"

    if(a < b && a < c){     //Testando se "a" é menor que as demais variáveis
        menor = a;          //Se for, a variável "menor" recebe o valor de "a"
    }
    else if(b < a && b < c){    //Caso "a" nao seja o menor, testaremos o "b"
        menor = b;              //Se for, a variável "menor" recebe o valor de "b"
    }
    else{                   //Caso "a" nem "b" sejam o menor valor, resta apenas o "c"
        menor = c;          //Entao, a variável "menor" recebe o valor de "c"
    }

    printf("Menor = %d\n", menor); //Imprimindo na tela o valor de "menor"

    return 0;
}