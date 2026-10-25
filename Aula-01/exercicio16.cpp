// Crie um vetor capaz de armazenar cinco números inteiros.
// O programa deverá:
// Ler cinco números;
// Armazená-los no vetor;
// Apresentar todos os valores armazenados.

#include <stdio.h>

int main()
{
    int vetor[5];
    int i;

    // Ler cinco números
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Apresentar todos os valores armazenados
    printf("Valores armazenados no vetor:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}