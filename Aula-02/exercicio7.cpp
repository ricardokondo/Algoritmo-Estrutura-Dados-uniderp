// Crie uma função chamada trocar que receba dois números inteiros por referência e troque os valores armazenados entre eles.

#include <stdio.h>

// Função para trocar os valores de dois números inteiros por referência
void trocar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
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
    trocar(num1, num2);

    // Exibe os valores após a troca
    printf("Após a troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
