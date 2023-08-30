#include <stdio.h>

int main()
{
    float nota1, nota2, media;  //criando as variáveis do tipo real

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);    //lendo a primeira nota e guardando na variável "nota1"
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);    //lendo a segunda nota e guardando na variável "nota2"

    media = (nota1 + nota2) / 2.0;  //calculando a média, fazendo a soma das duas notas e dividindo por 2

    printf("Media = %.1f\n", media);    //Imprimindo na tela o valor da média

    if(media < 6){      //Caso a media seja menor do que 6.0, será impresso na tela a mensagem "REPROVADO!"
        printf("REPROVADO!\n");
    }

    return 0;
}
