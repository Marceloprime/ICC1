#include <stdio.h>

int main (){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if (a+b<c || a+c<b || b+c<a){
        printf ("Valores nao formam um triangulo\n");
    }
    if(a==b && b==c && a==c){
            printf("Triangulo Equilatero\n");

    }
    if(a==b && a!=c )  {
        printf("Triangulo Isosceles\n");

    }

    if (b==c && b!=a){
            printf("Triangulo Isosceles\n");

    }
    if (a==c && c!=b){
             printf("Triangulo Isosceles\n");


    }
    if (a!=b && b!=c && a!=c && a+b>c && a+c>b && b+c>a )
        {printf("Triangulo Escaleno\n");
        }













return 0;
}
