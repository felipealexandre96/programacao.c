#include <stdio.h>

int main(){

    int a = -10, b = -5;

    //if (a > 0 &&  b > 0) //operador lógico E
    
    if (a > 0 || b > 0){ //operador lógico OU
        printf("Pelo menos um dos números é positivo\n");
    } else {
        printf("Os dois números são negativos\n");
    }


}