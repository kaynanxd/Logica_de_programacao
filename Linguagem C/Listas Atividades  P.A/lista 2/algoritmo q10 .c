#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, coluna;

    // Preenchendo a matriz com a soma dos índices
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matriz[linha][coluna] = linha + coluna;
        }
    }

    // Imprimindo a matriz
    printf("Matriz gerada automaticamente:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}