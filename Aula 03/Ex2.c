#include <stdio.h>

int main()
{
    int N; //cria a variável inteira "N"

    printf("Deseja a tabuada para qual valor?: "); //Lendo o valor e guardando na variável "N"
    scanf("%d", &N);

    for(int cont = 1; cont <= 10; cont++){ //contador recebe o valor 1 e irá até 10, incrementando de 1 em 1
        printf("%d X %d = %d\n", N, cont, N * cont); //imprime na tela "N vezes contador = N * contador"
    }
    //Ao final do programa terá sido impresso na tela a tabuada de "N" de 1 até 10

    return 0;
}