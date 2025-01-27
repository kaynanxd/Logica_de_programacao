#include<stdio.h>
#include<stdlib.h>

int main(){

 float nota;
 float media;
 int contador=1;

  while(contador<=3) {
  printf("digite a nota \n");
  scanf("%f",&nota);
  media = media+nota;
  contador = contador+1;
}

media = media/3;

if(media>=7){
    printf("a media e \n %.2f entao aprovado",media);
}
else { 
printf("a media e \n %.2f entao reprovado",media);
}
    return 0;
}
