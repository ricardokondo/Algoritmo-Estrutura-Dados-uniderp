#include <stdio.h>

int main() {
    int numero = 25;
    int *ponteiro = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", &numero);
    printf("Endereco armazenado pelo ponteiro: %p\n", ponteiro);
    printf("Valor acessado atraves do ponteiro: %d\n", *ponteiro);

    return 0;
}
