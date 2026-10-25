// Desenvolva um programa que solicite um número inteiro positivo N e calcule a soma de todos os números de 1 até N.
// Exemplo
// Entrada:
// Número: 5

// Cálculo:
// Somatório: 1 + 2 + 3 + 4 + 5

// Saída:
// Soma = 15

#include <stdio.h>

int main()
{
    int n, soma = 0;

    // Solicita ao usuário que insira um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo
    if (n <= 0)
    {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1; // Encerra o programa com erro
    }

    // Calcula a soma de todos os números de 1 até N
    for (int i = 1; i <= n; i++)
    {
        soma += i; // Adiciona o valor de i à soma
    }

    // Exibe o resultado da soma
    printf("Soma = %d\n", soma);

    return 0;
}