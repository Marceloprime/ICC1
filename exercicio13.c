#include <stdio.h>
#include <stdlib.h>

int main(){
    int  a,b,c,d,soma=0;
    scanf("%d%d%d%d", &a, &b, &c, &d);

        if (a % 2 == 0) {
            soma=soma+a;
        }
        if (b % 2 == 0){
            soma=soma+b;
        }
        if (c % 2 == 0) {
            soma=soma+c;
        }
        if (d % 2 == 0){
            soma=soma+d;
        }

        printf("A soma dos numeros pares = %d", soma);
















return 0;
}

