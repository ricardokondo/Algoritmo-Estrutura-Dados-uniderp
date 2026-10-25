// Faça um programa que solicite um número inteiro ao usuário e apresente sua tabuada de multiplicação de 1 até 10.
// Utilizar estrutura de repetição for em conjunto com operadores aritméticos.
// Exemplo
// Entrada:
//  número: 5
// Saída :
//  5 x 1 = 5
//  5 x 2 = 10
//  …
//  5 x 10 = 50

#include <stdio.h>

int main()
{
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Utiliza um loop for para calcular e exibir a tabuada de multiplicação
    printf("\nTabuada de multiplicacao do numero %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}