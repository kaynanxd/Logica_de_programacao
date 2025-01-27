#include<stdio.h>
#include<stdlib.h>

int main(){
 
  float a,b,c;
  printf("digite a cotacao do real, e quantos dolares vc deseja converter em real ");
  scanf("%f%f",&a,&b);

  printf("%.2f dolares convertido em reais e igual a %.2f",b,b*a);



    return 0;
}