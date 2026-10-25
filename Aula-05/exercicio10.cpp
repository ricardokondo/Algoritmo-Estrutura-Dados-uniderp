// Lista Encadeada
// Fazer um programa em C que:
// 1. Fazer switch case para:
//    - inserir elementos no início da lista,
//    - inserir elementos no final da lista,
//    - buscar um elemento na lista,
//    - remover um elemento buscado na lista,
//    - remover o último elemento da lista,
//    - remover o primeiro elemento da lista,
//    - imprimir a lista
//    - liberar a lista

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
    return inicio;            // Retorna o início da lista
}

// busca elemento funcao void
void buscarElemento(No *inicio, int valor)
{
    No *atual = inicio;
    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            printf("Elemento %d encontrado na lista.\n", valor);
            return; // Retorna se o valor for encontrado
        }
        atual = atual->proximo;
    }
    printf("Elemento %d não encontrado na lista.\n", valor); // Informa se o valor não for encontrado
}

// Função para remover um elemento buscado na lista
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
        printf("\nElemento %d não encontrado na lista.\n", valor);
        return inicio; // Retorna o início original se o valor não for encontrado
    }
    No *temp = atual->proximo;                // Guarda temporariamente o endereço do nó a ser removido
    atual->proximo = atual->proximo->proximo; // Atualiza o próximo do nó anterior para pular o nó removido
    free(temp);                               // Libera a memória do nó removido
    return inicio;                            // Retorna o início da lista
}

// Função para remover o último elemento da list
No *removerFinal(No *inicio)
{
    if (inicio == NULL)
    {
        printf("A lista está vazia. Nenhum nó para remover.\n");
        return inicio;
    }

    // Caso tenha apenas um elemento
    if (inicio->proximo == NULL)
    {
        free(inicio);
        return NULL;
    }

    No *anterior = NULL;
    No *atual = inicio;

    // Percorre até o último nó
    while (atual->proximo != NULL)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    // anterior aponta para o penúltimo
    // atual aponta para o último
    anterior->proximo = NULL;

    free(atual);

    return inicio;
}

// Função para remover o primeiro elemento da lista
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

// Função para liberar toda a lista
No *liberarLista(No *inicio)
{
    No *atual = inicio;
    while (atual != NULL)
    {
        No *temp = atual;       // Guarda temporariamente o endereço do nó atual
        atual = atual->proximo; // Move para o próximo nó
        free(temp);             // Libera a memória do nó atual
    }
    return NULL; // Retorna NULL após liberar toda a lista
}

// Função para imprimir a lista
void imprimirLista(No *inicio)
{
    No *atual = inicio;

    printf("\n-------- LISTA ------------------\n");
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

    int opcao, numero;
    do
    {
        printf("\nMenu:\n");
        printf("1. Inserir elemento no início da lista\n");
        printf("2. Inserir elemento no final da lista\n");
        printf("3. Buscar elemento na lista\n");
        printf("4. Remover elemento buscado na lista\n");
        printf("5. Remover o último elemento da lista\n");
        printf("6. Remover o primeiro elemento da lista\n");
        printf("7. Imprimir a lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor para inserir no início: ");
            scanf("%d", &numero);
            inicio = inserirInicio(inicio, numero);
            break;
        case 2:
            printf("Digite um valor para inserir no final: ");
            scanf("%d", &numero);
            inicio = inserirFinal(inicio, numero);
            break;
        case 3:
        {
            printf("Digite um valor para buscar: ");
            scanf("%d", &numero);

            buscarElemento(inicio, numero);
            break;
        }
        case 4:
            printf("Digite um valor para remover: ");
            scanf("%d", &numero);
            inicio = removerElemento(inicio, numero);
            break;
        case 5:
            inicio = removerFinal(inicio);
            break;
        case 6:
            inicio = removerInicio(inicio);
            break;
        case 7:
            imprimirLista(inicio);
            break;
        case 0:
            printf("Saindo do programa.\n");
            liberarLista(inicio);
            printf("Memória liberada.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 0);

    // Libera a memória utilizada antes de sair do programa
    inicio = liberarLista(inicio);
    printf("Programa encerrado.\n");

    return 0;
}