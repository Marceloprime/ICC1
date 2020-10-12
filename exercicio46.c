#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num[10],maior=0,dif,i;

    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
    }
    for(i=0;i<9;i++){
        dif=num[i]-num[i+1];
        dif=abs(dif);
        if(maior<dif){
            maior=dif;

        }

    }
    printf("%d", maior);












return 0;
}
