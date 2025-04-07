#include <stdio.h>

int main (){

    char *nomes[] = {"Alice", "Bob", "Carol", "Felipe"};

    for(int i = 0; i < 4; i++)
    {
        printf("%s \n", nomes[i]);
    }

    return 0;
}