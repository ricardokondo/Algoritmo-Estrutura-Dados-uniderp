// Crie uma função chamada dobrar que receba o endereço de uma variável inteira e altere seu valor para o dobro do valor original.

#include <stdio.h>

// Função para dobrar o valor de uma variável inteira através de seu endereço
void dobrar(int *num)
{
    *num = *num * 2; // Altera o valor da variável para o dobro do valor original
}

int main()
{
    int numero;

    // Solicita ao usuário que digite um valor inteiro
    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);

    // Exibe o valor antes de dobrar
    printf("Valor antes de dobrar: %d\n", numero);

    // Chama a função para dobrar o valor da variável
    dobrar(&numero);

    // Exibe o valor após dobrar
    printf("Valor após dobrar: %d\n", numero);

    return 0;
}