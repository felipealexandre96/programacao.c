#include <stdio.h>
#include <unistd.h>

int contador;

void funcao_A(void) {
    while (1) { // loop infinito
        printf("Para a função A contador = %d.\n", contador);
        usleep(3000000); //dorme 3 segundos.
}
}

void funcao_B(void){
    while (1) {// loop infinito.
        printf("Função B incrementando contador.\n");
        contador = contador + 1; //incrementa contador
        printf("Para função B contador = %d.\n", contador);
        usleep(3000000); //dorme 3 segundos.
        
    }
}

void main(void) {
    int pid;
    contador = 0; //inicializa contador.
    pid = fork(); //processo se divide em dois.
    if (pid == 0)
    {
        funcao_A(); //se pid igual a zero executa o código da função A. 
    } else{
        funcao_B(); //se pid diferente de zero executa o código da função B.
    }
    
}