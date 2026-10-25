// Considere :

//     typedef struct
// {
//     char nome[50];
//     int idade;
// } Pessoa;

// Crie uma variável do tipo Pessoa e um ponteiro que aponte para essa variável.O programa deverá modificar os dados da pessoa utilizando somente o ponteiro.

//     Exemplo : Pessoa pessoa;
// Pessoa *ptr;

// ptr = &pessoa;

// Utilize o operador->para acessar os campos.ptr->idade = 25;

// Ao final, exiba os valores armazenados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct
{
    char nome[MAX_NOME];
    int idade;
} Pessoa;

int main()
{
    Pessoa pessoa;
    Pessoa *ptr;

    ptr = &pessoa; // Faz o ponteiro apontar para a variável pessoa

    // Solicita os dados ao usuário utilizando o ponteiro
    printf("Digite o nome da pessoa: ");
    fgets(ptr->nome, MAX_NOME, stdin);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &ptr->idade);

    // Exibe os valores armazenados utilizando o ponteiro
    printf("\nDados da pessoa:\n");
    printf("Nome: %s", ptr->nome);
    printf("Idade: %d\n", ptr->idade);

    return 0;
}