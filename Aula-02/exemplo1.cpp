// Utilizamos o operador (&) para conhecer e acessar o endereço de uma variável na memória.

#include <stdio.h>

int main()
{
    int x = 2;

    printf("O valor de x: %d\n", x);
    printf("O endereco de x: %d\n", &x); // Im

    return 0;
}