/*
3) Ana precisa criar uma lista que determine se os números de 1 até N, onde N é um número
qualquer, são primos ou não. Como ela está sem tempo, ela pediu ajuda. Um exemplo dessa
lista com N=6 seria:
1 NPrimo
2 Primo
3 Primo
4 NPrimo
5 Primo
6 NPrimo
*/

#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>

bool verificarprimos(int num){
    
    
    
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Não é primo
        }
    }
    return true; // É primo
    }
    
 


int main(){
    int num;
    printf("digite o numero \n");
    scanf("%d",&num);
    
    FILE *arquivo= fopen("numerosprimos.txt","w");
    
    for(int i=0;i<=num;i++){
        if(verificarprimos(i)){
            
            fprintf(arquivo,"o numero %d e primo \n",i);
            
        }

        }
        fclose(arquivo);
    return 0;
}