#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia_atual, mes_atual, ano_atual;
    int idade;
    int dia_nascimento, mes_nascimento, ano_nascimento;

    scanf("%d%d%d", &dia_nascimento, &mes_nascimento, &ano_nascimento);
    scanf("%d%d%d", &dia_atual, &mes_atual, &ano_atual);

    idade = ano_atual - ano_nascimento;



    if(mes_atual < mes_nascimento){
        idade--;
    }
    else if(mes_atual == mes_nascimento && dia_atual < dia_nascimento){
        idade--;
    }

    printf("%d",idade);

    return 0;
}
