#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  float notas[15];
  int contador=0;
  float media=0;
  float aprovados=0;

  for (contador=0; contador<15; contador++){
    printf("digite a nota do aluno numero %d :",contador + 1);
    scanf("%f",&notas[contador]);
    media = media+notas[contador];
    aprovados++;
       }

 media=media/aprovados;

 if(media>8){
 printf("o resultado da media dos alunos aprovados e 10 .");
}
 else{
 printf("o resultado da media dos alunos aprovados e %.2f .",media);
 }
    return 0;
}

 