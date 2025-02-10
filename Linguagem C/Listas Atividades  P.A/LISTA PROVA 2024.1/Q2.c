#include <stdio.h>
#include <stdlib.h>

int copiarstring(char *str1, const char *str2) {

    int i;
    for (i = 0; i < 20; i++) {
        str1[i] = str2[i];
        
        if (str2[i] == '\0') { 
            break;
            
        }
    }

    if (i == 20 && str2[i] != '\0') {
        return 0; 
    }

    return 1; 
}

int main() {
    char str1[20];
    char str2[20] = "minha casa e massa";

    // Chama a função para copiar a string
    if (copiarstring(str1, str2)) {
        printf("Copia realizada com sucesso: %s\n", str1);
    } else {
        printf("Erro ao copiar.\n");
    }

    return 0;
}