#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  int a,b;

  printf("digite os 2 numeros \n");
  scanf("%d%d",&a,&b);

if (a%b==0){
 printf("o numero e %d multipro de %d ",a,b);
}
else { printf("o numero e %d nao e multipro de %d ",a,b);
}
    return 0;
}