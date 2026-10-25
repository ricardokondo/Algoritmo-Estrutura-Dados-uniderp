// Implemente : No *removerInicio(No *inicio);
// A função deverá : verificar se a lista está vazia;
// guardar temporariamente o endereço do primeiro nó;
// atualizar o ponteiro início;
// liberar a memória do nó removido utilizando free().Exemplo
//     Antes : 10 -> 20->30->40->NULL
//     Depois : 20->30->40->NULL

// Implemente :
// No *buscarElemento(No *inicio, int valor);
// A função deverá percorrer a lista em busca do valor informado.
// Caso encontre, deverá retornar o endereço do nó.Caso contrário : return NULL;

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

// Função remover o primeiro nó da lista
No *removerInicio(No *inicio)
{
    if (inicio == NULL)
    {
        printf("A lista está vazia. Nenhum nó para remover.\n");
        return NULL; // Retorna NULL se a lista estiver vazia
    }

    No *temp = inicio;        // Guarda temporariamente o endereço do primeiro nó
    inicio = inicio->proximo; // Atualiza o ponteiro início para apontar para o próximo nó
    free(temp);               // Libera a memória do nó removido
    return inicio;            // Retorna o novo início da lista
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

    // Remove o primeiro nó da lista
    inicio = removerInicio(inicio);
    printf("Após remover o primeiro nó:\n");
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
