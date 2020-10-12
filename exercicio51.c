#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,i,j;

    scanf("%d%d", &a,&b);
    float matriz[a][b],transposta[b][a];


    for(i=0;i<a;i++){
        for (j=0;j<b;j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            transposta[j][i]=matriz[i][j];
        }
    }

    for( i =0; i<a; i++){
        for( j =0; j<b; j++){
            printf( "%.6f " , matriz[i][j] );
        }
        printf( "\n" );
    }
    printf( "\n" );


    for( i =0; i<b ; i++){
        for( j =0; j<a; j++){
            printf( "%f " , transposta[i][j] );
        }
        printf( "\n" );
    }


return 0;
}
