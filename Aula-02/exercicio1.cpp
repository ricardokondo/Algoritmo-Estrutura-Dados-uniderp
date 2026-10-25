// Desenvolva um programa que declare uma variável inteira, atribua um valor a ela e apresente :
// o valor armazenado na variável;
// o endereço de memória da variável.

#include <stdio.h>

int main()
{
    int numero = 42; // Declaração e atribuição de valor à variável inteira

    // Apresenta o valor armazenado na variável
    printf("Valor armazenado na variável: %d\n", numero);

    // Apresenta o endereço de memória da variável
    printf("Endereço de memória da variável: %p\n", &numero);

    return 0;
}