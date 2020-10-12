#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct{
    char pais[4];
    int ouro,prata,bronze;
    
}olimpiada;

void entrada_de_dado(int size,olimpiada nacoes[MAX]);
void tabela(int size,olimpiada nacoes[MAX]);

int main (){
    int size,i=0;
    scanf("%d",&size);
    
    olimpiada nacoes[size];
    
    entrada_de_dado(size,nacoes);
    tabela(size,nacoes);
    i=0;
    do{
        printf("%s",nacoes[i].pais);
        printf(" %d",nacoes[i].ouro);
        printf(" %d",nacoes[i].prata);
        printf(" %d\n",nacoes[i].bronze);
        i++;
        
    }while(i<size);
    
return 0;    
}

void entrada_de_dado(int size,olimpiada nacoes[MAX]){
    int i=0;
    
    do{
        scanf("%s",nacoes[i].pais);
        scanf("%d",&nacoes[i].ouro);
        scanf("%d",&nacoes[i].prata);
        scanf("%d",&nacoes[i].bronze);
        i++;
        
    }while(i<size);
}

void tabela(int size,olimpiada nacoes[MAX]){
    int i,j;
    olimpiada aux;
    
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(nacoes[i].ouro < nacoes[j].ouro){
                strcpy(aux.pais,nacoes[i].pais);
                aux.ouro = nacoes[i].ouro;
                aux.prata = nacoes[i].prata;
                aux.bronze = nacoes[i].bronze;
                nacoes[i].ouro = nacoes[j].ouro;
                strcpy(nacoes[i].pais,nacoes[j].pais);
                nacoes[i].prata = nacoes[j].prata;
                nacoes[i].bronze = nacoes[j].bronze;
                nacoes[j].bronze = aux.bronze;
                nacoes[j].prata = aux.prata;
                nacoes[j].ouro = aux.ouro;
                strcpy(nacoes[j].pais,aux.pais);
            }
    
            
            else if (nacoes[i].ouro == nacoes[j].ouro && nacoes[i].prata < nacoes[j].prata){
                strcpy(aux.pais,nacoes[i].pais);
                aux.ouro = nacoes[i].ouro;
                aux.prata = nacoes[i].prata;
                aux.bronze = nacoes[i].bronze;
                nacoes[i].ouro = nacoes[j].ouro;
                strcpy(nacoes[i].pais,nacoes[j].pais);
                nacoes[i].prata = nacoes[j].prata;
                nacoes[i].bronze = nacoes[j].bronze;
                nacoes[j].bronze = aux.bronze;
                nacoes[j].prata = aux.prata;
                nacoes[j].ouro = aux.ouro;
                strcpy(nacoes[j].pais,aux.pais);
            }
            
            else if (nacoes[i].ouro == nacoes[j].ouro && nacoes[i].prata == nacoes[j].prata && nacoes[i].bronze < nacoes[j].bronze){
                strcpy(aux.pais,nacoes[i].pais);
                aux.ouro = nacoes[i].ouro;
                aux.prata = nacoes[i].prata;
                aux.bronze = nacoes[i].bronze;
                nacoes[i].ouro = nacoes[j].ouro;
                strcpy(nacoes[i].pais,nacoes[j].pais);
                nacoes[i].prata = nacoes[j].prata;
                nacoes[i].bronze = nacoes[j].bronze;
                nacoes[j].bronze = aux.bronze;
                nacoes[j].prata = aux.prata;
                nacoes[j].ouro = aux.ouro;
                strcpy(nacoes[j].pais,aux.pais);
            }
            
        }
    }
    
}

