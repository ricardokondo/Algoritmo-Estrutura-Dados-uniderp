// Crie uma variável inteira inicialmente com valor 10.
// Crie um ponteiro que aponte para essa variável e, utilizando apenas o ponteiro, altere o valor da variável para 50.
// Apresente o valor antes e depois da alteração.

#include <stdio.h>

int main()
{
    int numero = 10;         // Declaração e atribuição de valor à variável inteira
    int *ponteiro = &numero; // Declaração do ponteiro que armazena o endereço da variável

    // Apresenta o valor armazenado na variável antes da alteração
    printf("Valor da variável antes da alteração: %d\n", numero);

    // Altera o valor da variável para 50 utilizando apenas o ponteiro
    *ponteiro = 50;

    // Apresenta o valor armazenado na variável depois da alteração
    printf("Valor da variável depois da alteração: %d\n", numero);

    return 0;
}