/******************************************************************************

Welcome to GDB Online.
GDB online is an online okok compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct bebe{ 
    int dia; 
    int mes; 
    int ano; 
    char sexo; 
    float altura; 
    float peso; 
    char nome[50]; 
}tBebe; 

typedef struct { 
    int topo; /* posicao do elemento topo */ 
    int nItens; 
    tBebe *dados; 
}Pilha;

void inicializa(Pilha *P);
void insercao(Pilha *P,tBebe B);
void remocao(Pilha *P);
void imprime(Pilha P);

int main(){
    Pilha P;
    tBebe B;
    FILE *arq = fopen("dados-bebes.txt","r");
    int opcao;
    
    inicializa(&P);
    
    //insere os registros do arquivo na pilha
    while(fscanf(arq,"%d", &(B.dia)) != EOF){
        fscanf(arq,"%d%d %c",&(B.mes),&(B.ano),&(B.sexo));
        fscanf(arq,"%f%f %[^\n]s",&(B.altura),&(B.peso),B.nome);
        insercao(&P, B);
    }
    
    do{
        scanf("%d", &opcao);
        
        switch(opcao){
            //insere um registro na pilha
            case 1:
                scanf("%d%d%d %c",&(B.dia),&(B.mes),&(B.ano),&(B.sexo));
                scanf("%f%f %[^\n]s",&(B.altura),&(B.peso),B.nome);
                insercao(&P, B);
                break;
            //remove um registro da pilha
            case 2:
                remocao(&P);
                break;
            //imprime os registros da pilha
            case 3:
                imprime(P);
        }
        
    }while(opcao != 0);
    
    free(P.dados);
    
    return 0;
}

//inicia as variaveis da pilha para que ela funcione
void inicializa(Pilha *P){
    P->topo = -1;
    P->nItens = 0;
    P->dados = NULL;
}

//funcao que insere um elemento no topo da pilha
void insercao(Pilha *P,tBebe B){
    //aumenta o tamanho do vetor pilha
    P->nItens++;
    P->dados = (tBebe *) realloc(P->dados,P->nItens*sizeof(tBebe));
    
    //insere o registro na ultima posicao
    P->topo++;
    P->dados[P->topo] = B;
}

//funcao que remove o ultimo registro inserido na pilha
void remocao(Pilha *P){
    //verifica se a pilha esta vazia
    if(P->nItens == 0){
        printf("Pilha vazia\n\n");
        return;
    }
    
    //decrementa o topo da pilha, assim o dado eh "apagado"
    P->topo--;
    P->nItens--;
}

//funcao que imprime todos os registro da pilha
void imprime(Pilha P){
    int i;

    //verifica se a pilha esta vazia
    if(P.nItens == 0){
        printf("Pilha vazia\n\n");
        return;
    }

    //percorre o vetor da pilha imprimindo cada registro
    for(i = 0; i < P.nItens; i++){
        printf("%d %d %d %c",P.dados[i].dia,P.dados[i].mes,P.dados[i].ano,P.dados[i].sexo);
        printf(" %.2f %.2f %s\n", P.dados[i].altura, P.dados[i].peso, P.dados[i].nome);
    }
}

