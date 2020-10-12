#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    if (5<=n && n<=7){
        printf("Infantil A");
    }
    else if (8<=n && n<=10){
        printf("Infantil B");
    }
    else if (11<=n && n<=13){
        printf("Juvenil A");
    }
    else if (14<=n && n<=17){
        printf("Juvenil B");
    }
    else if (18<=n){
        printf("Adulto" );
    }






return 0;
}

