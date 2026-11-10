/**
 * estrutura de dados de uma fila para cada um desses casos:
- Criar uma fila vazia.
- Inserir elemento no final.
- Retirar um elemento do início.
- Verificar se a fila está vazia.
 */

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da fila
typedef struct No
{
    int valor;
    struct No *proximo;
} No;

// Definição da estrutura da fila
typedef struct Fila
{
    No *inicio; // Ponteiro para o início da fila
    No *fim;    // Ponteiro para o fim da fila
} Fila;

// Função para criar uma fila vazia
Fila *criarFila()
{
    Fila *fila = (Fila *)malloc(sizeof(Fila)); // Aloca dinamicamente a estrutura da fila
    if (fila == NULL)
    {
        printf("Erro ao alocar memória para a fila.\n");
        return NULL; // Retorna NULL em caso de erro na alocação
    }
    fila->inicio = NULL; // Inicializa o início da fila como NULL
    fila->fim = NULL;    // Inicializa o fim da fila como NULL
    return fila;         // Retorna o ponteiro para a fila criada
}

// Função para inserir um elemento no final da fila
void enfileirar(Fila *fila, int valor)
{
    No *novo_no = (No *)malloc(sizeof(No)); // Aloca dinamicamente um novo nó
    if (novo_no == NULL)
    {
        printf("Erro ao alocar memória para o nó.\n");
        return; // Retorna em caso de erro na alocação
    }
    novo_no->valor = valor;  // Atribui o valor ao novo nó
    novo_no->proximo = NULL; // O próximo do novo nó será NULL, pois ele será o último da fila
    if (fila->fim == NULL)
    {
        // Se a fila estiver vazia, o novo nó será o primeiro
        fila->inicio = novo_no;
        fila->fim = novo_no;
    }
    else
    {
        // Se a fila não estiver vazia, adiciona o novo nó no final
        fila->fim->proximo = novo_no; // Faz o próximo do último nó apontar para o novo nó
        fila->fim = novo_no;          // Atualiza o fim da fila para o novo nó
    }
}

// Função para retirar um elemento do início da fila
int desenfileirar(Fila *fila)
{
    if (fila->inicio == NULL)
    {
        printf("Erro: a fila está vazia.\n");
        return -1; // Retorna -1 em caso de erro
    }
    No *no_removido = fila->inicio;       // Armazena o nó a ser removido
    int valor = no_removido->valor;       // Armazena o valor do nó a ser removido
    fila->inicio = fila->inicio->proximo; // Atualiza o início da fila para o próximo nó
    if (fila->inicio == NULL)
    {
        // Se a fila ficar vazia, atualiza o fim também
        fila->fim = NULL;
    }
    free(no_removido); // Libera a memória do nó removido
    return valor;      // Retorna o valor do nó removido
}

// Função para verificar se a fila está vazia
int filaVazia(Fila *fila)
{
    return fila->inicio == NULL; // Retorna 1 (verdadeiro) se a fila estiver vazia, caso contrário retorna 0 (falso)
}

// Função para imprimir os elementos da fila
void imprimirFila(Fila *fila)
{
    No *atual = fila->inicio; // Começa do início da fila
    printf("\n-------- FILA ------------------\n");
    while (atual != NULL)
    {
        printf("%d->", atual->valor); // Imprime o valor do nó atual
        atual = atual->proximo;       // Move para o próximo nó
    }
    printf("NULL\n"); // Indica o final da fila
}

// liberar a estrutura da fila
void liberarFila(Fila *fila)
{
    while (!filaVazia(fila))
    {
        desenfileirar(fila); // Remove todos os elementos da fila
    }
    free(fila); // Libera a memória da estrutura da fila
}

// Função principal
int main()
{
    Fila *fila = criarFila(); // Cria uma fila vazia
    if (fila == NULL)
    {
        return 1; // Sai do programa em caso de erro na criação da fila
    }

    int opcao, numero;
    do
    {
        printf("\n-------- MENU ------------------\n");
        printf("1. Enfileirar\n");
        printf("2. Desenfileirar\n");
        printf("3. Imprimir fila\n");
        printf("4. Verificar se a fila está vazia\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o número a ser enfileirado: ");
            scanf("%d", &numero);
            enfileirar(fila, numero);
            break;
        case 2:
            numero = desenfileirar(fila);
            if (numero != -1)
            {
                printf("Número desenfileirado: %d\n", numero);
            }
            break;
        case 3:
            imprimirFila(fila);
            break;
        case 4:
            if (filaVazia(fila))
            {
                printf("A fila está vazia.\n");
            }
            else
            {
                printf("A fila não está vazia.\n");
            }
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 5);
    return 0;
}