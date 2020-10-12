#include <stdio.h>
#include <stdlib.h>

int funcao_maior(int num[]);
int funcao_menor(int num[]);
int funcao_moda(int num[]);
float funcao_media(int num[]);

int main(){
    int num[10],i,maior,menor,moda;
    float media;


    for(i=0;i<10;i++){
        scanf("%d", &num[i]);
    }
    maior=funcao_maior(num);


    menor=funcao_menor(num);

    media=funcao_media(num);

    moda=funcao_moda(num);

 printf("%d %d %.2f %d", maior, menor, media, moda);

return 0;
}





 int funcao_maior(int num[]){
     int i,maior;

    for(i=0,maior=num[0];i<10;i++){

        if(num[i]>maior){
            maior=num[i];
        }
    }
        return maior;
}



  int funcao_menor(int num[]) {
      int menor,i;

   for(i=0,menor=num[0];i<10;i++){

        if(num[i]<menor){
            menor=num[i];
        }
   }
   return menor;
}

   float funcao_media(int num[]){
       int soma=0,i;
       float media;
       for(i=0;i<10;i++){
       soma+=num[i];

   }
    media=(float)soma/10;


  return media;
   }

   //achar moda
   int funcao_moda(int num[]){
       int moda[2],count,i,j;
        moda[1]=0;
        moda[0]=0;


       for(i=0;i<10;i++){
      for(j=0,count=0;j<10;j++){
            if(num[i]==num[j]){
                count++;

            }
      }

        if(count>moda[1]){
            moda[0]=num[i];
            moda[1]=count;

        }

    }
    return moda[0];
    }
