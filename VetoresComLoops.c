#include <stdio.h>

int main() {
    int vetor [5]; //Declaração de um vetor com 5 elementos
    //Inicialização do vetor com loop 'for'
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; //Atribuindo valores ao vetor
    }

    //Exibindo vetor usando o loop 'for'
    for (int i = 0; i < 5; i++)
    {
        printf("Vetor [%d] = %d\n", i, vetor[i]);
    }
    
    



    return 0;
}