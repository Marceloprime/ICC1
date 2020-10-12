#include<stdio.h>

int main(){
    double imc;
    double altura, peso;
    scanf("%lf%lf", &altura, &peso);
    imc= peso / (altura * altura);
    printf("%lf", imc );



    return 0;
}

