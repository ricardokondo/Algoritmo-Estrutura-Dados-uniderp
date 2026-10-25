// Leia dois números inteiros e troque os valores armazenados entre as duas variáveis.
// Este exercício servirá de preparação para compreender a necessidade de ponteiros em funções.

#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp = *a; // Armazena temporariamente o valor de a
    *a = *b;       // Atribui o valor de b para a
    *b = temp;     // Atribui o valor temporário (original de a) para b
}

int main()
{
    int num1, num2;

    // Solicita ao usuário que digite os valores inteiros
    printf("Digite o primeiro número inteiro:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro:\n");
    scanf("%d", &num2);

    // Exibe os valores antes da troca
    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

    // Chama a função para trocar os valores
    trocar(&num1, &num2);

    // Exibe os valores após a troca
    printf("Após a troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}