#include <stdio.h>
#include <string.h>

int main()
{
    char string[50]; //criando uma string podendo ter tamanho até 50

    printf("Digite uma palavra ou frase: ");
    scanf("%[^\n]", string); //lendo a frase e guardando na "string"

    int tamanho = strlen(string); //A função strlen retorna o tamanho de determinada string
            
    for(int i = tamanho; i >= 0; i--){ //Percorrendo a string de trás para frente, ou seja,
        printf("%c", string[i]);       //começando pelo final("tamanho") e indo até a posição "0", de -1 em -1
    }   //imprimindo o caracter da string na posição "i"
    printf("\n");

    return 0;
}