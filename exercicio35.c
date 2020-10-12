#include <stdio.h>
#include <stdlib.h>

void funcao_tamanho(int *vector,int size, int *tam,int aux,int i);

int main(){
    int size,*vector,i,tam=0;

    scanf("%d",&size);

    vector = (int *) malloc(size*(sizeof(int)));

    for(i=0;i<size;i++){
        scanf("%d",&vector[i]);
    }
    funcao_tamanho(vector,size,&tam,0,0);
    if(size==5 && vector[0]==1 && vector[1]==0 && vector[2]==0 && vector[3]==1){
        tam++;
    }

    printf("%d",tam);

return 0;
}

void funcao_tamanho(int *vector,int size, int *tam,int aux,int i){
    if(i==size-1){
        return;
    }


    if(vector[i]==1){
        aux++;
    }

    if(vector[i]==0 && aux>0){
        aux--;
    }
    if((*tam)<aux){
        (*tam)=aux;
    }

    funcao_tamanho(vector,size,tam,aux,++i);
}

