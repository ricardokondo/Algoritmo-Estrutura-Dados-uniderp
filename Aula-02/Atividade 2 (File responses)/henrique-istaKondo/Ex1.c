#include <stdio.h>

int main() {
    int numero = 15; // valor atribuido a variavel

    printf("Valor armazenado na variavel: %d\n", numero);
    printf("Endereco de memoria da variavel: %p\n", (void*)&numero);

    return 0;
}
