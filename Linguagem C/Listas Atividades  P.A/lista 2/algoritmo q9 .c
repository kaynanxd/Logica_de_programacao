#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int matriz[3][3];
int linha,coluna,indice;
float soma;

for(linha=0;linha<3;linha++){
         for(coluna=0;coluna<3;coluna++){
         printf("digite os valor da linha do estado [%d] e sua idade [%d] :",linha,coluna);
         scanf("%d",&matriz[linha][coluna]);
        }
}

 printf("informe o indicie de uma linha");
           scanf("%d",&indice);

           
for (coluna = 0; coluna < 3; coluna++) {
        soma += matriz[indice][coluna];
    }
    soma=soma/3;

 printf("a media de idade da cidade e %.2f : ",soma);
        


    return 0;
}
