#include <stdio.h>
#include <string.h>

#define NUM_ENTREVISTADOS 7
#define MAX_NOME 11 // 10 letras + '\0'

int main() {
    char nomes[NUM_ENTREVISTADOS][MAX_NOME]; // Array para armazenar os nomes
    
    printf("Digite os nomes dos %d entrevistados:\n", NUM_ENTREVISTADOS);
    
    // Leitura dos nomes
    for (int i = 0; i < NUM_ENTREVISTADOS; i++) {
        printf("Entrevistado %d: ", i + 1);
        scanf("%10s", nomes[i]); // Limita a leitura a 10 caracteres
    }
    
    printf("\nOrdem de saída dos entrevistados:\n");
    
    // Impressão na ordem inversa
    for (int i = NUM_ENTREVISTADOS - 1; i >= 0; i--) {
        printf("%s\n", nomes[i]);
    }
    
    return 0;
}