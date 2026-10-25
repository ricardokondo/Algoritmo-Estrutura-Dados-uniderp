// Desenvolva uma função :

//     No *
//     inserirInicio(No *inicio, int valor);

// A função deverá criar um novo nó e inseri - lo no início da lista.
// No programa principal, solicite cinco números ao usuário e insira todos no início.
// Exemplo
//
// Entrada : 10 20 30 40 50
// A lista resultante deverá ser :
// 50->40->30->20->10->NULL

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct No
{
    int valor;
    struct No *proximo;
} No;

// Função para inserir um novo nó no início da lista
No *inserirInicio(No *inicio, int valor)
{
    No *novo_no = (No *)malloc(sizeof(No)); // Aloca dinamicamente um novo nó
    if (novo_no == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return inicio; // Retorna o início original em caso de erro na alocação
    }
    novo_no->valor = valor;
    novo_no->proximo = inicio; // Faz o próximo do novo nó apontar para o início atual
    return novo_no;            // Retorna o novo nó como o novo início da lista
}

// Função para imprimir a lista
void imprimirLista(No *inicio)
{
    No *atual = inicio;
    while (atual != NULL)
    {
        printf("%d->", atual->valor); // Imprime o valor do nó atual
        atual = atual->proximo;       // Move para o próximo nó
    }
    printf("NULL\n"); // Indica o final da lista
}

// imprimir lista do final para o inicio
void imprimirListaReversa(No *inicio)
{
    if (inicio == NULL)
    {
        printf("NULL\n"); // Indica o final da lista
        return;
    }
    imprimirListaReversa(inicio->proximo); // Chamada recursiva para o próximo nó
    printf("%d->", inicio->valor);         // Imprime o valor do nó atual após a chamada recursiva
}

// Função principal
int main()
{
    No *inicio = NULL; // Inicializa o ponteiro inicio com NULL

    int numero;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numero);                   // Solicita um número inteiro ao usuário
        inicio = inserirInicio(inicio, numero); // Insere o número no início da lista
    }
    imprimirLista(inicio);

    // Libera a memória utilizada
    No *atual = inicio;
    while (atual != NULL)
    {
        No *temp = atual;
        atual = atual->proximo;
        free(temp); // Libera cada nó da lista
    }

    return 0;
}
