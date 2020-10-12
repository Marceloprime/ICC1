#include <stdio.h>
#include <stdlib.h>
#define  MAX 12

//Os fracos vão enlouquecer os fortes.

void funcao_planetaria(int segundos);
void funcao_venus(int segundos);
void funcao_jupiter(int segundos);
void funcao_mecurio(int segundos);

int main(){
    int segundos;
    char palavra[MAX];

    scanf("%d",&segundos);
    fgets(palavra,MAX,stdin);

    if(palavra[1]=='T'){
        funcao_planetaria(segundos);
    }
    else if(palavra[1]=='V'){
        funcao_venus(segundos);
    }
    else if(palavra[1]=='J'){
        funcao_jupiter(segundos);
    }
    else if(palavra[1]=='M'){
        funcao_mecurio(segundos);
    }

    return 0;
}

void funcao_planetaria(int segundos){
    int diat,horat,minutost,segundost1;

    diat=segundos/86400;
    horat=(segundos%86400)/3600;
    minutost=((segundos%86400)%3600)/60;
    segundost1=((segundos%86400)%60)%60;


    printf("%d segundos no planeta Terra equivalem a:\n%d dias, %d horas, %d minutos e %d segundos",segundos,diat,horat,minutost,segundost1);
}

void funcao_venus(int segundos){
    int diav,horav,minutosv,segundosv1;

    diav=(segundos/20995200);
    horav=(segundos%20995200)/3600;
    minutosv=((segundos%20995200)%3600)/60;
    segundosv1=((segundos%20995200)%60)%60;

    printf("%d segundos no planeta Venus equivalem a:\n%d dias, %d horas, %d minutos e %d segundos",segundos,diav,horav,minutosv,segundosv1);
}

void funcao_jupiter(int segundos){
    int diaj,horaj,minutosj,segundosj1;

    diaj=(segundos/35760);
    horaj=(segundos%35760)/3600;
    minutosj=((segundos%35760)%3600)/60;
    segundosj1= ((segundos%35760)%60)%60;

    printf("%d segundos no planeta Jupiter equivalem a:\n%d dias, %d horas, %d minutos e %d segundos",segundos,diaj,horaj,minutosj,segundosj1);
}


void funcao_mecurio(int segundos){
    int diam,horam,minutosm,segundosm1;

    diam=segundos/5068800;
    horam=(segundos%5068800)/3600;
    minutosm=((segundos%5068800)%3600)/60;
    segundosm1=((segundos%5068800)%60)%60;

    printf("%d segundos no planeta Mercurio equivalem a:\n%d dias, %d horas, %d minutos e %d segundos",segundos,diam,horam,minutosm,segundosm1);

}
