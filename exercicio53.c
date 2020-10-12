#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main(){
    int i,flag=1,j;
    char palavra[MAX];
    fgets(palavra, MAX,stdin);
    for(i=0;palavra[i]!='\n';i++){
        palavra[i]=toupper(palavra[i]);

    }

    for(j=0,i=i-1;i>j;j++,i--){
            if(palavra[j]!=palavra[i]){
                flag=0;
            }


    }
    if(flag==1){
        printf("SIM");
    }
    else(printf("NAO"));










return 0;
}
