#include <stdio.h>
#include <stdlib.h>


void fatorial(int a,int  *fat ){
    if(a<2){
        return;
    }  
    else{
        (*fat)*=a;
        a--;
    }
    fatorial(a,fat );
    
}

int main (){
    int a,b,fat=1,*vector,i=0,j;
    scanf("%d%d",&a,&b);
    j=b;
    
    vector=(int *) malloc(b*(sizeof(int)));
    while(b>0){
         fat=1;
         fatorial(a,&fat );
         vector[i]=fat;
         b--;
         a++;
         i++;   
    }
    
    for(i=0;i<j;i++){
        printf("%d ",vector[i]);
    }
    
return 0; 
}
