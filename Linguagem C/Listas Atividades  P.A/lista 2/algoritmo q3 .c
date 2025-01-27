#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float filiais[20];
int contador=0;
float lucro=0;
int contadorempresa=0;

    for(contador=0;contador<20;contador++){

        printf("digite o valor da filial numero %d : ",contador+1);
        scanf("%f",&filiais[contador]);

    }

printf("as empresas que dao lucro sao as de numero :\n");

    for(contador=0;contador<20;contador++) {
         if(filiais[contador]>0){
         printf("%d\n",contador);
         lucro=lucro+filiais[contador];
         contadorempresa++;
        }
 }

 printf("a quantidade de lucro dessas empresas em media foi de %.2f ",lucro/contadorempresa);


    return 0;
}

 