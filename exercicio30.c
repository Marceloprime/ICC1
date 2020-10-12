#include <stdlib.h>
#include <stdio.h>

void funcao_algo(int n,int vector[],int valor){
int i=0;
while(i<n && vector[i]!=valor){
    i=i+1;
}
    if(vector[i]==valor){
        printf("%d ",i);
   }
      else
        printf("0");

}
int main()
{
   int n,min,max,i,valor,seed;

    scanf("%d",&n);
    int vector[n];
    scanf("%d", &min);
    scanf("%d",&max);
    scanf("%d",&valor);
    seed=(n+min+max);
    srand(seed);
       if((valor >= min && valor <= max)){

           for(i=0;i<n;i++){
               vector[i] = min + rand()%(max-min);
	   printf("%d ", vector[i]);
           }
        printf("\n");
           funcao_algo(n,vector,valor);
    }
    else
        printf("-1");
    return 0;



    return 0;
}
