// Escreva uma função mm que receba um vetor inteiro v[0..n-1]
// e os endereços de duas variáveis inteiras, digamos min e max,
// e deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor.
// Escreva também uma função main que use a função mm.

#include <stdio.h>

// funcao mm
void mm(int v[], int n, int *min, int *max)
{
    *min = v[0]; // Inicializa min com o primeiro elemento do vetor
    *max = v[0]; // Inicializa max com o primeiro elemento do vetor

    for (int i = 1; i < n; i++)
    {
        if (v[i] < *min) // Se o elemento atual for menor que min
        {
            *min = v[i]; // Atualiza min
        }
        if (v[i] > *max) // Se o elemento atual for maior que max
        {
            *max = v[i]; // Atualiza max
        }
    }
}

// funcao principal
int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n); // Lê o tamanho do vetor

    int v[n]; // Declara o vetor de tamanho n
    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento v[%d]: ", i);
        scanf("%d", &v[i]); // Lê os elementos do vetor
    }

    int min, max;
    mm(v, n, &min, &max); // Chama a função mm passando os endereços de min e max

    printf("O elemento mínimo do vetor é: %d\n", min); // Imprime o valor mínimo
    printf("O elemento máximo do vetor é: %d\n", max); // Imprime o valor máximo

    return 0;
}