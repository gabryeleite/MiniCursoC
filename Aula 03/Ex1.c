#include <stdio.h>

int main()
{
    int senha; //criando variável inteira "senha"

    printf("Digite a senha: ");
    scanf("%d", &senha);    //Lendo a senha e guardando na variável "senha"

    while(senha != 2002){ //Verifica se o valor da "senha" é diferente de 2002
        printf("Senha invalida! Tente novamente: "); //Caso seja, faz uma nova leitura da "senha"
        scanf("%d", &senha);
    }
    //O loop é interrompido quando o valor da "senha" é digitado corretamento,
    //ou seja, quando é igual a 2002
    printf("Acesso permitido\n");

    return 0;
}