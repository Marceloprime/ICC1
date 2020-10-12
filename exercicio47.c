#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if (180!=a+b+c){
        printf ("Valores nao formam um triangulo\n");
    }
    else if (a==90 || b==90 || c==0){
        printf("Triangulo retangulo");

    }

    else if (a>90 || b>90 || c>90){
        printf("Triangulo obtuso");

    }

    else if (a<90 || b<90 || c<90){
        printf("Triangulo agudo");

    }







return 0;
}
