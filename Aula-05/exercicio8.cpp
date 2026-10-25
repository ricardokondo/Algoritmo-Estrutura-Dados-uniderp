// Implemente : No *removerElemento(No *inicio, int valor);
// A função deverá remover a primeira ocorrência do valor informado.Exemplo
//     Antes : 10->20->30->40->NULL
//         Remover : 30 Depois : 10->20->40->NULL
//             Considere os seguintes casos : elemento no início;
// elemento no meio;
// elemento no final;
// elemento inexistente;
// lista vazia.

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

// Função buscar um elemento na lista
No *buscarElemento(No *inicio, int valor)
{
    No *atual = inicio;
    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            return atual; // Retorna o endereço do nó se o valor for encontrado
        }
        atual = atual->proximo;
    }
    return NULL; // Retorna NULL se o valor não for encontrado
}

// Função para remover um elemento da lista
No *removerElemento(No *inicio, int valor)
{
    if (inicio == NULL)
    {
        printf("A lista está vazia. Nenhum nó para remover.\n");
        return NULL; // Retorna NULL se a lista estiver vazia
    }
    if (inicio->valor == valor)
    {
        No *temp = inicio;        // Guarda temporariamente o endereço do primeiro nó
        inicio = inicio->proximo; // Atualiza o ponteiro início para apontar para o próximo nó
        free(temp);               // Libera a memória do nó removido
        return inicio;            // Retorna o novo início da lista
    }
    No *atual = inicio;
    while (atual->proximo != NULL && atual->proximo->valor != valor)
    {
        atual = atual->proximo; // Percorre a lista até encontrar o nó anterior ao que será removido
    }
    if (atual->proximo == NULL)
    {
        printf("Elemento %d não encontrado na lista.\n", valor);
        return inicio; // Retorna o início original se o valor não for encontrado
    }
    No *temp = atual->proximo;                // Guarda temporariamente o endereço do nó a ser removido
    atual->proximo = atual->proximo->proximo; // Atualiza o próximo do nó anterior para pular o nó removido
    free(temp);                               // Libera a memória do nó removido
    return inicio;                            // Retorna o início da lista
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

    printf("Digite um valor para remover: ");
    scanf("%d", &numero);                     // Solicita um número inteiro ao usuário para remover
    inicio = removerElemento(inicio, numero); // Remove o elemento da lista
    printf("Após remover o elemento %d:\n", numero);
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
