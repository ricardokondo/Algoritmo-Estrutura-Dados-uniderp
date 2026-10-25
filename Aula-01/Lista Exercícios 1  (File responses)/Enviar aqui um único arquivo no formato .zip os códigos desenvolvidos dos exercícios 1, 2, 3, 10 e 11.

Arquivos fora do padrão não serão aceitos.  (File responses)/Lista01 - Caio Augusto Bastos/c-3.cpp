#include <stdio.h>

int main()
{
    int numeroA = 0, numeroB = 0;
    printf("Informe um número inteiro: ");
    scanf("%d", &numeroA);
    printf("Informe um número inteiro: ");
    scanf("%d", &numeroB);
    if(numeroA > numeroB)
    {
        printf("%d é maior que %d.", numeroA, numeroB);
    } else if(numeroA == numeroB)
    {
        printf("Os números são iguais.");
    } else
    {
        printf("%d é maior que %d.", numeroB, numeroA);
    }
    return 0;
}