#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
 
  char a;
  float b;
 
  printf("digite 'h' para homen ou 'm' para mulher e sua altura em metros \n");
  scanf("%c",&a);
  scanf("%f",&b);

  if (a=='h') {
    printf("seu peso ideal devera ser %.2f",b*72.7-58);
  }
   else if (a=='m') {
    printf("seu peso ideal devera ser %.2f",b*62.1-44.7);
  }
  else {
    printf("vc colocou alguma informacao errada%c",a);
  }


    return 0;
}