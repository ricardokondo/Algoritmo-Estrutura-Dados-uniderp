#include <stdio.h>

int main() {
    int var = 25;
    int *ptr = &var;

    printf("Valor da var: %d\n", var);
    printf("Endereco da var: %p\n", (void*)&var);
    printf("Endereco armazenado pelo ptr: %p\n", (void*)ptr);
    printf("Valor acessado atraves do ptr: %d\n", *ptr);

    return 0;
}
