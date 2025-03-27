#include <stdio.h>

int main(){
    int nota;

    printf("Digite sua nota:\n");
    scanf("%d", &nota);

    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //F

    if (nota >= 90){
        printf("Conceito A!\n");
    } else if (nota >= 80){
        printf("Conceito B!\n");
    } else if (nota >= 70){
        printf("Coneito C!\n");
    } else if (nota >= 60){
        printf("Conceito D!\n");
    } else {
        printf("Conceito F!\n");
    }
}