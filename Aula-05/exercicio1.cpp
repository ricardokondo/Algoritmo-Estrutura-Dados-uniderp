// Para os exercícios, considere inicialmente uma lista simplesmente ligada de números inteiros representada pela seguinte estrutura :
// typedef struct No
// {
//     int valor;
//     struct No *proximo;
// } No;

// Sempre que necessário, utilize :
// #include <stdio.h>
// #include <stdlib.h>

//     Os exercícios deverão utilizar alocação dinâmica de memória,
//     por meio das funções malloc() e free().

// Desenvolva um programa em C que:
// Declare um ponteiro chamado inicio;
// Inicialize início com NULL;
// Solicite um número inteiro ao usuário;
// aloque dinamicamente um novo nó;
// armazene o número informado no nó;
// Faça início apontar para o novo nó;
// Apresente o valor armazenado.

//     Exemplo
//         Digite um valor : 10

//     Primeiro elemento da lista : 10

//     Ao final,
//     libere a memória utilizada.

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct No
{
    int valor;
    struct No *proximo;
} No;

int main()
{

    No *inicio = NULL; // Inicializa o ponteiro inicio com NULL

    int numero;
    printf("Digite um valor: ");
    scanf("%d", &numero); // Solicita um número inteiro ao usuário

    // Aloca dinamicamente um novo nó
    No *novo_no = (No *)malloc(sizeof(No));
    if (novo_no == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    novo_no->valor = numero; // Armazena o número informado no nó
    novo_no->proximo = NULL; // O próximo nó é NULL, pois é o único nó na lista

    inicio = novo_no; // Faz inicio apontar para o novo nó

    printf("Primeiro elemento da lista: %d\n", inicio->valor); // Apresenta o valor armazenado

    free(novo_no); // Libera a memória utilizada

    return 0;
}