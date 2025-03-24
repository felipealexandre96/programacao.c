#include <stdio.h>
    int main (){
        int numero1;
        int numero2;

        numero1 = 10;
        numero2 = 50;

        if (numero1 > numero2) {
            //Bloco de código a ser executado se a condição for verdadeira
            printf("Número 1 é maior que número 2\n");
        }else {
            //Bloco de código a ser executado se a condição for falsa
            printf("Número 1 é menor que número 2\n");
        }
    }