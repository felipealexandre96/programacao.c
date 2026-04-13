#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRING 100

struct Livro{
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora [TAM_STRING];
    int edicao;
};

void limparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    do{
        printf("===================================\n");
        printf("    Biblioteca - parte 1\n");
        printf("===================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livro\n");
        printf("0 - Sair\n");
        printf("------------------------------------\n");
        printf("Escolha uma opção: \n");

        scanf("%d", &opcao);
        limparBufferEntrada();

        switch(opcao){
            case 1:
            printf("---Cadastro de novo livro---\n\n");

            if(totalLivros < MAX_LIVROS){
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("Digite o autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite a editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] =
            }
        }
    }
}