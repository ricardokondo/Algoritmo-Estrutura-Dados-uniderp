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

// Função para buscar um elemento na lista
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

    printf("Digite um valor para buscar: ");
    scanf("%d", &numero);                           // Solicita um número inteiro ao usuário para buscar
    No *resultado = buscarElemento(inicio, numero); // Busca o elemento na lista
    if (resultado != NULL)
    {
        printf("Elemento %d encontrado no endereço: %p\n", numero, (void *)resultado); // Imprime o endereço do nó encontrado
    }
    else
    {
        printf("Elemento %d não encontrado na lista.\n", numero); // Informa que o elemento não foi encontrado
    }

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
