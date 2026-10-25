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

        if (opcao == 1) {
            printf("\nDigite o primeiro lado: ");
            scanf("%f", &lado1);

            printf("Digite o segundo lado: ");
            scanf("%f", &lado2);

            printf("Digite o terceiro lado: ");
            scanf("%f", &lado3);

            if (lado1 == lado2 && lado2 == lado3) {
                printf("Triangulo Equilatero.\n");
            } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                printf("Triangulo Isosceles.\n");
            } else {
                printf("Triangulo Escaleno.\n");
            }

        } else if (opcao == 2) {
            printf("\nPrograma encerrado.\n");

        } else {
            printf("\nOpcao invalida.\n");
        }

    } while (opcao != 2);

    return 0;
}
