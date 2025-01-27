#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
  int a,b,c;
  float delta;
  printf("digite os coeficientes a,b,c ");
  scanf("%d%d%d",&a,&b,&c);
  delta =(b*b)-(4*a*c);
  float raiz1 = ((-b) - (sqrt(delta))) / (2*a);
  float raiz2 = ((-b) + (sqrt(delta))) / (2*a);


if (delta>0) {
printf("existem duas raizes reais e diferentes %.2f %.2f ",raiz1,raiz2);
}
else if (delta==0) {
     printf("existe uma raiz real repetida %.2f %.2f ",raiz1,raiz2);
}
else {
     printf("nao existem raizes reais para essa equacao");
} 


    return 0;
}