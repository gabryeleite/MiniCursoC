#include <stdio.h>

int main()
{
    char nome1[40], nome2[40];
    int idade1, idade2;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    scanf("%[^\n]", nome1);
    printf("Idade: ");
    scanf("%d", &idade1);
    getchar();

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    scanf("%[^\n]", nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    float media = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s eh de %.1f anos\n", nome1, nome2, media);

    return 0;
}