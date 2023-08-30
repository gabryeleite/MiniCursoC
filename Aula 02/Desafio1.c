#include <stdio.h>

int main()
{
    float preco, dinheiro, troco, custo;    //criando as variáveis do tipo real
    int quantidade;     //variável inteira

    printf("Preco unitario do produto: ");  //lendo valor do preço e guardando na variável "preco"
    scanf("%f", &preco);
    printf("Quantidade comprada: ");    //lendo valor da quantidade e guardando na variável "quantidade"
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");     //lendo valor do dinheiro dado e guardando na variável "dinheiro"
    scanf("%f", &dinheiro);

    custo = preco * quantidade;    //calculando o custo fazendo o valor do preço vezes a quantidade do produto
    troco = dinheiro - custo;      //calculando o troco fazendo o dinheiro dado menos o valor do custo

    if(troco >= 0){     //Se o troco for positivo a compra foii realizado com sucesso
        printf("Troco = R$%.2f\n", troco);
    }
    else{   //Caso contrário, a compra não foi realizada pois faltou dinheiro e o troco ficou negativo
        printf("Dinheiro insuficiente!\n");     //Imprimindo na tela o dinheiro que faltou para a compra,
        printf("Faltam R$%.2f\n", troco * -1);  //o dinheiro que faltou é so multiplicar o troco por -1
    }
    
    return 0;
}