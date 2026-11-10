/**
* Implementação da estrutura de dados de uma pilha para cada um desses casos:
- Criar uma pilha vazia.
- Inserir um elemento no topo.
- Remover o elemento do topo.
- Verificar se a pilha está vazia.
- Liberar a estrutura de pilha.
*/

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da pilha
typedef struct No
{
    int valor;
    struct No *proximo;
} No;

// Definição da estrutura da pilha
typedef struct Pilha
{
    No *topo; // Ponteiro para o nó do topo da pilha
} Pilha;

// Função para criar uma pilha vazia
Pilha *criarPilha()
{
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha)); // Aloca dinamicamente a estrutura da pilha
    if (pilha == NULL)
    {
        printf("Erro ao alocar memória para a pilha.\n");
        return NULL; // Retorna NULL em caso de erro na alocação
    }
    pilha->topo = NULL; // Inicializa o topo da pilha como NULL
    return pilha;       // Retorna o ponteiro para a pilha criada
}

// Função para inserir um elemento no topo da pilha
void empilhar(Pilha *pilha, int valor)
{
    No *novo_no = (No *)malloc(sizeof(No)); // Aloca dinamicamente um novo nó
    if (novo_no == NULL)
    {
        printf("Erro ao alocar memória para o nó.\n");
        return; // Retorna em caso de erro na alocação
    }
    novo_no->valor = valor;         // Atribui o valor ao novo nó
    novo_no->proximo = pilha->topo; // Faz o próximo do novo nó apontar para o nó que estava no topo
    pilha->topo = novo_no;          // Atualiza o topo da pilha para o novo nó
}

// Função para remover o elemento do topo da pilha
void desempilhar(Pilha *pilha)
{
    if (pilha->topo == NULL)
    {
        printf("Pilha vazia. Não é possível remover elementos.\n");
        return;
    }
    No *no_removido = pilha->topo;      // Armazena o ponteiro para o nó a ser removido
    pilha->topo = pilha->topo->proximo; // Atualiza o topo da pilha para o próximo nó
    free(no_removido);                  // Libera a memória do nó removido
}

// Função para verificar se a pilha está vazia
int pilhaVazia(Pilha *pilha)
{
    return pilha->topo == NULL; // Retorna 1 (verdadeiro) se a pilha estiver vazia, caso contrário retorna 0 (falso)
}

// Função para liberar a estrutura da pilha
void liberarPilha(Pilha *pilha)
{
    while (!pilhaVazia(pilha))
    {
        desempilhar(pilha); // Remove todos os elementos da pilha
    }
    free(pilha); // Libera a memória da estrutura da pilha
}

// Função imprimir os elementos da pilha
void imprimirPilha(Pilha *pilha)
{
    No *atual = pilha->topo; // Começa do topo da pilha
    printf("\n-------- PILHA ------------------\n");
    while (atual != NULL)
    {
        printf("%d->", atual->valor); // Imprime o valor do nó atual
        atual = atual->proximo;       // Move para o próximo nó
    }
    printf("NULL\n"); // Indica o final da pilha
}

// Função principal
int main()
{
    Pilha *pilha = criarPilha(); // Cria uma pilha vazia
    if (pilha == NULL)
    {
        return 1; // Sai do programa em caso de erro na criação da pilha
    }

    int opcao, numero;
    do
    {
        printf("\nMenu:\n");
        printf("1. Empilhar elemento\n");
        printf("2. Desempilhar elemento\n");
        printf("3. Verificar se a pilha está vazia\n");
        printf("4. Imprimir pilha\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o número a ser empilhado: ");
            scanf("%d", &numero);
            empilhar(pilha, numero); // Insere o elemento no topo da pilha
            break;
        case 2:
            desempilhar(pilha); // Remove o elemento do topo da pilha
            break;
        case 3:
            // if ternario
            (pilhaVazia(pilha)) ? printf("A pilha está vazia.\n") : printf("A pilha não está vazia.\n");

            if (pilhaVazia(pilha))
            {
                printf("A pilha está vazia.\n");
            }
            else
            {
                printf("A pilha não está vazia.\n");
            }
            break;
        case 4:
            imprimirPilha(pilha); // Imprime os elementos da pilha
            break;
        case 0:
            liberarPilha(pilha); // Libera a memória da pilha antes de sair
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
