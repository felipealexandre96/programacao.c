#include <stdio.h>

int main(){
    char variavel;

    printf("Digite um valor: \n");
    scanf("%c", &variavel);

    switch (variavel) {
    case 'a':
        printf("Código a ser executado se variavel == a\n");
        printf("Teste do case 1\n");
    break;
    case 'b':
        printf("Código a ser executado se variavel == b\n");
    break;
    
    default:
        printf("Código a ser executado se variavel não for a ou b\n");
    
    }
}