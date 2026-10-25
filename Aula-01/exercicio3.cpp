// Leia dois números inteiros e informe:
// qual deles é o maior;
// ou se os dois números são iguais.
// Exemplos
// Entrada:
//  10
//  7
// Saída:
//  10 e maior que 7.
// Entrada:
//  5
//  5
// Saída:
//  Os números são iguais.

#include <stdio.h>

int main()
{
    int num1, num2;

    // Solicita ao usuário os dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Compara os números e exibe o resultado
    if (num1 > num2)
    {
        printf("%d é maior que %d.\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d é maior que %d.\n", num2, num1);
    }
    else
    {
        printf("Os números são iguais.\n");
    }

    return 0;
}