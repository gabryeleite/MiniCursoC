#include <stdio.h>

int main()
{
    int minutos, excedido;      //criando as variáveis inteiras
    float pagamento;        //criando variável do tipo real

    printf("Quantidade de minutos: ");
    scanf("%d", &minutos);    //lendo o tempo em minutos e guardando na variável "minutos"

    if(minutos <= 100){    //Se a quantidade de minutos for menor ou igual a 100, o pagamento será fixo em R$50.00
        pagamento = 50;    //Atribuindo 50 a variável "pagamento"
    }
    else{   //Caso o tempo seja mais de 100 minutos, será cobrado mais R$2.00 por cada minuto ultrapassado de 100
        excedido = minutos - 100;   //"excedido" guarda quantos minutos foram ultrapassados de 100
        pagamento = 50 + excedido * 2;      //"pagamento" recebe os R$50.00 fixos, mais o tempo excedido vezes 2,
    }                                       //já que são R$2.00 por cada minuto excedido

    printf("Valor a pagar: R$%.2f\n", pagamento); //Por fim, o valor do pagamento será impresso na tela

    return 0;
}