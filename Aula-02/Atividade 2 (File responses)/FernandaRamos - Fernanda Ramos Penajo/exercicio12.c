#include <stdio.h>

void mm(int v[], int n, int *min, int *max)
{
    int i;

    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++)
    {
        if (v[i] < *min)
            *min = v[i];

        if (v[i] > *max)
            *max = v[i];
    }
}

int main()
{
    int v[100];
    int n;
    int i;
    int min, max;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    printf("Digite os elementos do vetor:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    mm(v, n, &min, &max);

    printf("Menor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    return 0;
}
