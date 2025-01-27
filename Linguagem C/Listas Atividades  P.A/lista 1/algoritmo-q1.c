#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

int dia,mes,ano;
int nascimento;
int hoje;
int resultado;

 printf("digite a sua idade, a quantidade de meses e o numero de dias no formato aa/mm/dd  ");
 scanf("%d%*c%d%*c%d",&ano,&mes,&dia);

 resultado = ((ano*365)+(mes*30+dia));

printf("vc tem %d dias de vida",resultado);

    return 0;
}