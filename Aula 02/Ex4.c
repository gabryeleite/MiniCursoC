#include <stdio.h>

int main()
{
    int num1, num2, aux;    //criando as variáveis inteiras

    printf("Digite dois numeros inteiros: ");   //lendo dois valores inteiros e guardando
    scanf("%d%d", &num1, &num2);                //nas variaveis num1 e num2 respectivamente

    if(num1 < num2){    //Verificação se num1 é maior que num2, caso não seja faz a troca,
        aux = num2;     //já que o enunciado diz que os valores podem ser digitados em qualquer ordem
        num2 = num1;
        num1 = aux;
    }

    if(num1 % num2 == 0){   //Verifica se o resto da divisão de num1 por num2 é zero
        printf("Sao multiplos\n");  //Caso seja zero, imprime na tela "São múltiplos"
    }
    else{                           //Se não, imprime "Não são múltiplos"
        printf("Nao sao multiplos\n");
    }

    return 0;
}