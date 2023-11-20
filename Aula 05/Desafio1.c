// Faça um procedimento imprimirMatriz que recebe como parametro: linha(int), coluna(int) e matriz[linha][coluna]
// e imprima a matriz 

#include <stdio.h>

void imprimirMatriz(int lin, int col, int matriz[lin][col]) {
    printf("\nMatriz:\n");
    
    for(int i = 0; i < lin; i++) { // laço(for) para as linhas
        for(int j = 0; j < col; j++) { // laço(for) para as colunas
            printf("%d ", matriz[i][j]); // imprime o valor da matriz na posicao linha 'i' e coluna 'j'
        }
        printf("\n"); // pula linha entre as linhas da matriz (a impressao ficara da mesma forma de uma matriz)
    }
}

int main()
{
    int linha, coluna; 

    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna); 

    int matriz[linha][coluna]; 

    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            printf("Digite o valor de [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]); 
        }
        
    }

    imprimirMatriz(linha, coluna, matriz); // chamada do procedimento imprimirMatriz
    // passando como parametro a linha, coluna e a matriz

    return 0;
}