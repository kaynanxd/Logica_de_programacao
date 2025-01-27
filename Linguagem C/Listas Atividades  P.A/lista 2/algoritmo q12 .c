#include <stdio.h>

int main() {
    int matriz[2][3];
    int matriz3[2][3];
    int matriz2[2][3];
    int linha, coluna;
    int contador;
    int soma=0;
    int somal=0;
    int diagonal[5];

    // Preenchendo a matriz 
    for (linha = 0; linha < 2; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            soma=soma+1;
            matriz[linha][coluna] = soma;
            matriz2[linha][coluna] = soma;
            matriz3[linha][coluna] =matriz[linha][coluna]+matriz2[linha][coluna];
        }
    }



    // Imprimindo a matriz
    printf("Matriz gerada automaticamente:\n");
    for (linha = 0; linha < 2; linha++)
     {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("[%d]", matriz[linha][coluna]);
        }
        printf("\n");
    }
  printf("\n");
    for (linha = 0; linha < 2; linha++)
     {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("[%d]", matriz2[linha][coluna]);
        }
        printf("\n");
    }
  
       printf("\n");
        for (linha = 0; linha < 2; linha++)
     {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("[%d]", matriz3[linha][coluna]);
        }
        printf("\n");
    }
 

    return 0;
}