#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float filiais[10];
int contador=0;
float prejuizo=0;
int contadorempresa=0;

    for(contador=0;contador<10;contador++){

        printf("digite o valor da filial numero %d : ",contador+1);
        scanf("%f",&filiais[contador]);

    }

printf("as empresas que dao prejuizo sao as de numero :\n");

    for(contador=0;contador<10;contador++) {
         if(filiais[contador]<0){
         printf("%d\n",contador+1);
         prejuizo=prejuizo+filiais[contador];
         contadorempresa++;
        }
 }

 printf("a quantidade de prejuizo dessas %d empresas foi de %.2f ",contadorempresa,prejuizo);


    return 0;
}

 