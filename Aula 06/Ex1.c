/*
    [EXERCÍCIO 1]
    >>  Uso de referências e manipulações de ponteiros

        Desenvolver um programa que utilize ponteiros para manipulação e impressão valores na saída.
        --- Crie variáveis do tipo: int, float, double e char. Então atribua valores manualmente a estas.
            Em seguida, crie ponteiros respectivos para cada variável e faça a associação (referência).
            Agora, realize imprima os valores armazenados utilizando o ponteiro para cada variável. Realize manipualações
            de acesso e atribuações também pelos ponteiros.
*/

#include <stdio.h>

int main()
{
    // Criação das variáveis e definição de valores
    int    numeroInteiro = 4;
    float  numeroFloat   = 3.14;
    double numeroDouble  = 1.23456789;
    char   caractere     = 'c';

    // Criação dos ponteiros e associação por referência
    int    * pontInteiro = &numeroInteiro;
    float  * pontFloat   = &numeroFloat;
    double * pontDouble  = &numeroDouble;
    char   * pontChar    = &caractere;

    // Impressão dos valores por meio da referência armazenada nos ponteiros
    printf("\n[PRIMEIRA IMPRESSAO]\nint    numeroInteiro = %d\nfloat  numeroFloat   = %f\ndouble numeroDouble  = %lf\nchar   caractere     = %c\n\n",
        *pontInteiro,
        *pontFloat,
        *pontDouble,
        *pontChar
    );


    // Manipulação simples dos valores por meio de referência
    *pontInteiro = 6;
    *pontFloat   = 2 * *pontFloat; // [*]
    *pontDouble  = *pontFloat - 1;
    *pontChar    = 'd';
    // [*]  Note como a linguagem (compilador) entende corretamente a diferença de utilização do asterisco para
    //      a operação aritmética multiplicativa e quando utilizado para acessar o conteúdo apontado por um ponteiro.


    // Impressão de valores após manipulação
    printf("[SEGUNDA IMPRESSAO]\nint    numeroInteiro = %d\nfloat  numeroFloat   = %f\ndouble numeroDouble  = %lf\nchar   caractere     = %c\n\n",
        *pontInteiro,
        *pontFloat,
        *pontDouble,
        *pontChar
    );

    return 0;
}