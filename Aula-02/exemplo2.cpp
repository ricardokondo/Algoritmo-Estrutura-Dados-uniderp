#include <stdio.h>

int main()
{
    int x = 2;
    int *ptr;
    ptr = &x; // ptr recebe o endereço de x

    printf("O valor de x: %d\n", x);
    printf("O endereco de x: %d\n", &x);                             // Imprime o endereço de x
    printf("Conteudo armazenado no ponteiro = %d\n", ptr);           // Imprime o valor de ptr (endereço de x)
    printf("Conteudo do local onde o ponteiro aponta = %d\n", *ptr); // Imprime o valor armazenado no endereço apontado por ptr (valor de x)

    return 0;
}