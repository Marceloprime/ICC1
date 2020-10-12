#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 70

//Estrutura -MOdelo de registro dos alunos;
typedef struct{
    char nome[MAX];
    char curso[MAX];
    int idade;
    int numeroUSP;

}DADOS_ALUNOS_USP;

//protipos de funcoes:
void idetificacao(int numerousp, DADOS_ALUNOS_USP registro[],int size );
void  nome_do_curso(DADOS_ALUNOS_USP registro[], int size,char temp[]);
void  impressao(DADOS_ALUNOS_USP registro[], int size);

//*****************************************************************************************************
int main (){
    DADOS_ALUNOS_USP registro[MAX];
    int i=0,opcao,numerousp,size=0;
    char temp[MAX];
    scanf("%d",&(registro[i].numeroUSP));

    while(registro[i].numeroUSP != -1){
        scanf("\n%[^\n]s",registro[i].nome);
        scanf("\n%[^\n]s",registro[i].curso);
        scanf("%d\n",&(registro[i].idade));

        i++;
        size++;

        scanf("%d\n",&registro[i].numeroUSP);
    };

    scanf("%d",&opcao);

    while(opcao != -1){
        if(opcao == 1){
            scanf("%d",&numerousp);
            idetificacao(numerousp,registro,size);
        }

        else if(opcao == 2){
            scanf("%[^\n]s",temp );
            nome_do_curso(registro,size,temp);
        }
	
    	else if(opcao == 3){
    		impressao(registro,size);
    		
    	}
    	
    	else{
    		exit(1);
    	}
    	scanf("%d",&opcao);

    }

    return 0;
}


//função responsavel por verificar o numero usp e mostrar o cadastro respectivamente;
void idetificacao(int numerousp, DADOS_ALUNOS_USP registro[],int size){
    int i;
    for(i=0;i<size;i++){
        if(registro[i].numeroUSP == numerousp){
            printf("Nome: %s\n",registro[i].nome);
            printf("Curso: %s\n",registro[i].curso);
            printf("N USP: %d\n",registro[i].numeroUSP);
            printf("IDADE: %d\n\n",registro[i].idade);

        }
    }
}
void  nome_do_curso(DADOS_ALUNOS_USP registro[], int size,char temp[]){
    int i,aux;
    for (i=0;i<size;i++){
        aux = strcmp(registro[i].curso,temp);
        if (aux == 0){
            printf("Nome: %s\n",registro[i].nome);
            printf("Curso: %s\n",registro[i].curso);
            printf("N USP: %d\n",registro[i].numeroUSP);
            printf("IDADE: %d\n\n",registro[i].idade);
        }
    }
}


void  impressao(DADOS_ALUNOS_USP registro[], int size){
    int i;
    for (i=0;i<size;i++){
        printf("Nome: %s\n",registro[i].nome);
        printf("Curso: %s\n",registro[i].curso);
        printf("N USP: %d\n",registro[i].numeroUSP);
        printf("IDADE: %d\n\n",registro[i].idade);
      
    }
}
