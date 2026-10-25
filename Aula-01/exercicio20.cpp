// Leia os elementos de uma matriz 3x3 e apresente somente os elementos pertencentes à diagonal principal.
// Considere a seguinte matriz :
// 10 2 3
// 4 20 6
// 7 8 30
// A diagonal principal é :
//     10 20 30

#include <stdio.h>

// funcao para imprimir os elementos da diagonal principal da matriz
void imprimir_diagonal_principal(int matriz[3][3], int linhas, int colunas)
{
    printf("Diagonal principal:\n");
    for (int i = 0; i < linhas; i++)
    {
        printf("%d ", matriz[i][i]); // Imprime o elemento da diagonal principal
    }
    printf("\n");
}

// calcular diagonal secundaria

void imprimir_diagonal_secundaria(int matriz[3][3], int linhas, int colunas)
{
    printf("Diagonal secundaria:\n");
    for (int i = 0; i < linhas; i++)
    {
        printf("%d ", matriz[i][colunas - 1 - i]); // Imprime o elemento da diagonal secundaria
    }
    printf("\n");
}

// funcao principal
int main()
{
    int matriz[3][3];
    int i, j;

    // Ler os elementos da matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Chama a função para imprimir os elementos da diagonal principal
    imprimir_diagonal_principal(matriz, 3, 3);

    return 0;
}
