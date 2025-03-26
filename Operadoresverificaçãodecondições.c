#include <stdio.h>

int main(){

    int idade = 17;
    float altura = 1.75;

    //idade >= 18 => v
    //idade <= 30 => v
    //v && v => v
    //v && altura > 1.70 => v

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem altura adequada\n");
    }else {
        printf("Você não atende aos critérios\n");
    }
}