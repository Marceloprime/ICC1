#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, m,j,i;

    scanf("%d%d",&m,&n);

    float mat[m][n],v[n],b[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                scanf("%f", &mat[i][j]);


        }
    }
    for(i=0;i<n;i++){
        scanf("%f", &v[i]);
    }
    for(i=0;i<m;i++){
        b[i]=0;
        for(j=0;j<n;j++){
            b[i]+=v[j]*mat[i][j];
        }

        printf("%.6f\n", b[i]);
    }



    return 0;
}
