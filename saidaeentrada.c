#include <stdio.h>
int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("digite sua idade: ");
    scanf("%d", &idade);
    printf("a idade é: %d\n", idade);


    printf("digite sua altura: ");
    scanf("%f", &altura);
    printf("a altura é: %f\n", altura);


    printf("digite sua opcao: ");
    scanf(" %c", &opcao);
    printf("sua opcao é: %c\n", opcao);

    
    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("o nome é: %s", nome);









}