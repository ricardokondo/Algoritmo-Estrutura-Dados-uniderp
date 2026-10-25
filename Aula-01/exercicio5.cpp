// Desenvolva um programa que solicite um número inteiro ao usuário e determine se ele é par ou ímpar.
// Utilize o operador módulo %.
// Exemplo
// Entrada:
// 17
// Saída:
// O numero 17 e impar.

#include <stdio.h>

int main()
{
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar usando o operador módulo
    if (numero % 2 == 0)
    {
        printf("O numero %d e par.\n", numero);
    }
    else
    {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
