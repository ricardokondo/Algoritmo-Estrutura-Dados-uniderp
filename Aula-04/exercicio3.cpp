/**
 * Cópia de vetor.
 * Crie dois vetores dinâmicos do mesmo tamanho.
 * Preencha o primeiro vetor e copie seus elementos para o segundo.
 * Ao final, mostre os dois vetores e libere a memória utilizada.

 */

#include <stdio.h>
#include <stdlib.h>

// funcao preencheVetor: preenche o vetor com n números reais fornecidos pelo usuário
void preencheVetor(float *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

// funcao copiaVetor: copia os elementos do vetor origem para o vetor destino
void copiaVetor(float *origem, float *destino, int n)
{
    for (int i = 0; i < n; i++)
    {
        destino[i] = origem[i];
    }
}

// funcao main: ponto de entrada do programa
int main()
{
    int n;
    printf("Digite a quantidade de números: ");
    scanf("%d", &n); // Lê a quantidade de números

    // Aloca dinamicamente dois vetores de n números reais (float)
    float *vetor1 = (float *)malloc(n * sizeof(float));
    float *vetor2 = (float *)malloc(n * sizeof(float));
    if (vetor1 == NULL || vetor2 == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1; // Sai do programa em caso de erro na alocação
    }

    preencheVetor(vetor1, n); // Preenche o primeiro vetor com os valores fornecidos pelo usuário

    copiaVetor(vetor1, vetor2, n); // Copia os elementos do primeiro vetor para o segundo

    // Mostra os dois vetores
    printf("Vetor 1:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");

    // Libera a memória utilizada
    free(vetor1);
    free(vetor2);

    return 0;
}