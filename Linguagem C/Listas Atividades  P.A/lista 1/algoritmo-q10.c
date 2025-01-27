#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
 
  float a;
  printf("digite a temperatura em fahheint ");
  scanf("%f",&a);
   a = (a-32)/(1.8);

  printf("a temperatura em celsius e %f",a);
    return 0;
}