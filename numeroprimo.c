#include <stdio.h>

int ehprimo(int n) {
    if (n <= 1) return 0; //0 e 1 não são primos
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; //se n é divisivel por i, não é primo
    }
    return 1; //se não foi encontrado nenhum divisor, é primo
}

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(ehprimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}