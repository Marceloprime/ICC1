#include <stdio.h>
#include <stdlib.h>

void funcao_vetores(float v[3],float min, float max);
void funcao_produtovetorial(float v[3],float w[3], float u[3]);
void funcao_soma(float v[3],float w[3], float u[3]);
void funcao_produtoescalar(float v[3],float u[3]);

int main(){

    float u[3],v[3],w[3];
    int seed;
    int t,opcao, i;
    float min,max;

    for(i =0; i<3; i++){
        w[i]=0;
    }

    scanf("%d",&t);
    scanf("%d",&seed);
    srand(seed);
    scanf("%f",&min);
    scanf("%f",&max);

    while(t!=0){
        scanf("%d",&opcao);

        switch (opcao){
            case 1:
             //   printf("%p\n", u);
                funcao_vetores(u,min,max);
              //  printf("%f %f %f\n",u[0],u[1],u[2]);
                //printf("%p\n", v);
                funcao_vetores(v,min,max);
                //printf("%f %f %f\n",v[0],v[1],v[2]);
                funcao_soma(v,w,u);
                break;
            case 2:
                funcao_vetores(u,min,max);
                funcao_vetores(v,min,max);
                funcao_produtovetorial(v,w,u);
                break;
            case 3:
                funcao_vetores(v,min,max);
                funcao_produtoescalar(v,u);

       }
      t--;
   }

    return 0;
}


void funcao_vetores(float v[3],float min, float max){
    int i;
    float x ;
    //printf("%p\n", v);
    for(i=0;i<3;i++){
        x = rand()/(float)RAND_MAX;
        v[i]=min+((x)*(max-min));
    }

}


void funcao_produtovetorial(float v[3],float w[3], float u[3]){
     printf("%f %f %f\n",u[0],u[1],u[2]);
    printf("%f %f %f\n",v[0],v[1],v[2]);
    w[0]=u[1]*v[2]-u[2]*v[1];
    w[1]=u[2]*v[0]-u[0]*v[2];
    w[2]=u[0]*v[1]-u[1]*v[0];
    printf("%f %f %f\n",w[0],w[1],w[2]);
}

void funcao_soma(float v[3],float w[3], float u[3]){
    printf("%f %f %f\n",u[0],u[1],u[2]);
    printf("%f %f %f\n",v[0],v[1],v[2]);
    w[0]=u[0]+v[0];
    w[1]=u[1]+v[1];
    w[2]=u[2]+v[2];
    printf("%f %f %f\n",w[0],w[1],w[2]);
}

void funcao_produtoescalar(float v[3],float u[3]){
    float a;
    scanf("%f",&a);
    printf("%f %f %f\n",v[0],v[1],v[2]);
    u[0]=a*v[0];
    u[1]=a*v[1];
    u[2]=a*v[2];
    printf("%f %f %f\n",u[0],u[1],u[2]);
}
