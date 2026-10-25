#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
