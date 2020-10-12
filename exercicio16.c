#include <stdio.h>

int main (){
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
    if(a<b && a<c && b<c){
        printf("Ordem crescente: %lf %lf %lf\n", a, b, c);
    }
    if(b<a && b<c && a<c){
        printf("Ordem crescente: %lf %lf %lf\n", b, a, c);
    }
    if(c<b && c<a && b<a){
        printf("Ordem crescente: %lf %lf %lf\n", c, b, a);
    }
    if(a<c && a<b && c<b){
        printf("Ordem crescente: %lf %lf %lf\n", a, c, b);
    }
    if(b<a && b<c && c<a){
        printf("Ordem crescente: %lf %lf %lf\n", b, c ,a);
    }
     if(c<a && c<b && b<a){
        printf("Ordem crescente: %lf %lf %lf\n", c, a ,b);
    }









return 0;
}
