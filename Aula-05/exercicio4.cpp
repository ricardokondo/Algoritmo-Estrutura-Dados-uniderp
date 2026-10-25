// Desenvolva uma função :
// Implemente : No *inserirFinal(No *inicio, int valor);

// A função deverá : criar um novo nó;
// verificar se a lista está vazia;
// caso esteja vazia, tornar o novo nó o primeiro elemento;
// caso contrário, percorrer a lista;
// encontrar o último elemento;
// adicionar o novo nó após o último elemento.

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct No
{
    int valor;
    struct No *proximo;
} No;

// Função para inserir um novo nó no final da lista
No *inserirFinal(No *inicio, int valor)
{
    No *novo_no = (No *)malloc(sizeof(No)); // Aloca dinamicamente um novo nó
    if (novo_no == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return inicio; // Retorna o início original em caso de erro na alocação
    }
    novo_no->valor = valor;
    novo_no->proximo = NULL; // O novo nó será o último, então seu próximo será NULL

    if (inicio == NULL)
    {
        // Se a lista estiver vazia, o novo nó será o primeiro
        return novo_no;
    }

    // Se a lista não estiver vazia, percorre até o final
    No *atual = inicio;
    while (atual->proximo != NULL)
    {
        atual = atual->proximo;
    }
    atual->proximo = novo_no; // Adiciona o novo nó após o último elemento

    return inicio; // Retorna o início da lista
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

// Função principal
int main()
{
    No *inicio = NULL; // Inicializa o ponteiro inicio com NULL

    int numero;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numero);                  // Solicita um número inteiro ao usuário
        inicio = inserirFinal(inicio, numero); // Insere o número no final da lista
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
