#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numerosecreto, palpite;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. sair do jogo\n");
    printf("Escolha a opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if(numerosecreto == palpite){
            printf("Você acertou!!!\n");
            printf("Número secreto %d\n", numerosecreto);
        } else {
            printf("Você errou!\n");
            printf("Número secreto %d\n", numerosecreto);
        }
        break;
    case 2:
        printf("Explicação das regras\n");
        printf("Digite a opção relacionada às regras do jogo:\n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1: O número escolhido só pode ser de 0 a 9\n");
            break;
        case 2:
            printf("Regra 2: Se acertar, ganha um prêmio; se errar, paga uma prenda\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
        break; 
    case 3:
        printf("Saindo do jogo\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
}