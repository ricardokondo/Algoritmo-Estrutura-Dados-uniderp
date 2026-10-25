// Lista Duplamente Encadeada
// Fazer um programa em C que:
// 1. Fazer switch case para:
//    - inserir elementos no início da lista
//    - inserir elementos no final da lista
//    - buscar um elemento na lista
//    - remover um elemento buscado na lista
//    - imprimir a lista
//    - liberar a lista

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct No
{
    int valor;
    struct No *proximo;
    struct No *anterior; // Ponteiro para o nó anterior
} No;

// Função para criar um novo nó no início da lista
No *inserirInicio(No *lista, int valor)
{

    No *novo = (No *)malloc(sizeof(No)); // Aloca dinamicamente um novo nó
    if (novo == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return lista; // Retorna a lista original em caso de erro na alocação
    }
    novo->valor = valor;
    novo->proximo = lista; // Faz o próximo do novo nó apontar para o início atual
    novo->anterior = NULL; // O novo nó será o primeiro, então seu anterior será NULL

    if (lista != NULL)
    {
        lista->anterior = novo; // Atualiza o anterior do antigo primeiro nó
    }

    return novo; // Retorna o novo nó como o novo início da lista
}

// Função para criar um novo nó no final da lista
No *inserirFinal(No *lista, int valor)
{
    No *p = lista;
    No *novo = (No *)malloc(sizeof(No)); // Aloca dinamicamente um novo nó
    if (novo == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return lista; // Retorna a lista original em caso de erro na alocação
    }

    // enquanto p não for nulo e p->proximo não for nulo, percorre a lista até o último nó
    while (p != NULL && p->proximo != NULL)
    {
        p = p->proximo; // Percorre a lista até o último nó
    }

    novo->valor = valor;
    novo->proximo = NULL; // O novo nó será o último, então seu próximo será NULL
    novo->anterior = p;   // O anterior do novo nó será o último nó atual (p)
    p->proximo = novo;    // Atualiza o próximo do último nó para apontar para o novo nó

    return lista; // Retorna o início da lista
}

// Função para buscar um elemento na lista
void buscarElemento(No *lista, int valor)
{
    No *p = lista;

    // enquanto p não for nulo, percorre a lista para buscar o valor
    while (p != NULL)
    {
        if (p->valor == valor) // Compara o valor do nó atual com o valor buscado
        {
            printf("Elemento %d encontrado na lista.\n", valor);
            return; // Retorna se o valor for encontrado
        }
        p = p->proximo; // Move para o próximo nó
    }
    printf("Elemento %d não encontrado na lista.\n", valor); // Informa se o valor não for encontrado
}

// Função para remover um elemento buscado na lista
No *removerElemento(No *lista, int valor)
{
    No *p = lista;
    No *anterior = NULL;

    // enquanto p não for nulo e o valor do nó atual não for o valor buscado, percorre a lista
    while (p != NULL && p->valor != valor)
    {
        anterior = p;   // Guarda o nó anterior
        p = p->proximo; // Move para o próximo nó
    }

    if (p == NULL)
    {
        printf("Elemento %d não encontrado na lista.\n", valor); // Informa se o valor não for encontrado
        return lista;                                            // Retorna a lista original se o valor não for encontrado
    }

    if (anterior == NULL)
    {
        // Se o nó a ser removido for o primeiro da lista
        lista = p->proximo; // Atualiza o início da lista para o próximo nó
        if (lista != NULL)
        {
            lista->anterior = NULL; // Atualiza o anterior do novo primeiro nó para NULL
        }
    }
    else
    {
        // Se o nó a ser removido não for o primeiro da lista
        anterior->proximo = p->proximo; // Atualiza o próximo do nó anterior para pular o nó removido
        if (p->proximo != NULL)
        {
            p->proximo->anterior = anterior; // Atualiza o anterior do próximo nó para pular o nó removido
        }
    }

    free(p);      // Libera a memória do nó removido
    return lista; // Retorna o início da lista
}

// Imprimir a lista
void imprimirLista(No *lista)
{
    No *p = lista;
    printf("\n-------- LISTA ------------------\n");
    while (p != NULL)
    {
        printf("%d -> ", p->valor); // Imprime o valor do nó atual
        p = p->proximo;             // Move para o próximo nó
    }
    printf("NULL\n");
}

// Imprimir lista com setas para indicar a direção dos ponteiros proximo e anterior
void imprimirListaComSetas(No *lista)
{
    No *p = lista;
    printf("\n-------- LISTA ------------------\n");
    while (p != NULL)
    {
        printf("%d", p->valor); // Imprime o valor do nó atual
        if (p->proximo != NULL)
        {
            printf(" <-> "); // Indica que há um próximo nó
        }
        p = p->proximo; // Move para o próximo nó
    }
    printf(" NULL\n");
}

// funcao liberar toda a lista
// Libera a memória da lista antes de sair
void liberarLista(No *lista)
{
    No *p = lista;
    while (p != NULL)
    {
        No *temp = p;   // Guarda temporariamente o endereço do nó atual
        p = p->proximo; // Move para o próximo nó
        free(temp);     // Libera a memória do nó atual
    }
}

int main()
{
    No *lista = NULL; // Inicializa a lista como vazia
    int opcao, valor;

    do
    {
        printf("\nMenu:\n");
        printf("1. Inserir elemento no início da lista\n");
        printf("2. Inserir elemento no final da lista\n");
        printf("3. Buscar elemento na lista\n");
        printf("4. Remover elemento buscado na lista\n");
        printf("5. Imprimir a lista\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor para inserir no início: ");
            scanf("%d", &valor);
            lista = inserirInicio(lista, valor);
            break;
        case 2:
            printf("Digite um valor para inserir no final: ");
            scanf("%d", &valor);
            lista = inserirFinal(lista, valor);
            break;
        case 3:
            printf("Digite um valor para buscar: ");
            scanf("%d", &valor);
            buscarElemento(lista, valor);
            break;
        case 4:
            printf("Digite um valor para remover: ");
            scanf("%d", &valor);
            lista = removerElemento(lista, valor);
            break;
        case 5:
            imprimirLista(lista);
            break;
        case 0:
            liberarLista(lista);
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}