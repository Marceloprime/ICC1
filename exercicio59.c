#include <stdio.h>
#include <stdlib.h>
enum opcao {maior=2,menor=1,media=3};

void funcao_maior(int *vector, int size, int *Maior,int i);
void funcao_menor(int *vector, int size, int *Menor,int i);
double funcao_media(int *vector,int size,double Media,int i);

int main (){
    int size,opcao,*vector,i,Maior,Menor;
    double Media=0;

    scanf("%d %d",&size,&opcao);

    vector = (int*) malloc (size*(sizeof(int)));

    for(i=0;i<size;i++){
        scanf("%d",&vector[i]);
    }
    Maior=vector[0];
    Menor=vector[0];
    

    switch (opcao){

    case maior :
     funcao_maior(vector,size,&Maior,0);
        printf("%d",Maior);
            break;

    case menor :
     funcao_menor(vector,size,&Menor,0);
        printf("%d",Menor);
            break;
            
    case media : Media=(int)funcao_media(vector,size,Media,0);
        printf("%.0lf",Media);
            break;
    }

    return 0;
}

void funcao_maior(int *vector, int size, int *Maior,int i){
    if(i==size){
        return;
    }

    if(vector[i]>(*Maior)){
        (*Maior)=vector[i];
    
    }
    
    
    funcao_maior(vector,size,Maior,++i);    

    return ;
}

void funcao_menor(int *vector, int size, int *Menor,int i){
    if(i==size){
        return;
    }

    if(vector[i]<(*Menor)){
        (*Menor)=vector[i];
    
    }
    
    
    funcao_menor(vector,size,Menor,++i);    
    
    return ;
}

double funcao_media(int *vector,int size,double Media,int i){
    if(i==size){
        return 0;
    }
    
    Media = (double) vector[i]/size;
    
    return Media+funcao_media(vector,size,Media,++i);  
}


