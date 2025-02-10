#include <stdlib.h>
#include <stdio.h>

void escreverarquivo(char *nomearquivo) {
    FILE *arq = fopen(nomearquivo, "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomearquivo);
        exit(1);  
    }


    int raizes[6] = {2, 3, 4, 5, 6, 7};

    
    for (int i = 0; i < 6; i++) {
        fprintf(arq, "%d\n", raizes[i]);
    }

    
    fclose(arq);
}

int calcularraizes(char *nomeraizes, char *nomearquivo) {
    FILE *arquivoraizes = fopen(nomeraizes, "w");
    FILE *arquivonumeros = fopen(nomearquivo, "r");


    if (arquivoraizes == NULL || arquivonumeros == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        exit(1); 
    }

    int numero;

    while (fscanf(arquivonumeros, "%d", &numero) != EOF) {

        int raiz = numero * numero;
        fprintf(arquivoraizes, "%d\n", raiz);
    }


    fclose(arquivonumeros);
    fclose(arquivoraizes);
    return 1;
}

int main() {

    char nomeraizes[20] = "raizquadradas.txt";
    char nomearquivo[20] = "numeros.txt";


    escreverarquivo(nomearquivo);
    if(calcularraizes(nomeraizes, nomearquivo)){
        printf("arquivo gravado com sucesso");
        
    }
    else{printf("erro");}
    return 0;
}