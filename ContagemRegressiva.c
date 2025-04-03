#include <stdio.h>

int main(){
    int segundos;

    for(segundos = 10; segundos >= 0; segundos--){
        printf("%d\n", segundos);

        //loop aninhado para simular um atraso
        for(int i = 0; i < 100000000; i++){
            //apenas para simular atraso
        }
    }
    printf("Fogos de artifício\n");


    return 0;
}