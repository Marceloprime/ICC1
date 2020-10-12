#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
    int i,j;
    char palavras[MAX],p,pala1[MAX];
    fgets(palavras,MAX,stdin);
    scanf("%c", &p);
    for(i=0,j=0;palavras[i]!='\0';i++){
        if(p!=palavras[i] && (p-32)!=palavras[i]){
            pala1[j]=palavras[i];
            j++;
            }
        }
        pala1[j]='\0';
        printf("%s", pala1);




return 0;
}
