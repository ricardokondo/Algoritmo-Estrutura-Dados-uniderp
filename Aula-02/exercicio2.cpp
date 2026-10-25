// Declare uma variável inteira com valor 25 e um ponteiro que armazene o endereço dessa variável.
// O programa deverá apresentar:
// o valor da variável;
// o endereço da variável;
// o endereço armazenado pelo ponteiro;
// o valor acessado através do ponteiro.

#include <stdio.h>

int main()
{
    int numero = 25;         // Declaração e atribuição de valor à variável inteira
    int *ponteiro = &numero; // Declaração do ponteiro que armazena o endereço da variável

    // Apresenta o valor armazenado na variável
    printf("Valor da variável: %d\n", numero);

    // Apresenta o endereço de memória da variável
    printf("Endereço da variável: %p\n", &numero);

    // Apresenta o endereço armazenado pelo ponteiro
    printf("Endereço armazenado pelo ponteiro: %p\n", ponteiro);

    // Apresenta o valor acessado através do ponteiro
    printf("Valor acessado através do ponteiro: %d\n", *ponteiro);

    return 0;
}