#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, delta, x1, x2;

    printf("Digite as incognitas da sua equação:\n");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);

    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if(delta == 0){
        printf("Raiz única\n");
        printf("X1 = %d\n", x1);
    } else if(delta < 0){
        printf("Raízes imaginárias\n");
    } else if(delta > 0){
        printf("Raízes distintas\n");
        printf("X1 = %d\n", x1);
        printf("X2 = %d\n", x2);
    }



    return 0;
}