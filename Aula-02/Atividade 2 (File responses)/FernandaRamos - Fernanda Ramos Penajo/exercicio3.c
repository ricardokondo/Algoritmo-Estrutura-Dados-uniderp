#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    printf("Valor antes da alteracao: %d\n", x);

    *p = 50;

    printf("Valor depois da alteracao: %d\n", x);

    return 0;
}
