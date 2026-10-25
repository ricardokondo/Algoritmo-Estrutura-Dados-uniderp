// Crie um programa que calcule a perímetro de um retângulo.
// A leitura dos valores do comprimento e largura do retângulo devem ser recebidas a partir do teclado.
// Os valores lidos devem ser todos positivos, valide a entrada com as estruturas de decisões
// Utilizando variáveis constantes para declarar uma constante que represente o número de lados do retângulo (sempre igual a 4) e outra constante que represente o fator de conversão de centímetros para metros (por exemplo, 0.01).
// Realize o cálculo do perímetro do retângulo utilizando a fórmula:
// perímetro = 2 * (comprimento + largura).
// Exiba o resultado do cálculo na tela.

#include <stdio.h>

// variaveis globais
const int NUM_LADOS = 4; // Constante para o número de lados do retângulo

int calcularPerimetro(float comprimento, float largura)
{

    return NUM_LADOS / 2 * (comprimento + largura); // Fórmula do perímetro
}

int main()
{

    float comprimento, largura, perimetro;

    // Solicita ao usuário que insira o comprimento do retângulo
    do
    {
        printf("Digite o comprimento do retangulo (positivo): ");
        scanf("%f", &comprimento);

        if (comprimento <= 0)
        {
            printf("Valor invalido. O comprimento deve ser positivo.\n");
        }
    } while (comprimento <= 0); // Repete enquanto o comprimento for inválido

    // Solicita ao usuário que insira a largura do retângulo
    do
    {
        printf("Digite a largura do retangulo (positivo): ");
        scanf("%f", &largura);

        if (largura <= 0)
        {
            printf("Valor invalido. A largura deve ser positiva.\n");
        }
    } while (largura <= 0); // Repete enquanto a largura for inválida

    // Calcula o perímetro do retângulo
    perimetro = calcularPerimetro(comprimento, largura);

    // Exibe o resultado do cálculo na tela
    printf("O perimetro do retangulo e: %.2f \n", perimetro);

    return 0;
}