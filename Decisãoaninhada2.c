#include <stdio.h>

int main(){
    int idade, dependentes;
    float renda;

    //A primeira condição idade do usuário entre 18 e 65 anos
    //A segunda condição se a renda do usuário é menor que 3000
    //A terceira condição verifica se o número de dependentes é maior que 2

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua renda:\n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes:\n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <65){
        if (renda < 3000){
            if (dependentes > 2){
                printf("Você atende a todos od critérios\n");
            } else {
                printf("Você não atende ao critério dependente");
            }
        } else {
            printf("Você não atende ao critério renda\n");
        }
    } else {
        printf("Você não atende ao critério idade\n");
    }
}