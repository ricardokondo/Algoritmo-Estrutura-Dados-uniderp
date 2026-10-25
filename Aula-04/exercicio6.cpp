/**
 * Desafio: separar positivos e negativos
Leia n números inteiros usando um vetor alocado dinamicamente. Depois, crie dois novos vetores dinâmicos:
um contendo apenas os números positivos;
outro contendo apenas os números negativos.

Mostre os dois vetores e libere toda a memória.

 */

#include <stdio.h>
#include <stdlib.h>

// Função para ler os números inteiros e armazená-los no vetor
void lerNumeros(int *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

// Função para separar os números positivos e negativos em dois vetores distintos
void separarPositivosNegativos(int *vetor, int n, int **positivos, int *qtdPositivos, int **negativos, int *qtdNegativos)
{
    *qtdPositivos = 0;
    *qtdNegativos = 0;

    // Contar a quantidade de positivos e negativos
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] >= 0)
        {
            (*qtdPositivos)++;
        }
        else
        {
            (*qtdNegativos)++;
        }
    }

    // Alocar memória para os vetores de positivos e negativos
    *positivos = (int *)malloc((*qtdPositivos) * sizeof(int));
    *negativos = (int *)malloc((*qtdNegativos) * sizeof(int));

    if (*positivos == NULL || *negativos == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1); // Sai do programa em caso de erro na alocação
    }

    // Preencher os vetores de positivos e negativos
    int posIndex = 0, negIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] >= 0)
        {
            (*positivos)[posIndex++] = vetor[i];
        }
        else
        {
            (*negativos)[negIndex++] = vetor[i];
        }
    }
}

// Função para imprimir os vetores
void imprimirVetor(int *vetor, int tamanho, const char *tipo)
{
    printf("%s:\n", tipo);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função principal
int main()
{
    int n;
    printf("Digite a quantidade de números: ");
    scanf("%d", &n); // Lê a quantidade de números

    // Aloca dinamicamente um vetor de n números inteiros
    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    lerNumeros(vetor, n); // Lê os números inteiros e armazena no vetor

    int *positivos = NULL, *negativos = NULL;
    int qtdPositivos = 0, qtdNegativos = 0;

    separarPositivosNegativos(vetor, n, &positivos, &qtdPositivos, &negativos, &qtdNegativos); // Separa os números positivos e negativos

    imprimirVetor(positivos, qtdPositivos, "Números positivos"); // Imprime os números positivos
    imprimirVetor(negativos, qtdNegativos, "Números negativos"); // Imprime os números negativos

    // Libera a memória utilizada
    free(vetor);
    free(positivos);
    free(negativos);

    return 0;
}