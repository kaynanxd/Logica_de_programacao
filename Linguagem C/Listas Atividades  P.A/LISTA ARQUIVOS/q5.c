/*5) Helena está querendo testar uma mecânica para seu novo jogo e pediu que você a
ajudasse a criá-la. Ela precisa de um programa que:
(a) Abra um arquivo de texto chamado 'arq.txt'.
(b) Permita que o usuário insira vários caracteres nesse arquivo, até que ele digite o
caractere '#'.
(c) Reinicie o arquivo, movendo o ponteiro para o início.
(d) Leia o arquivo caractere por caractere, escrevendo na tela todos os caracteres
armazenados.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void digitartxt(char *nomearquivo) {
    FILE *arq = fopen(nomearquivo, "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    
    while (1) {
        char digita[100];
        scanf("%s", digita);
        fprintf(arq, "%s\n", digita);
        
        if (strcmp(digita, "#") == 0) {  // Comparar a string 
            break;
        }
    }

    fclose(arq); 
}

void exibirtxt(char *nomearquivo) {
    FILE *arq = fopen(nomearquivo, "r");  
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    char c;
    while ((c = fgetc(arq)) != EOF) {  
        putchar(c); 
    }

    fclose(arq); 
}

int main() {
    char nomearquivo[] = "arq.txt"; 
    digitartxt(nomearquivo);
    exibirtxt(nomearquivo); 
    
    return 0;
}