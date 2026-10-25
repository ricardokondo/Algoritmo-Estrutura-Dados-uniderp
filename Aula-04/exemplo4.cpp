#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *v;
    int *temp;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    // Alocando memória para n elementos do tipo int
    v = (int *)malloc(n * sizeof(int));

    // Usando a função realloc() para redimensionar a memória alocada
    temp = (int *)realloc(v, (n + 5) * sizeof(int)); // Redimensiona para n + 5 elementos

    v = temp; // Atualiza o ponteiro v para apontar para a nova memória alocada

    if (v == NULL)
    {
        printf("Erro de alocacao.\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("\nValores armazenados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}