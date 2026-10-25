// Leia dois valores inteiros.
// Utilize ponteiros para acessar os valores e informe qual deles é o maior.
// Caso sejam iguais, apresente uma mensagem informando a igualdade.

#include <stdio.h>

int main()
{
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;

    // Solicita ao usuário que digite os valores inteiros
    printf("Digite o primeiro valor inteiro:\n");
    scanf("%d", ptrA);

    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", ptrB);

    // Compara os valores apontados pelos ponteiros e imprime o maior valor ou uma mensagem de igualdade
    if (*ptrA > *ptrB)
    {
        printf("O maior valor é: %d\n", *ptrA);
    }
    else if (*ptrA < *ptrB)
    {
        printf("O maior valor é: %d\n", *ptrB);
    }
    else
    {
        printf("Os valores são iguais.\n");
    }

    return 0;
}