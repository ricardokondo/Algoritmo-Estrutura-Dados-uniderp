#include <stdio.h>

int main() {
    int valor1, valor2;
    int *p1, *p2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    p1 = &valor1;
    p2 = &valor2;

    if (*p1 > *p2) {
        printf("O maior valor e: %d\n", *p1);
    } else if (*p2 > *p1) {
        printf("O maior valor e: %d\n", *p2);
    } else {
        printf("Os dois valores sao iguais: %d\n", *p1);
    }

    return 0;
}
