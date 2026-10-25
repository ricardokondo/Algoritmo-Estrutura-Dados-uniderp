// Implemente:
// No *removerFinal(No *inicio);
// Exemplo
//     Antes : 10->20->30->40->NULL
//         Depois : 10->20->30->NULL
//             Seu programa deverá tratar três situações : lista vazia;
// lista contendo apenas um nó;
// lista contendo dois ou mais nós.

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

// Função remover final da lista
No *removerFinal(No *inicio)
{
    if (inicio == NULL)
    {
        printf("A lista está vazia. Nenhum nó para remover.\n");
        return NULL; // Retorna NULL se a lista estiver vazia
    }
    if (inicio->proximo == NULL)
    {
        free(inicio); // Libera a memória do único nó
        return NULL;  // Retorna NULL, pois a lista ficará vazia
    }
    No *atual = inicio;
    while (atual->proximo->proximo != NULL)
    {
        atual = atual->proximo; // Percorre a lista até o penúltimo nó
    }
    free(atual->proximo);  // Libera a memória do último nó
    atual->proximo = NULL; // Atualiza o penúltimo nó para ser o último
    return inicio;         // Retorna o início da lista
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

    // Remove o último nó da lista
    inicio = removerFinal(inicio);
    printf("Após remover o último nó:\n");
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
