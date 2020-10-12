#include <stdio.h>
#include <stdlib.h>
#define  MAX 3

void funcao_lermatriz(char matriz[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%s", &matriz[i][j]);
        }
    }

    return;
}

int ganha(char p){
	if (p == 'x'){
		printf("x ganhou\n");
		return 1;
	}else if (p == 'o'){
		printf("o ganhou\n");
		return 1;
	}
	return 0;
}

void funcao_verifica(char matriz[3][3], int t){
	int aux = 0;
	int estado = 0;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j <3; j++){
			if (matriz[i][j] != '-'){
				aux++;
			}
		}
	}
	for (int i = 0; i < 3; i++){
		if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]){
			estado = ganha(matriz[i][0]);
		}
	}

	for (int j = 0; j < 3; j++){
		if (matriz[0][j] == matriz[1][j] && matriz[1][j] == matriz[2][j]){
			estado = ganha(matriz[0][j]);
		}
	}

	if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]){
		estado = ganha(matriz[0][0]);
	}

	if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]){
		estado = ganha(matriz[0][2]);
	}

	if (estado == 0 && aux == 9){
		printf("empate\n");
	}
	else if (estado == 0 && aux < 9){
		printf("em jogo\n");
	}
}




int main(){
    int t=3;
    char matriz[3][3];
    //ler matriz
    funcao_lermatriz(matriz);
    //decidir quem ganho
    funcao_verifica(matriz,t);



return 0;
}


