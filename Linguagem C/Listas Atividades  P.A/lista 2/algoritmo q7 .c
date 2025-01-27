#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float filiais[8];
int contador=0;
float lucro=0;
int contadorempresa=0;

   for(contador=0;contador<8;contador++){

        printf("digite o valor da filial numero %d : ",contador+1);
        scanf("%f",&filiais[contador]);

    }

    for(contador=0;contador<8;contador++){
        
        if(filiais[contador]>0){
        lucro=lucro+filiais[contador];
        contadorempresa++;
        }
    }



 printf("o total de lucro e %f e %d filiais das 8 filiais estao dando lucro ",lucro,contadorempresa);


    return 0;
}
