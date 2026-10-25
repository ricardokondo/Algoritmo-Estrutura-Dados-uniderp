#include <stdio.h>

int main() {
    int num1, num2, soma;
    int *p1, *p2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    p1 = &num1;

    p2 = &num2;


    soma = *p1 + *p2;

    printf("Soma = %d\n", soma);

    return 0;
}
