// Crie uma função que receba dois números inteiros e retorne, através de ponteiros:
// a soma;
// a multiplicação.

#include <stdio.h>

// Função que calcula a soma e a multiplicação de dois números inteiros
void calcular(int a, int b, int *soma, int *multiplicacao)
{
    *soma = a + b;          // Calcula a soma e armazena no endereço apontado por soma
    *multiplicacao = a * b; // Calcula a multiplicação e armazena no endereço apontado por multiplicacao
}

int main()
{
    int num1, num2;
    int resultadoSoma, resultadoMultiplicacao;

    // Solicita ao usuário que digite os valores inteiros
    printf("Digite o primeiro número inteiro:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro:\n");
    scanf("%d", &num2);

    // Chama a função para calcular a soma e a multiplicação
    calcular(num1, num2, &resultadoSoma, &resultadoMultiplicacao);

    // Exibe os resultados
    printf("Soma = %d\n", resultadoSoma);
    printf("Multiplicação = %d\n", resultadoMultiplicacao);

    return 0;
}