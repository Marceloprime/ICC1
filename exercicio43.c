#include <stdio.h>
#include <stdlib.h>

void gerador(int max, int min,int tam,int *vector);
void faca_algo(int *vector,int tam);
int main (){
    int tam,seed,max,min;
    scanf("%d",&tam);
    int vector[tam];
    scanf("%d",&seed);
    scanf("%d",&min);
    scanf("%d",&max);
    srand(seed);

    gerador(max,min,tam,vector);
    faca_algo(vector,tam);



return 0;
}

void gerador(int max, int min,int tam,int *vector){
        int i;
           for(i=0;i<tam;i++){
               vector[i] = min + rand()%(max-min+1);
	   printf("%d ", vector[i]);
           }
        printf("\n");
}

void faca_algo(int *vector,int tam){
 int i,j,aux,k;
 for(i=1;i<tam;i++){
    for(j=0;j<tam-1;j++){
        if(vector[j]>vector[j+1]){
            aux=vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=aux;
        }

    }
    }


    for(i=0;i<tam-1;i++){
        if(vector[i]>vector[i+1]){
        aux=vector[i];
            vector[i]=vector[i+1];
            vector[i+1]=aux;


    }
    }

    if(vector[0]>vector[1]){
        aux=vector[0];
            vector[0]=vector[1];
            vector[1]=aux;

    }
    for(k=0;k<tam;k++){
        printf("%d ",vector[k]);
    }
}
