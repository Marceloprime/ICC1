#include <stdio.h>
#include <stdlib.h>

int funcao_soma(int num, int *soma);
void fatorial(int num,int  *fat );
int funcao_fino(int num,int *fino);

int main(){
    int num,soma=0,fat=1,fino=0;
    char opcao;
    scanf("%d %c",&num,&opcao);

    if(opcao=='+'){
       funcao_soma(num,&soma);
       printf("%d",soma);
    }

    if(opcao=='!'){
       fatorial(num,&fat );
       printf("%d",fat);
    }

    if(opcao=='f'){
        funcao_fino(num,&fino);
        printf("%d",fino);
    }


return 0;
}

int funcao_soma(int num, int *soma){
    if(num==0){
        return 0;
    }
    (*soma)+=num;

   return funcao_soma(--num,soma);
}

void fatorial(int num,int  *fat ){
    if(num<2){
        return;
    }
    else{
        (*fat)*=num;
    }
    fatorial(--num,fat );

}

int funcao_fino(int num,int *fino){
    if(num==0){
        return *fino=0;
    }
    if(num==1){
        return *fino=1;
    }
    return *fino=funcao_fino(num-1,fino)+ funcao_fino(num-2,fino);
}




