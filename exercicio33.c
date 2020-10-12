#include <stdlib.h>
#include <stdio.h>
void binary(int *vector, int n, int i);

int main(){
    int n,*vector,i,j=0;
    scanf("%d",&n);
    if(n<0){
        j=1;
        n=(n*(-1))-1;
    }
    vector=(int *) calloc (8,sizeof(int));

    /*while(n>0){
        vector[i]=n%2;
        n/=2;
        i--;
        printf("%d %d\n",n,i);
    }*/
    binary(vector, n, 7);

    if(j==1){

        for(i=0;i<8;i++){
            if(vector[i]==1){
                vector[i]=0;
            }
            else{
                vector[i]=1;
            }
        }
    }
    for(i=0;i<8;i++){
         printf("%d",vector[i]);
    }

return 0;
}

void binary(int *vector, int n, int i){
    if(n==0){
        return;
    }
       vector[i]=n%2;

        binary(vector,n/2,--i);
}




