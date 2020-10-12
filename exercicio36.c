#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *vector, int size);
void funcao_lucro(int *vector,int *lucro,int size,int i,int aux, int j);

int main(){
    int size,*vector,i,lucro=0;

    scanf("%d",&size);


    vector = (int *) malloc(size*(sizeof(int)));

    for(i=0;i<size;i++){
        scanf("%d",&vector[i]);
    }

    bubbleSort(vector,size);
    funcao_lucro(vector,&lucro,size,0,0,0);

    for(i=0;i<size;i++){
        if(vector[i]>lucro){
            lucro=vector[i];
        }
    }


    printf("%d",lucro);


    return 0;
}

void bubbleSort(int *vector, int size){

    int i, j, aux;
    for(i=0; i < size-1; i++){
      for(j=size-1;j>i;--j){

        if(vector[j-1]>vector[j]){
          aux = vector[j-1];
          vector[j-1] = vector[j];
          vector[j]= aux;
        }
      }
    }
}

void funcao_lucro(int *vector,int *lucro,int size,int i,int aux,int j){
    if(i==size-1){
        return ;
    }

    if(vector[i]<=vector[j]){
    aux+=vector[i];
    }

    if(aux>(*lucro)){
        *lucro=aux;
    }

    if(j==size-1){
        i++;
        j=-1;
        aux=0;
    }

    funcao_lucro(vector,lucro,size,i,aux,++j);
}

