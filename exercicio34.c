#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int ocorrencias(char palavra[], char letra,int i, int *repeticao){
    if(palavra[i] == '\0'){
        return 0;
    }

    if(palavra[i]==letra){
        (*repeticao)++;
    }
     i++;
    ocorrencias(palavra, letra,i,repeticao);

return *repeticao;
}

int main(){
    int repeticao=0,i=0;
    char palavra[MAX];
    char letra;

    scanf("%s",palavra);
    getchar();
    scanf("%c",&letra);



    ocorrencias(palavra,letra,i,&repeticao);

    printf("%d", repeticao);

    return 0;
}
