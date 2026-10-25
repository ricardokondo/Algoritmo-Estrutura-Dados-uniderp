// Desenvolva uma calculadora que solicite :
// Primeiro número;
// Segundo número;
// Operação desejada.Utilize o seguinte menu :
// 1 - Soma
// 2 - Subtracao
// 3 - Multiplicacao
// 4 - Divisao
// Utilize switch... case para selecionar a operação.

#include <stdio.h>

// Funcao para realizar a soma
float soma(float a, float b)
{
    float result = a + b;

    return result;
}

// Funcao para realizar a subtracao
float subtracao(float a, float b)
{
    float result = a - b;

    return result;
}

// Funcao para realizar a multiplicacao
float multiplicacao(float a, float b)
{
    float result = a * b;

    return result;
}

// Funcao para realizar a divisao
float divisao(float a, float b)
{
    if (b == 0)
    {
        printf("Erro: Divisao por zero nao e permitida.\n");
        return 0; // Retorna 0 em caso de divisao por zero
    }
    float result = a / b;
    return result;
}

int main()
{

    float num1, num2, resultado;
    int operacao;

    // Solicita ao usuario os numeros e a operacao desejada
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operacao desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite o numero da operacao: ");
    scanf("%d", &operacao);

    // Utiliza switch... case para selecionar a operacao
    switch (operacao)
    {
    case 1:
        resultado = soma(num1, num2);
        printf("Resultado da soma: %.2f\n", resultado);
        break;
    case 2:
        resultado = subtracao(num1, num2);
        printf("Resultado da subtracao: %.2f\n", resultado);
        break;
    case 3:
        resultado = multiplicacao(num1, num2);
        printf("Resultado da multiplicacao: %.2f\n", resultado);
        break;
    case 4:
        resultado = divisao(num1, num2);
        if (num2 != 0) // Verifica se a divisao foi realizada com sucesso
        {
            printf("Resultado da divisao: %.2f\n", resultado);
        }
        break;
    default:
        printf("Operacao invalida. Por favor, escolha uma operacao valida.\n");
        break;
    }

    return 0;
}