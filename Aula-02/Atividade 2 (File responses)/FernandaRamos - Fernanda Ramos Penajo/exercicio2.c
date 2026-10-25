#include <stdio.h>

int main()
{
    int x = 25;
    int *p = &x;

    printf("Valor da variavel: %d\n", x);
    printf("Endereco da variavel: %p\n", (void *)&x);
    printf("Endereco armazenado pelo ponteiro: %p\n", (void *)p);
    printf("Valor acessado atraves do ponteiro: %d\n", *p);

    return 0;
}
