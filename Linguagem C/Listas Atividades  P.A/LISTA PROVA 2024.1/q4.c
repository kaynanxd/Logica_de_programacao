#include <stdio.h>
#include <stdlib.h>

void criarquivo(){
    FILE *arquivo = fopen("consumo.txt", "w");
    
    fprintf(arquivo,"21.5\n32.5\n21.4\n12.5\n52\n");
    fclose(arquivo);
    
}

int main() {
    
    criarquivo();
    
    FILE *arquivo = fopen("consumo.txt", "r");
     if (arquivo == NULL) {
        exit(1);
    }
    
    int *consumo = NULL;
    int quantidadeLinhas = 0;
    float valor;

    // Conta o numero de linhas
    while (fscanf(arquivo, "%f", &valor) == 1) {
        quantidadeLinhas++;
    }

    consumo = (int *)malloc(quantidadeLinhas * sizeof(int));
    if (consumo == NULL) {
        exit(1);
    }

    rewind(arquivo);

    //armazena no vetor consumo
    int i = 0;
    while (fscanf(arquivo, "%f", &valor) == 1) {
        consumo[i] = (int)valor;
        i++;
    }
    fclose(arquivo);

    for (int j = 0; j < quantidadeLinhas; j++) {
        printf("viagem %d: %d litros\n", j + 1, consumo[j]);
    }

    free(consumo);

    return 0;
}