#include <stdio.h>

int main()
{
    char nome[40];
    float valor, pagamento;
    int hora;

    printf("Nome: ");
    scanf("%[^\n]", nome);
    printf("Valor/hora: ");
    scanf("%f", &valor);
    printf("Hora(s) trabalhada(s): ");
    scanf("%d", &hora);

    pagamento = valor * hora;

    printf("%s recebera R$%.2f\n", nome, pagamento);

    return 0;
}