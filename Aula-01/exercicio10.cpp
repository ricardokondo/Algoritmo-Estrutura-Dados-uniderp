// Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero, Isósceles ou Escaleno. Sendo que:
// Triângulo Equilátero: possui os 3 lados iguais.
// Triângulo Isóscele: possui 2 lados iguais.
// Triângulo Escaleno: possui 3 lados diferentes.
// O programa deve apresentar um menu com as opções dentro de uma estrutura de repetição
// 1 - Verificar triangulo que encaminhará para leitura dos lados
// 2 - sair que fechará o programa

#include <stdio.h>

int main()
{
    int opcao;
    float lado1, lado2, lado3;

    do
    {
        // Exibe o menu de opções
        printf("Menu:\n");
        printf("1 - Verificar triangulo\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // Solicita ao usuário as medidas dos lados do triângulo
            printf("Digite o comprimento do primeiro lado: ");
            scanf("%f", &lado1);
            printf("Digite o comprimento do segundo lado: ");
            scanf("%f", &lado2);
            printf("Digite o comprimento do terceiro lado: ");
            scanf("%f", &lado3);

            // Verifica o tipo de triângulo com base nos lados fornecidos
            if (lado1 == lado2 && lado2 == lado3)
            {
                printf("O triangulo e Equilatero.\n");
            }
            else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            {
                printf("O triangulo e Isosceles.\n");
            }
            else
            {
                printf("O triangulo e Escaleno.\n");
            }
            break;

        case 2:
            // Sai do programa
            printf("Saindo do programa.\n");
            break;

        default:
            // Opção inválida
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 2); // Repete enquanto a opção não for sair

    return 0;
}