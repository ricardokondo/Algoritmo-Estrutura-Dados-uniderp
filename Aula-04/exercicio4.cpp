/**
 * Implemente uma função:
    int **criarMatriz(int linhas, int colunas);
Depois implemente:
void liberarMatriz(int **M, int linhas);
Utilize as funções em um programa que leia e imprima uma matriz.
 */

#include <stdio.h>
#include <stdlib.h>

// Função para criar uma matriz dinamicamente
int **criarMatriz(int linhas, int colunas)
{
    int **M = (int **)malloc(linhas * sizeof(int *));
    if (M == NULL)
    {
        printf("Erro ao alocar memória para as linhas da matriz.\n");
        return NULL;
    }

    for (int i = 0; i < linhas; i++)
    {
        M[i] = (int *)malloc(colunas * sizeof(int));
        if (M[i] == NULL)
        {
            printf("Erro ao alocar memória para a coluna %d da matriz.\n", i);
            // Libera a memória já alocada antes de retornar
            for (int j = 0; j < i; j++)
            {
                free(M[j]);
            }
            free(M);
            return NULL;
        }
    }
    return M;
}

// Função para liberar a memória da matriz
void liberarMatriz(int **M, int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        free(M[i]);
    }
    free(M);
}

// Função para ler os elementos da matriz
void lerMatriz(int **M, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int **M, int linhas, int colunas)
{
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

// Função principal
int main()
{
    int linhas, colunas;
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    // Cria a matriz
    int **matriz = criarMatriz(linhas, colunas);
    if (matriz == NULL)
    {
        return 1; // Sai do programa em caso de erro na alocação
    }

    // Lê os elementos da matriz
    lerMatriz(matriz, linhas, colunas);

    // Imprime a matriz
    imprimirMatriz(matriz, linhas, colunas);

    // Libera a memória utilizada
    liberarMatriz(matriz, linhas);

    return 0;
}
