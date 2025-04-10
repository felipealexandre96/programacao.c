#include <stdio.h>

int main(){
    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int evencount = 0, oddcount = 0;
    for(int i = 0; i < 3; i++) { //loop externo para as linhas
        for(int j = 0; j < 3; j++) { //loop interno para as colunas
            if(matriz[i][j] % 2 == 0) {
                evencount++; //incrementa o contador de pares
            } else {
                oddcount++; //incrementa o contador de impares
            }
        }
    }

    //impressão dos resultados
    printf("Número de elementos pares: %d\n", evencount);
    printf("Números de elementos impares: %d\n", oddcount);



    return 0;
}