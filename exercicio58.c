#include <stdio.h>
#include <stdlib.h>


typedef struct{
    float reais;
    float complexo;
    
}NUMBCOMPL;

void adicao(NUMBCOMPL numeros[]);
void subtracao(NUMBCOMPL numeros[]);
void multiplicao(NUMBCOMPL numeros[]);

int main(){
    NUMBCOMPL numeros[2];
    int i=0,opcao;
    
    while(i<2){
        scanf("%f",&(numeros[i].reais));
        scanf("%f",&(numeros[i].complexo));
        i++;
    }
    
    scanf("%d",&opcao);
    
    switch(opcao){
        case 1:
            adicao(numeros);
            break;
        case 2:
            subtracao(numeros);
            break;
            
        case 3:
            multiplicao(numeros);
            break;
        
    }   
    
return 0;
}

void adicao(NUMBCOMPL numeros[]){
    numeros[1].reais = numeros[1].reais + numeros[0].reais;
    numeros[1].complexo = numeros[1].complexo + numeros[0].complexo;
    printf("%.2f + %.2fi",numeros[1].reais,numeros[1].complexo);
}

void subtracao(NUMBCOMPL numeros[]){
    numeros[1].reais = numeros[0].reais - numeros[1].reais;
    numeros[1].complexo = numeros[0].complexo - numeros[1].complexo;
    printf("%.2f + %.2fi",numeros[1].reais,numeros[1].complexo);
}

void multiplicao(NUMBCOMPL numeros[]){
    float aux;
    aux = numeros[1].reais;
    
    numeros[1].reais = (numeros[0].reais*numeros[1].reais) - (numeros[0].complexo*numeros[1].complexo);
    numeros[1].complexo = (numeros[0].reais*numeros[1].complexo) + (numeros[0].complexo*aux);
    printf("%.2f + %.2fi",numeros[1].reais,numeros[1].complexo);
}