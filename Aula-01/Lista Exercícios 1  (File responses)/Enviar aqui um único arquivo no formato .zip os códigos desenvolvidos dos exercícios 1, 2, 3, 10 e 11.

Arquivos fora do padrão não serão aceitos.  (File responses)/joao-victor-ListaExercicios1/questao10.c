#include <stdio.h>

int main() {
    int opcao;
    float lado1, lado2, lado3;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Verificar triangulo\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o primeiro lado: ");
                scanf("%f", &lado1);

                printf("Digite o segundo lado: ");
                scanf("%f", &lado2);

                printf("Digite o terceiro lado: ");
                scanf("%f", &lado3);

                if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
                    printf("Os lados devem ser positivos.\n");
                } else if (lado1 + lado2 <= lado3 ||
                           lado1 + lado3 <= lado2 ||
                           lado2 + lado3 <= lado1) {
                    printf("Os valores informados nao formam um triangulo.\n");
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
                printf("Opcao invalida.\n");
        }

    } while (opcao != 2);

    return 0;
}
