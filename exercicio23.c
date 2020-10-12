#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,j;
    float m[3][3],det;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%f", &m[i][j]);
        }
    }
    det=((m[0][0]*m[1][1]*m[2][2])+(m[0][1]*m[1][2]*m[2][0])+(m[0][2]*m[1][0]*m[2][1]))-((m[2][0]*m[1][1]*m[0][2])+(m[2][1]*m[1][2]*m[0][0])+(m[2][2]*m[1][0]*m[0][1]));
    for (i =0; i <3; i++){
    for (j =0; j <3; j++){
        printf("%f ", m[i][j]);
    }
    printf("\n");
 }
    printf("\n%lf", det);






return 0;
}
