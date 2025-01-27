#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 
  int a,b,c;
  int resultado;
  printf("digite os 3 numeros de matricula");
  scanf("%d%d%d",&a,&b,&c);

if (a>b && a>c) {
printf("o numero %d e maior",a);
}
else if (b>c && b>a) {
     printf("o numero %d e maior",b);
}
else {
     printf("o numero %d e maior",c);
} 


    return 0;
}