#include <stdio.h>
#include <stdlib.h>

void modificarRoupas(int *roupas, int tiporoupa, int operacao, int quantidade) {

    if (tiporoupa < 0 || tiporoupa > 5) {
        printf("Tipo de roupa inválido.\n");
        return;
    }


    if (operacao != 0 && operacao != 1) {
        printf("Operação inválida. Use 0 para diminuir ou 1 para aumentar.\n");
        return;
    }

    if (operacao == 1) {
        roupas[tiporoupa] += quantidade;
    }
    else if (operacao == 0) {

        if (roupas[tiporoupa] - quantidade < 0) {
            printf("Não e possível diminuir mais\n");
            return;
        }
        roupas[tiporoupa] -= quantidade;
    }
}

int main() {

    int roupas[6] = {5, 10, 3, 7, 15, 4};

    printf("0 para Casacos: %d\n1 para Blusas: %d\n2 para Shorts: %d\n3 para Calcas: %d\n4 para Sapatos: %d\n5 para Sandalias: %d\n", roupas[0], roupas[1], roupas[2], roupas[3], roupas[4], roupas[5]);
    
    int tiporoupa,operacao,quantidade;
    printf("digite a como vc deseja fazer as modificacoes ? selecione o numero do conjunto de roupa, em seguida 1 ou 0 para adicionar ou remover e por ultimo a quantidade :\n ");
    scanf("%d%d%d",&tiporoupa,&operacao,&quantidade);
    modificarRoupas(roupas, tiporoupa, operacao, quantidade); 


    printf("Casacos: %d\nBlusas: %d\nShorts: %d\nCalcas: %d\nSapatos: %d\nSandalias: %d\n", roupas[0], roupas[1], roupas[2], roupas[3], roupas[4], roupas[5]);

    return 0;
}