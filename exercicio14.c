#include <stdio.h>
#include <math.h>

int main(){
    int num,s=1,n=0,r;
    scanf("%d", &num);
    if(num==2){
        printf("%d", s);
    }
      if(num==1){
        printf("%d", s);
    }
      if(num==0){
        printf("%d", n);
    }
        if(num>2){
          r=( pow((1+sqrt(5))/2,num)- pow((1-sqrt(5))/2,num))/sqrt(5);
          printf("%d", r);

        }










return 0;
}
