// Leia dois números inteiros.
// Crie dois ponteiros, um para cada número, e calcule a soma utilizando exclusivamente os valores acessados pelos ponteiros.
// Entrada:
//  10
//  20
// Saída:
//  Soma = 30

#include <stdio.h>

int main()
{

    int num1, num2;
    int *ptr1, *ptr2;

    // Leitura dos números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Atribuição dos ponteiros
    ptr1 = &num1;
    ptr2 = &num2;

    // Cálculo da soma utilizando os valores acessados pelos ponteiros
    int soma = *ptr1 + *ptr2;

    // Exibição do resultado
    printf("Soma = %d\n", soma);

    return 0;
}