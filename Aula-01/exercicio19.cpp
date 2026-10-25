// Crie uma matriz 3x3 de números inteiros.
// O usuário deverá preencher todos os elementos e, ao final,
// o programa deverá calcular a soma de todos os valores existentes na matriz.
//  Exemplo Matriz : 1 2 3 4 5 6 7 8 9
//  Resultado :
//      Soma dos elementos = 45

#include <stdio.h>

// funcao para calcular a soma dos elementos da matriz
int soma_matriz(int **matriz, int linhas, int colunas)
{
    int soma = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            soma += matriz[i][j]; // Adiciona o valor do elemento à soma
        }
    }

    return soma; // Retorna a soma total dos elementos
}

int main()
{
    int matriz[3][3];
    int i, j, soma;

    // Ler os elementos da matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Chama a função para calcular a soma dos elementos da matriz
    soma = soma_matriz((int **)matriz, 3, 3);

    // Apresentar a soma dos elementos
    printf("Soma dos elementos = %d\n", soma);

    return 0;
}