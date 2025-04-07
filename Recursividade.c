#include <stdio.h>

void recursivo (int numero){
    if (numero > 0){
        printf("%d \n", numero); //com o printf aparecendo primeiro, vai em ordem decrescente

        recursivo(numero - 1);
        //printf("%d\n", numero); //com o printf aparecendo depois, vai em ordem crescente
    }
}

int main(){

    int quantidade = 10;
    printf("Contagem regressiva\n");
    recursivo(quantidade);




    return 0;
}