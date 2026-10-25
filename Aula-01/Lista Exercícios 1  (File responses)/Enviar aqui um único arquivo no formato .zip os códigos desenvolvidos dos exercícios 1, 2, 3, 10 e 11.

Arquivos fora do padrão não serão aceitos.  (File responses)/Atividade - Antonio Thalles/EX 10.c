#include <stdio.h>

int main() {
    int opcao, lado1, lado2, lado3;

    do {
        printf("\n1 = Verificar Triângulo\n");
        printf("2 = Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("Digite as medidas dos 3 lados: ");
                scanf("%d %d %d", &lado1, &lado2, &lado3);

                if (lado1 == lado2 && lado2 == lado3) {
                    printf("Triângulo Equilátero\n");
                }
                else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
                    printf("Triângulo Escaleno\n");
                }
                else {
                    printf("Triângulo Isósceles\n");
                }

                break;

            case 2:
                printf("Encerrando o programa!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 2);

    return 0;
}