#include<stdio.h>
#include<locale.h> //pq tem setlocale
#include<math.h> //pq vou usar potência e raiz quadrada

int main(){
    float a, b, c, delta, x1, x2;
    setlocale(LC_ALL, "Portuguese");

    printf("A = \n");
    scanf("%f", &a);
    printf("B = \n");
    scanf("%f", &b);
    printf("C = \n");
    scanf("%f", &c);

    //Se a=0, "Não é uma equação do segundo grau"
    if(a==0){
        printf("Não é uma equação do segundo grau");
        return 0;
    }

    delta = pow(b,2) - 4*a*c;
    if(delta < 0){
        printf("Não existem raízes reais");
        return 0;
    }

    if(delta == 0) {
        x1 = ( (-b +sqrt(delta)) / 2*a);
        printf("A única raiz é: %.1f", x1);
    } else{
        x1 = ( (-b +sqrt(delta)) / 2*a);
        x2 = ( (-b -sqrt(delta)) / 2*a);
        printf("As raízes são: %.1f e %.1f", x1, x2);
    }


    return 0;
}