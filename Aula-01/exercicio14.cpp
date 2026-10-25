// Projete e implemente um programa que leia dois inteiros A e B. Então calcule a divisão do maior pelo menor e imprima o quociente e o resto da divisão.
// Exemplo:
// Entrada:
// Leia dois números inteiros 7 3
// A = 7
// B = 3
// Saída:
// 7 dividido por 3 = 2 e resto = 1

#include <stdio.h>

float calcularQuociente(int maior, int menor)
{
    float quociente = 0;

    // Verifica se o menor número é diferente de zero para evitar divisão por zero
    if (menor != 0)
    {
        quociente = (float)maior / menor; // Calcula o quociente da divisão
    }
    else
    {
        printf("Erro: Divisão por zero não é permitida.\n");
    }

    return quociente; // Retorna o quociente
}

int main()
{
    int A, B, resto;
    int maior, menor;
    float quociente;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &A);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &B);

    // Determinar o maior e o menor
    if (A > B)
    {
        maior = A;
        menor = B;
    }
    else
    {
        maior = B;
        menor = A;
    }

    // Calcula o quociente e o resto da divisão
    quociente = calcularQuociente(maior, menor);
    resto = maior % menor;

    if (menor != 0)
    {
        printf("%d dividido por %d = %.2f e resto = %d\n", maior, menor, quociente, resto);
    }

    return 0;
}
