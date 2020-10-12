#include <stdio.h>
#include <stdlib.h>


int main(){
    int num[16],i,cont=8,aux;
    for(i=0;i<16;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<16;i++){
        if(num[i]<0){
            num[i]=0;
        }
    }

    for(i=0;i<8;i++){
        aux=num[i];
        num[i]=num[cont];
        num[cont]=aux;
        cont++;
        }

    for(i=0;i<16;i++){
        printf("%d ", num[i]);
    }







return 0;
}
