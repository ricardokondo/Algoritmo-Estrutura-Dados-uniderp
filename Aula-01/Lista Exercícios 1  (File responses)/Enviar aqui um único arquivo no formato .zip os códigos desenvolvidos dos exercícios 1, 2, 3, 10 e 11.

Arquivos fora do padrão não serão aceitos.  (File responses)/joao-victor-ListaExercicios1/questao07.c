#include <stdio.h>

int main() {
    int numero, i;

    printf("Numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d. %d x %d = %d\n", i, numero, i, numero * i);
    }

    return 0;
}
