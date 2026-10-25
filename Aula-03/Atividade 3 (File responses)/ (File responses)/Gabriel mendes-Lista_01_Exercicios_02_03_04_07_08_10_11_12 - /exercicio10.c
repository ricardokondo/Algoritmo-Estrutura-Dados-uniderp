#include <stdio.h>

int main(void) {
    int opcao;
    double lado1, lado2, lado3;

    do {
        printf("\n1 - Verificar triangulo\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                printf("Digite as medidas dos tres lados: ");
                if (scanf("%lf %lf %lf", &lado1, &lado2, &lado3) != 3) {
                    printf("Entrada invalida.\n");
                    return 1;
                }

                if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 ||
                    lado1 + lado2 <= lado3 ||
                    lado1 + lado3 <= lado2 ||
                    lado2 + lado3 <= lado1) {
                    printf("As medidas informadas nao formam um triangulo.\n");
                } else if (lado1 == lado2 && lado2 == lado3) {
                    printf("Triangulo Equilatero.\n");
                } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                    printf("Triangulo Isosceles.\n");
                } else {
                    printf("Triangulo Escaleno.\n");
                }
                break;

            case 2:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
