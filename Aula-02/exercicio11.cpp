// Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o resultado de seus cálculos.
// Escreva uma função hm que converta minutos em horas-e- minutos.
// A função recebe um inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m,
// e atribui valores a essas variáveis de modo que m seja menor que 60 e que 60 * h + m seja igual a mnts.
// Escreva também uma função main que use a função hm.

#include <stdio.h>
#include <stdlib.h>

// funcao hm
void hm(int mnts, int *h, int *m)
{
    *h = mnts / 60; // Calcula o número de horas
    *m = mnts % 60; // Calcula o número de minutos restantes
}

// funcao principal
int main()
{
    int mnts, h, m;

    printf("Digite o número de minutos: ");
    scanf("%d", &mnts); // Lê o número de minutos

    hm(mnts, &h, &m); // Chama a função hm passando os endereços de h e m

    printf("%d minutos equivalem a %d horas e %d minutos.\n", mnts, h, m); // Imprime o resultado

    return 0;
}
