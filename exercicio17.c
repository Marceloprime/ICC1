#include <stdio.h>
#include <math.h>

int main (){
    int n;
    scanf("%d", &n);

      if((n%4==0 && n%100!=0) || (n%400==0 && n%100!=0)){
       printf("Este ano eh bissexto.\n");
        }
     else( printf("Este ano nao eh bissexto.\n"));











return 0;
}
