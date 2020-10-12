#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int valor, N1, N5,  N10, N50, N100;
    scanf("%d", &valor);
    N100=valor/100;
    valor=valor%100;
    N50=valor/50;
    valor=valor%50;
    N10=valor/10;
    valor=valor%10;
    N5=valor/5;
    valor=valor%5;
    N1=valor/1;



printf("%03d notas de 100.00\n",N100);
printf("%03d notas de 50.00\n",N50);
printf("%03d notas de 10.00\n",N10);
printf("%03d notas de 5.00\n",N5);
printf("%03d notas de 1.00\n",N1);






return 0;
}




