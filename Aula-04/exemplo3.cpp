// Uso da função calloc() para alocação de memória
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *v;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    // Alocando memória para n elementos do tipo int usando calloc
    v = (int *)calloc(n, sizeof(int));

    if (v == NULL)
    {
        fprintf(stderr, "Erro de alocacao.\n");
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