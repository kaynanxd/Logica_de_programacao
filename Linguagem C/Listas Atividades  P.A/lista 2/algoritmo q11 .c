#include <stdio.h>

int main() {
    int matriz[5][5];
    int linha, coluna;
    int contador;
    int soma=0;
    int somal=0;
    int diagonal[5];

    // Preenchendo a matriz 
    for (linha = 0; linha < 5; linha++) {
        for (coluna = 0; coluna < 5; coluna++) {
            soma=soma+1;
            matriz[linha][coluna] = soma;
        }
    }

    // Imprimindo a matriz
    printf("Matriz gerada automaticamente:\n");
    for (linha = 0; linha < 5; linha++)
    
     {
        for (coluna = 0; coluna < 5; coluna++) {
            printf("[%d]", matriz[linha][coluna]);
        }
        printf("\n");
    }

    for (linha = 0; linha < 5; linha++)
    
     {
        for (coluna = 0; coluna < 5; coluna++) {
            somal=somal+matriz[linha][coluna];
            
        }
        printf("\n");
    }
printf("a soma de todos elementos e [%d] ", somal);


for (linha = 0; linha < 5; linha++)  {
        for (coluna = 0; coluna < 5; coluna++) {

            if(linha==coluna){
                diagonal[coluna]=matriz[linha][coluna];
                      }     
            
        }

     
          
    }
       for(contador=0; contador<5; contador++){
              printf("\nos valores da diagonal sao [%d]\n",diagonal[contador]);
        }

    return 0;
}