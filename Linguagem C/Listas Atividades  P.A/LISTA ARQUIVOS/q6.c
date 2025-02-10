/*
6) Vitória é professora de uma creche e descobriu que crianças pequenas aprendem melhor
quando ensinadas por meio de jogos e atividades. Ela pediu que você criasse o seguinte jogo:
Dado um arquivo de texto chamado 'Animal.txt', organizado da seguinte forma (animal dica):
Cachorro Late
Gato Mia
Passaro Canta
Cavalo Relincha
Etc

Crie um programa que:
(a) Solicite ao usuário um número menor ou igual à quantidade de linhas do arquivo.
(b) Leia a linha do arquivo correspondente ao número digitado.
(c) Imprima na tela a 'dica' daquela linha e solicite ao usuário o nome do animal.
(d) Compare a resposta do usuário com o animal lido da linha.
(e) Indique se o usuário acertou ou errou.
Por exemplo, uma possível saída seria:
Digite um número: 2
Dica: Mia
Qual o animal? Gato
Você Acertou!!
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void criararquivodojogo(){
    FILE *arquivo=fopen("animal.txt","w");
    if(arquivo==NULL){
        exit(1);
    }
    fprintf(arquivo,"cachorro Late\ngato Mia\npassaro canta\ncavalo relincha");
    fclose(arquivo);
}

void imprimirdica(int linha){
    FILE *arquivo=fopen("animal.txt","r");
    if(arquivo==NULL){
        exit(1);
    }
    char animal[20];
    char dica[20];
    char palpite[20];
    int currentLine = 1;
    
     while (fscanf(arquivo, "%s %s", animal, dica) != EOF) {
        if (currentLine == linha) {
            break;
        }
        currentLine++;
    }
    printf("a dica e %s\n qual o seu palpite ?\n ",dica);
    scanf("%s",palpite);
    if (strcmp(palpite, animal) == 0){
        printf("acertou");
    }
    else{printf("errou"); }
    
    fclose(arquivo);
}


int main(){
    criararquivodojogo();
    int linha;
    printf("digite o numero de uma linha \n");
    scanf("%d",&linha);
    
    imprimirdica(linha);
    
    return 0;
}