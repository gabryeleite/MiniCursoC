#include <stdio.h>

int main()
{
    float preco, dinheiro, troco, custo;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%f", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    custo = preco * quantidade;
    troco = dinheiro - custo;

    printf("Troco = %.2f\n", troco);

    return 0;
}