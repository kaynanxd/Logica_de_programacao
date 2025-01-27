#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int matriz[3][3];
int linha,coluna;

for(linha=0;linha<3;linha++){
         for(coluna=0;coluna<3;coluna++){
         printf("digite os valor de [%d][%d] :",linha+1,coluna+1);
         scanf("%d",&matriz[linha][coluna]);
        }
}

for(linha=0;linha<3;linha++){
         for(coluna=0;coluna<3;coluna++){

            if(matriz[linha][coluna]%2 == 0){
             matriz[linha][coluna]= 1 ;
            }
            else{
                matriz[linha][coluna]= -1 ;
            }
         
        }
}

for(linha=0;linha<3;linha++){
         for(coluna=0;coluna<3;coluna++){
          printf("a matriz de [%d] [%d] = %d \n",linha,coluna,matriz[linha][coluna]);
        }
}



    return 0;
}
