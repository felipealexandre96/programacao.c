#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor1, valor2;
    float soma, subtracao, divisao, multiplicacao;
    int escolha;
    int i = 0;

    while(i == 0) {
        printf("    CALCULADORA   \n");
        printf("Indique a operação desejada:\n");
        printf("1) Soma.       \n");
        printf("2) Subtração.    \n");
        printf("3) Divisão.     \n");
        printf("4) Multiplicação.     \n");
        printf("               \n");
        printf("Digite 5 para sair.    \n");
        scanf("%d", &escolha);

        if(escolha == 5) {
            exit(0);
        } else {
            if(escolha < 1|| escolha > 5) {
                printf("Digite um valor válido. \n");
                system("Pause");
                system("cls");
            } else {
                printf("Digite o primeiro valor: ");
                scanf("%f", &valor1);
                printf("Digite o segundo valor: ");
                scanf("%f", &valor2);

                if(escolha == 1) {
                    soma = valor1 + valor2;
                    printf("%.2f + %.2f = %.2f", valor1, valor2, soma);
                    system("Pause");
                    system("cls");
                } else if(escolha == 2) {
                    subtracao = valor1 - valor2;
                    printf("%.2f - %.2f = %.2f", valor1, valor2, subtracao);
                    system("Pause");
                    system("cls");
                } else if(escolha == 3) {
                    if(valor2 == 0) {
                        printf("Impossível a divisão por zero(0). \n");
                        system("Pause");
                        system("cls");
                    } else {
                        divisao = valor1 / valor2;
                        printf("%.2f / %.2f = %.2f", valor1, valor2, divisao);
                        system("Pause");
                        system("cls");
                    
                    } 
                }

                else if(escolha == 4) {
                    multiplicacao = valor1 * valor2;
                    printf("%.2f * %.2f = %.2f", valor1, valor2, multiplicacao);
                    system("Pause");
                    system("cls");
                }

                
            }
        }
    }
}
