#include <stdlib.h>
#include <stdio.h>
#define MAX 100

typedef struct{
    int dia,mes,ano;
    int segundo,minuto,hora;
    char evento[MAX];
    
}compromicos;

void recolhe_dados(compromicos agenda[MAX],int size);

int main(){
    compromicos agenda[MAX];
    int size;
    
    scanf("%d",&size);
    
    if(size>MAX){
        printf("erro");
        exit(1);
    }

    recolhe_dados(agenda,size); 
    
        int i=0;
    
    do{
        printf("%02d/%02d/%02d - ",agenda[i].dia,agenda[i].mes,agenda[i].ano);
        printf("%02d:",agenda[i].hora);
        printf("%02d:",agenda[i].minuto);
        printf("%02d\n",agenda[i].segundo);
        printf("%s\n",agenda[i].evento);
        i++;
        
    }while(i<size);

    

    return 0;
}


void recolhe_dados(compromicos agenda[MAX],int size){
    int i=0;
    
    do{
        scanf("%d",&agenda[i].dia);
        scanf("%d",&agenda[i].mes);
        scanf("%d",&agenda[i].ano);
        scanf("%d",&agenda[i].hora);
        scanf("%d",&agenda[i].minuto);
        scanf("%d\n",&agenda[i].segundo);
        scanf("%[^\n]s",agenda[i].evento);
        i++;
        
    }while(i<size);

}
