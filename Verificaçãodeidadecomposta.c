#include <stdio.h>
    int main(){
        /*se a idade for 18 ou mais, o programa imprime 'você é maior de idade'.
          No nosso exemplo, 20 é maior que 18, então a mensagem será exibida*/

          int idade = 50;

          if(idade >= 18) {
            //condição verdadeira
            printf("Você é maior de idade\n");
          } else {
            //condição falsa
            printf("Você é menor de idade\n");
          }
          
    }