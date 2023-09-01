#include <stdio.h>

int main()
{
    int N, fatorial = 1; //variáveis inteiras "N" e "fatorial" que guardára o valor do fatorial de "N" 

    printf("Digite um valor para calcular seu fatorial: ");
    scanf("%d", &N); //Lendo o valor que será calculado o fatorial e guardando na variável "N"

    for(int i = 1; i <= N; i++){ //Loop que começa em 1 e termina no valor de "N", indo de 1 em 1
        fatorial *= i; //Variável "fatorial" recebe o valor de "fatorial" vezes o contador "i" 
    }                  //(mesma coisa de fazer: fatorial = fatorial * i)

    printf("Fatorial de %d = %d\n", N, fatorial); //Imprime na tela o valor do fatorial de "N"

    return 0;
}