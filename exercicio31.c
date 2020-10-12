#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int a);
void fncao_calculatriangulo( int linhas);
int main(){
    int linhas;
    scanf("%d",&linhas);
    fncao_calculatriangulo(linhas);


return 0;
}

void fncao_calculatriangulo( int linhas){
    int i, j,soma=0;
    double produto=1;
    int vector[linhas];
    vector[0]=1;

    for(i=0;i<linhas;i++){
        vector[i]=fact(linhas-1)/(fact(i)*fact((linhas-1)-i));
        printf("%d ",vector[i]);

    }

    for(i=0;i<linhas;i++){
        soma+=pow(2,i);
    }

    for(j = 2;j<linhas;j++){
        for(i=1;i<=j;i++){
            produto*=fact(j)/(fact(i)*fact(j-i));

        }
    }




    printf("\n%d %.0lf", soma, produto);
}

int fact(int a){
    int i, fat = 1;
    if(a==0){
        return 1;
    }
    for(i = a; i > 1; i--){
        fat *= i;
    }
    return fat;
}
