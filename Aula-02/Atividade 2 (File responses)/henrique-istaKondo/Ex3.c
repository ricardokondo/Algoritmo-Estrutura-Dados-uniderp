#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;

    printf("Valor antes da alteracao: %d\n", var);

    *ptr = 50; // altera o valor da var usando o ptr

    printf("Valor depois da alteracao: %d\n", var);

    return 0;
}
