#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d e maior que %d.\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d e maior que %d.\n", num2, num1);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
