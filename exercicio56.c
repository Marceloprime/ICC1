#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 70


int main(){
    FILE *arq =fopen("QuePaiseEste.txt","r");
    if(arq == NULL){
        exit(1);
    }
    int ocor1=0,ocor2=0;

    char aux[MAX],*palavra1,*palavra2;
    scanf("%s",aux);
    palavra1 = (char*) malloc ((strlen(aux)+1)*sizeof(char));
    strcpy(palavra1,aux);

    scanf("%s",aux);
    palavra2 = (char*) malloc ((strlen(aux)+1)*sizeof(char));
    strcpy(palavra2,aux);

    while(fscanf(arq,"%s",aux) != EOF){
        if(strcmp(palavra1,aux) == 0){
            ocor1++;
        }
        else if(strcmp(palavra2,aux) == 0){
            ocor2++;
        }
    }

    printf("%s %d %s %d\n", palavra1,ocor1, palavra2,ocor2);


    return 0;
}
