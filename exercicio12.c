#include <stdio.h>
#include <string.h>

int main(){
    float x,max,min;
    int y;

    scanf("%f", &x);
    min=x;
    max=x;

    for(y=1;y<10;y++){
        scanf("%f", &x);

        if(x<min){
            min=x;
        }
        if (x>max){
             max=x;
        }
    }

    printf("%.2f\n", min);
    printf("%.2f\n", max);

return 0;
}
