#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100


int main(){
    int num[MAX],i,menor=INT_MAX,maior=0,j;
    scanf("%d\n",&j);
    for(i=0;i<j;i++){
    scanf("%d", &num[i]);
    }

    for(i=0;i<j;i++){
        if(num[i]>maior){
            maior=num[i];
        }
    }
    for(i=0;i<j;i++){
        if(num[i]<menor){
            menor=num[i];
        }
    }
            printf("%d %d", maior, menor);

return 0;
}


