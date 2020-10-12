#include <stdio.h>
#include <stdlib.h>

void fncao_calcula(float matriz[][3]);
int main(){
    float matriz[2][3];
    int i,j;

    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%f",&matriz[i][j]);
        }
    }

    fncao_calcula(matriz);





return 0;
}

void fncao_calcula(float matriz[][3]){
    float aux;
    float y,x;

    if(matriz[0][0]==0){

        if(matriz[1][1]==0 && matriz[1][2]==0){
            printf("SPI");
        }
        else if(matriz[0][1]==0 || matriz[1][0]==0){
            printf("SI");
        }
        else{
            y=matriz[0][2]/matriz[0][1];

            x=(matriz[1][2]-matriz[1][1]*y)/matriz[1][0];

            printf("SPD\n%.2f %.2f",x,y);
        }
    }
    else {

        aux=matriz[1][0]/matriz[0][0];

        matriz[1][0]-=matriz[0][0]*aux;
        matriz[1][1]-=matriz[0][1]*aux;
        matriz[1][2]-=matriz[0][2]*aux;

        if(matriz[1][1]==0 && matriz[1][2]==0){
            printf("SPI");
        }
        else if(matriz[1][1]==0){
            printf("SI");
        }
        else {
            y=matriz[1][2]/matriz[1][1];

            x=(matriz[0][2]-matriz[0][1]*y)/matriz[0][0];

            printf("SPD\n%.2f %.2f",x,y);
        }
    }
}






