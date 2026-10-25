#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    printf("Antes da troca: %d %d\n", x, y);

    trocar(&x, &y);

    printf("Depois da troca: %d %d\n", x, y);

    return 0;
}
