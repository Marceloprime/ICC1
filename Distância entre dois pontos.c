#include <stdio.h>
#include <math.h>

    int main(){
 float x1,y1,x2,y2 ,d;
 scanf("%f%f", &x1, &y1);
 scanf ("%f%f", &x2, &y2);
 d=sqrt (((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
 printf("%06f", d);

return 0;

}
