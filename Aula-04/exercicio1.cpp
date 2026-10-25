/**
 *
 * Escreva um programa que:
 leia a quantidade n de notas;
aloque dinamicamente um vetor de n valores float;
leia todas as notas;
calcule a média;
mostre as notas superiores à média;
libere a memória utilizada.
    Utilize a função malloc()

 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *notas;
    float soma = 0.0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    // Alocando dinamicamente um vetor de n valores float
    notas = (float *)malloc(n * sizeof(float));

    if (notas == NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    // Lendo todas as notas
    for (int i = 0; i < n; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Calculando a soma das notas
    }

    // Calculando a média
    media = soma / n;

    printf("Média das notas: %.2f\n", media);
    printf("Notas superiores à média:\n");

    // Mostrando as notas superiores à média
    for (int i = 0; i < n; i++)
    {
        if (notas[i] > media)
        {
            printf("%.2f ", notas[i]);
        }
    }
    printf("\n");

    // Liberando a memória utilizada
    free(notas);

    return 0;
}