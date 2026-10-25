#include <stdio.h>

void calcular(int num1, int num2, int *soma, int *multiplicacao) {
    *soma = num1 + num2;
    *multiplicacao = num1 * num2;
}

int main() {
    int a, b, soma, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    calcular(a, b, &soma, &multiplicacao);

    printf("Soma = %d\n", soma);
    printf("Multiplicacao = %d\n", multiplicacao);

    return 0;
}
