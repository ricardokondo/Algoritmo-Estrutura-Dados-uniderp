#include <stdio.h>

int main() {
    int A, B;
    int maior, menor;
    int quociente, resto;

    printf("Leia dois numeros inteiros: ");
    scanf("%d %d", &A, &B);

    if (A == 0 && B == 0) {
        printf("Nao e possivel realizar a divisao de 0 por 0.\n");
        return 0;
    }

    if (A == B) {
        printf("Os numeros sao iguais.\n");
        printf("A divisao de %d por %d = 1 e resto = 0\n", A, B);
        return 0;
    }

    if (A > B) {
        maior = A;
        menor = B;
    } else {
        maior = B;
        menor = A;
    }

    if (menor == 0) {
        printf("Nao e possivel dividir por zero.\n");
        return 0;
    }

    quociente = maior / menor;
    resto = maior % menor;

    printf("%d dividido por %d = %d e resto = %d\n",
           maior, menor, quociente, resto);

    return 0;
}
