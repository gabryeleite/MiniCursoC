// Faça a leitura e impressao de uma matriz, imprima também a soma dos valores de cada linha,
// armazene a soma dos valores das linhas em um vetor (o tamanho do vetor é o mesmo do numero de linhas)
#include <stdio.h>

int main()
{
    int linha, coluna; // toda matriz tem um numero(inteiro) de linhas e colunas

    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna); // lendo o numero de linhas e colunas da matriz

    int matriz[linha][coluna]; // criando a matriz com os tamanhos lidos pelo usuário
    int somaLinha[linha]; // vetor que representara a soma de cada linha 

    // Serao necessarios dois laços(for) para percorrer a matriz,
    // Um para percorrer as linhas e o outro para as colunas
    for(int i = 0; i < linha; i++) {
        // 'i' representara as linhas da matriz (indo de 0 até o valor de 'linha')
        somaLinha[i] = 0; // inicializa a soma com 0

        for(int j = 0; j < coluna; j++) {
            // 'j' representara as colunas da matriz (indo de 0 até o valor de 'coluna')
            printf("Digite o valor de [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // lendo o valor da matriz na linha 'i' e coluna 'j'

            somaLinha[i] += matriz[i][j]; // faz a soma dos valores da mesma linha (percorre as colunas 'j')
        }
        
    }

    // Impressao da matriz:
    printf("\nMatriz:\n");
    // a impressao é semelhante a leitura, usando dois laços(for) para percorrer a matriz
    for(int i = 0; i < linha; i++) {
        // 'i' representara as linhas da matriz (indo de 0 até o valor de 'linha')
        for(int j = 0; j < coluna; j++) {
            // 'j' representara as colunas da matriz (indo de 0 até o valor de 'coluna')
            printf("%d ", matriz[i][j]); // imprime o valor da matriz na posicao linha 'i' e coluna 'j'
        }
        printf("\n"); // pula linha entre as linhas da matriz (a impressao ficara da mesma forma de uma matriz)
    }

    for(int i = 0; i < linha; i++) { // Impressao da soma de cada linha
        printf("Soma da %d.a linha: %d\n", i + 1, somaLinha[i]);
    }

    return 0;
}
