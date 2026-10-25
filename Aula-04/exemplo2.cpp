#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *v;

    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    // Alocando memória para n elementos do tipo int
    v = (int *)malloc(n * sizeof(int));

    if (v == NULL)
    {
        fprintf(stderr, "Erro de alocacao.\n");
        return 1;
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