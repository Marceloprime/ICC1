#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char autor[50];
    char nomedelivro[50];
    int paginas;
    
}LIVROS;

typedef struct{
    int topo;
    int capacidade;
    LIVROS *itens;
}PILHA;

PILHA *incicializacao(int size){
    PILHA *pilhas = (PILHA*) malloc (sizeof(PILHA));
    if(pilhas == NULL){
        exit(1);
    }
    
    pilhas->itens = (LIVROS*) malloc(size * sizeof(LIVROS));
    if (pilhas->itens == NULL){
        printf("ERRO (funcao inicializa) -> nao foi possivel alocar espaco na memoria para o vetor de itens!\n");
	    exit(EXIT_FAILURE);
    }
    pilhas->topo = -1;
    pilhas->capacidade=size;
        
    return pilhas;
}

int vazia(PILHA *pilha){
    return pilha->topo == -1;
}


int cheia(PILHA *pilha){
    return pilha->topo == pilha->capacidade-1; 
}

void insere(PILHA *pilha, LIVROS it){
	if (!cheia(pilha)){
		    pilha->itens[++pilha->topo] = it;
	}
	
	else {
		  printf("Pilha cheia\n\n");
    	  exit(EXIT_FAILURE);
	}
}

LIVROS retira(PILHA *pilha){
    if (!vazia(pilha)){
		    return pilha->itens[pilha->topo--];
	}
	printf("Pilha vazia!\n");
  	exit(EXIT_FAILURE);
}

LIVROS topo(PILHA *pilha){
    if (!vazia(pilha)){
     return pilha->itens[pilha->topo];
    }
    printf("Pilha vazia!\n");
  	exit(EXIT_FAILURE);
}



int main(){
    int size,opcao;
    LIVROS it;
    scanf("%d",&size);
    
    PILHA *pilhas;
    
    pilhas = incicializacao(size);
    
    scanf("%d",&opcao);
    
    do{
        if(opcao == 1){
            cheia(pilhas);
            scanf("%s",it.autor);
            scanf("%s",it.nomedelivro);
            scanf("%d",&it.paginas);
            insere(pilhas,it); 
            
        }
    
        else if(opcao == 2){
            if(vazia(pilhas)){
                printf("Pilha vazia!\n");   
            }
            
            else{
                it = retira(pilhas);
                printf("Nome: %s\n",it.autor);
                printf("Autor: %s\n",it.nomedelivro);
                printf("Nro Paginas: %d\n\n",it.paginas);
            }
        
        }
    
        else if(opcao == 3){
            if(vazia(pilhas)){
                printf("Pilha vazia\n\n");   
            }
            
            else{
                it = topo(pilhas);
                printf("Nome: %s\n",it.autor);
                printf("Autor: %s\n",it.nomedelivro);
                printf("Nro Paginas: %d\n\n",it.paginas);
            }
        
        }
    scanf("%d",&opcao);
    }while(opcao !=0);
   

    return 0;
}

