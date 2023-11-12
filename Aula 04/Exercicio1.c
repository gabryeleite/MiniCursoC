// Leitura e impressao de uma matriz, e imprimir o numero de valores negativos
#include <stdio.h>

int main()
{
    int linha, coluna; // toda matriz tem um numero(inteiro) de linhas e colunas
    int negativos = 0; // representara a quantidade de valores negativos

    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna); // lendo o numero de linhas e colunas da matriz

    int matriz[linha][coluna]; // criando a matriz com os tamanhos lidos pelo usuário

    // Serao necessarios dois laços(for) para percorrer a matriz,
    // Um para percorrer as linhas e o outro para as colunas
    for(int i = 0; i < linha; i++) {
        // 'i' representara as linhas da matriz (indo de 0 até o valor de 'linha')
        for(int j = 0; j < coluna; j++) {
            // 'j' representara as colunas da matriz (indo de 0 até o valor de 'coluna')
            printf("Digite o valor de [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // lendo o valor da matriz na linha 'i' e coluna 'j'

            if(matriz[i][j] < 0) { // se o valor da matriz na posicao 'i' e 'j' for negativa, 
                negativos++;       //incrementa a variavel 'negativos'
            }                   
        }

    }

    // Impressao da matriz:
    printf("\nMatriz:\n");
    // a impressao é semelhante a leitura, usando dois laços(for) para percorrer a matriz
    for(int i = 0; i < linha; i++) {
        // 'i' representara as linhas da matriz (indo de 0 até o valor de 'linha')
        for(int j = 0; j < coluna; j++) {
            // 'j' representara as colunas da matriz (indo de 0 até o valor de 'coluna')
            printf("%2d ", matriz[i][j]); // imprime o valor da matriz na posicao linha 'i' e coluna 'j'
        }
        printf("\n"); // pula linha entre as linhas da matriz (a impressao ficara da mesma forma de uma matriz)
    }

    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}