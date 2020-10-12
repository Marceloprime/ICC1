#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void isPrime(int num, int *v);
void funcao_serie(int num, int *v);
int main(){
    int num;
    scanf("%d",&num);

    int v[num];

    isPrime(num,v);

    funcao_serie(num,v);



return 0;
}

void isPrime(int num, int *v){
    int i,j,flag;

    for(i=0;i<num;i++){
        v[i]=0;
    }
    //v de 0 a 10
    //0 0 2 3 0 5 0 7 0 0

    for(j=2;j<num;j++){
        flag=1;//considera q e primo
        for(i=2;i<= sqrt(j);i++){
            if(j%i==0){
                flag=0;
                v[j]=0;
            }
        }
        if(flag == 1) { //é primo
            v[j] = j;
        }
    }
}

void funcao_serie(int num, int *v){
    int sinal=1,i;
    double series = 0;


    for(i=2;i<num;i++){
        if(v[i] != 0){
            series += (1/(double)i)*sinal;
            sinal*=-1;

        }
    }

    printf("%lf", series);

}

