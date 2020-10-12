#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][5],vetor[5],soma=0,i,j;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j=0;j<5;j++){
        soma=0;
        for(i=0;i<4;i++){
            soma+=matriz[i][j];
        }
        vetor[j]=soma;
    printf("%d ", vetor[j]);
    }







return 0;
}
