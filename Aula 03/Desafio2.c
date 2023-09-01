#include <stdio.h>

int main()
{
    int idade, soma = 0, cont = 0; //criando as variáveis inteiras para armazenar a idade, soma e quantidade respectivamente
    float media; //variável real para armazenar o valor da média das idades 

    printf("Digite uma idade: "); //Lendo o valor da idade e guardando na variável "idade"
    scanf("%d", &idade); 
    while(idade >= 0){ //Verifica se a idade é maior ou igual a 0, ou seja, se não é negativa
        soma += idade; //A variável "soma" recebe o valor de "soma" + "idadde" (soma = soma + idade)
        cont++;     //Incrementa o contador em mais um
        printf("Digite outra idade: ");
        scanf("%d", &idade);  //Le outro valor de idade e guarda na variável "idade"
    }

    media = (float) soma / cont; //variável "media" recece a soma das idades dividido pela sua quantidade
    printf("Media das idades: %.2f\n", media); //Imprime na tela a media das idades

    return 0;
}