// Alocação dinâmica em memória usando malloc(), em matrizes dinâmicas

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    int **matriz;

    printf("Quantidade de linhas: ");
    scanf("%d", &n);
    printf("Quantidade de colunas: ");
    scanf("%d", &m);

    // Alocando memória para n linhas
    matriz = (int **)malloc(n * sizeof(int *));

    if (matriz == NULL)
    {
        printf("Erro de alocacao.\n");
        return EXIT_FAILURE;
    }

    // Alocando memória para m colunas em cada linha
    for (int i = 0; i < m; i++)
    {
        matriz[i] = (int *)malloc(m * sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Erro de alocacao.\n");
            return EXIT_FAILURE;
        }
    }

    // Preenchendo a matriz com valores
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo os valores armazenados na matriz
    printf("\nValores armazenados na matriz:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberando a memória alocada para cada linha
    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }

    // Liberando a memória alocada para o ponteiro da matriz
    free(matriz);

    return 0;
}