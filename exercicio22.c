#include  <stdio.h>
#include <stdlib.h>

int main(){
    int num[10],i;
    float media,soma=0;
    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
        soma+=num[i];
    }
    media=soma/10;
    printf("%.2f", media);








return 0;
}
