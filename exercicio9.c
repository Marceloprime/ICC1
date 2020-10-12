#include <stdio.h>
#include <math.h>

int main(){
    double X, soma, fat = 1.0;
    int N;

    scanf("%lf%d", &X, &N);

    soma = X;

    int i;
    for(i = 1; i < N; i++){
        fat=1.0;
        int j;
        for(j = 2; j <= (i*2)+1; j++){
            fat *= j;
        }

        if(i%2 == 1){
            soma -= pow(X, (i*2))/fat;
        }
        else{
            soma += pow(X, (i*2))/fat;
        }
    }

    printf("%.6lf", soma);

    return 0;
}
