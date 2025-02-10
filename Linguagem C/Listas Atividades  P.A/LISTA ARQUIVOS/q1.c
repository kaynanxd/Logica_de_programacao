/*
1) Roberto possui dois arquivos de texto (.txt) nos quais estão armazenadas as quantidades
de estoque de certos itens em duas filiais diferentes. Ele requisitou a criação de um
programa que gere um terceiro arquivo, o qual deve armazenar a quantidade de estoque de
cada item em sua empresa, sem considerar a filial. Consequentemente, esse terceiro arquivo
deve ser preenchido com a soma dos valores presentes nos dois arquivos anteriores, tal
como exemplificado a seguir:
numeros1.txt numeros2.txt numeros3.txt
1 8 9
4 20 24
5 11 16
6 17 23
8 18 26
*/

#include <stdlib.h>
#include <stdio.h>

void lerarquivos(char* arquivo1,char* arquivo2,char* arquivo3){
    
    FILE *arq1=fopen(arquivo1,"w");
    FILE *arq2=fopen(arquivo2,"w");
    
    if(arq1 == NULL || arq2 == NULL){
        exit(1);
    }
    int filial1[5]={1,2,3,4,5};
    int filial2[5]={6,7,8,9,10};
     for (int i = 0; i < 5; i++){
    fprintf(arq1,"%d\n",filial1[i]);
    fprintf(arq2,"%d\n",filial2[i]);
     }
     
    fclose(arq1);
    fclose(arq2);
    
    arq1=fopen(arquivo1,"r");
    arq2=fopen(arquivo2,"r");
    FILE *arq3=fopen(arquivo3,"w");
    
    int estoque1,estoque2,estoque3;
    
    while(fscanf(arq1,"%d",&estoque1) !=EOF && fscanf(arq2,"%d",&estoque2) != EOF){
        estoque3=estoque2+estoque1;
        fprintf(arq3,"%d\n",estoque3);
    }
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
}

int main()
{
    char*nomearquivo1="filial1.txt";
    char*nomearquivo2="filial2.txt";
    char*nomearquivo3="todas filiais.txt";
    
    lerarquivos(nomearquivo1,nomearquivo2,nomearquivo3);

    return 0;
}