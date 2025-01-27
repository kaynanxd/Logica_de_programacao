#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int id[10]={1,2,3,4,5,6,7,8,9,10};
int user;
int contador;

printf("digite um id ");
scanf("%d",&user);

for (contador=0;contador<10;contador++){
if(user==id[contador]){
    printf("essa id esta na lista de filiais");
    return 0;
}
}

printf("essa id nao e daqui");


    return 0;
}

 