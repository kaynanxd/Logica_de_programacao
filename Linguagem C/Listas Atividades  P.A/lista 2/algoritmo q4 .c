#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

 float alturas[6];
 int contador;
 float maior= -99;
 float menor= 99;
 int posicao_maior;
 int posicao_menor;

 for(contador=0;contador<6;contador++){

 printf("digite a altura do seu %d amigo : ",contador+1);
 scanf("%f",&alturas[contador]);

 }

 for(contador=0;contador<6;contador++){
    if(alturas[contador]>maior){
       maior=alturas[contador];
       posicao_maior=contador;
       }
    if (alturas[contador] < menor) {
            menor = alturas[contador];
            posicao_menor = contador;
 }}

    printf("\nA maior altura e %.1f e esta na posicao %d\n",maior,posicao_maior + 1);
    printf("\nA menor altura e %.1f e esta na posicao %d\n",menor,posicao_menor + 1);

 for (contador = 0; contador < 5; contador++) {
        for (int j = contador + 1; j < 6; j++) {
            if (alturas[contador] > alturas[j]) {
                // Troca
                float temp = alturas[contador];
                alturas[contador] = alturas[j];
                alturas[j] = temp;
            }
        }
    }

    printf("\nAlturas em ordem crescente: ");
    for (contador = 0; contador < 6; contador++) {
        printf("%.2f ", alturas[contador]);
    }



    return 0;
}

 