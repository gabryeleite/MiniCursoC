/*
    [EXERCÍCIO 2]
    >>  Uso de ponteiros para passagem de parâmetros em funções

        Desenvolver um programa que utilize ponteiros como parâmetros em funções e retornos múltiplos
        --- Crie variáveis do tipo: int. Então atribua valores manualmente.
            Em seguida, crie ponteiros respectivos para cada variável e faça a associação (referência).
            Agora, crie uma função "obterQuadrado" que retorna (a + b)^2, porém também (depois) muda os valores de
            a para a^2, e b para b^2, ou seja, a função calcula e retorna 3 resultados diferentes simultaneamente!
            A função deve ter o seguinte cabeçalho:
                int obterQuadrado(int * a, int * b)
            Mostre, na saída, os valores originais e os valores obtidos após a aplicação da função.
*/

#include <stdio.h>

int obterQuadrado(int * a, int * b)
{
    int soma = *a + *b;
    
    *a = *a * *a;
    *b = *b * *b;
    
    return (soma * soma);
}

int main()
{
    // Criação das variáveis e definição de valores
    int a = 1;
    int b = 2;
    int quadrado;

    // Criação dos ponteiros e associação por referência
    int * pontA = &a;
    int * pontB = &b;

    // Impressão dos valores originais
    printf("\n[PRIMEIRA IMPRESSAO]\nint a = %d\nint b = %d\n",
        a,
        b
    );
    
    // Passagem dos inteiros a e b por referência, dessa forma, a função manipulará os valores originais das variáveis.
    // Ao fim do procedimento, a e b devem possuir valores diferentes de antes da função (a e b diferentes de 0 e de 1)
    quadrado = obterQuadrado(pontA, pontB);

    // Impressão dos valores modificados e apresenção do resultado do quadrado da soma computado com valores de a e b ANTERIORES
    printf("\n[SEGUNDA IMPRESSAO]\nint quadrado = %d\nint a        = %d\nint b        = %d\n",
        quadrado,
        a,
        b
    );

    // Nova passagem dos inteiros por referência, porém agora passando o endereço diretamente, sem intermédio de uma variável ponteiro.
    // Este comando é totalmente equivalente ao comando obterQuadrado(pontA, pontB) executado anteriormente.
    quadrado = obterQuadrado(&a, &b);

    // Impressão dos valores modificados e apresenção do resultado do quadrado da soma computado com valores de a e b ANTERIORES
    printf("\n[TERCEIRA IMPRESSAO]\nint quadrado = %d\nint a        = %d\nint b        = %d\n\n",
        quadrado,
        a,
        b
    );
    
    return 0;
}