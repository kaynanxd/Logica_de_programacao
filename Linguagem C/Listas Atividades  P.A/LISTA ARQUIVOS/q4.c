/*
4) Bruno trabalha em um escritório e recebeu a tarefa de organizar vários arquivos .txt da
empresa com base na quantidade de linhas. Como essa tarefa é longa e tediosa, ele pediu
que fosse feito um programa capaz de indicar quantas linhas um determinado arquivo .txt
possui, para auxiliá-lo na organização.
*/

#include<stdlib.h>
#include<stdio.h>

void criarquivo(char *arquivo){
    
        FILE *arq=fopen(arquivo,"w");
        for(int i = 0; i<=10;i++){
        fprintf(arq,"linha numero %d\n",i+1);
        }
        fclose(arq);
}

void verificarquantidadelinhastxt(char *arquivo){
    FILE *arq=fopen(arquivo,"r");
    
    int linhas = 0;
    char caractere;

    while ((caractere = fgetc(arq)) != EOF) {
            if (caractere == '\n') {
                linhas++;
            }
        }

    printf("O numero de linhas do arquivo e igual a: %d", linhas);
    fclose(arq);

}

   int main(){
    
    char arquivo[20]="arquivo.txt";
    criarquivo(arquivo);
    verificarquantidadelinhastxt(arquivo); 
    
    
    return 0;
}