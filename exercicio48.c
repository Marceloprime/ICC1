#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 int num,n,nom,i,j=0;
 scanf("%d", &n);
    n=pow(n,2);
    num=n;

 while(num!=0){
    j++;
    num=num/10;
 }

    for(i=j;i>0;i--){
            nom=n/pow(10,i-1);
    n=n-nom*pow(10,i-1);



               if (nom==0){printf("Zero ");}
            else if (nom==1){printf("Um ");}
            else if (nom==2){printf("Dois ");}
            else if (nom==3){printf("Tres ");}
            else if (nom==4){printf("Quatro ");}
            else if (nom==5){printf("Cinco ");}
            else if (nom==6){printf("Seis ");}
            else if (nom==7){printf("Sete ");}
            else if (nom==8){printf("Oito ");}
            else if (nom==9){printf("Nove ");}
 }









return 0;
}

