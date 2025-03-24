#include <stdio.h>

    int main (){
        //Declarei as variáveis
        float temperatura, umidade;
        unsigned int estoque, estoqueminimo = 1000;

        //Entrei com os valores
        printf("Entre com a temperatura: \n");
        scanf("%f", &temperatura);
        printf("Entre com a umidade: \n");
        scanf("%f", &umidade);
        printf("Entre com o estoque: \n");
        scanf("%u", &estoque);

        //Testei temperatura
        if (temperatura > 30){
            printf("Temperatura está alta.\n");
        } else {
            printf("Temperatura está dentro dos parâmetros.\n");
        }

        //Testei umidade
        if (umidade > 50){
            printf("Umidade elevada.\n");
        } else {
            printf("Umidade está dentro dos parâmetros.\n");
        }

        //Testei estoque
        if (estoque < estoqueminimo){
            printf("Estoque abaixo do mínimo!\n");
        } else {
            printf("Estoque normal!\n");
        }


    }