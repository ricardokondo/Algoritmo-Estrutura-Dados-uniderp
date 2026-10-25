#include <stdio.h>

void hm(int mnts, int *h, int *m)
{
    *h = mnts / 60;
    *m = mnts % 60;
}

int main()
{
    int mnts;
    int h, m;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &mnts);

    hm(mnts, &h, &m);

    printf("%d minutos = %d hora(s) e %d minuto(s)\n", mnts, h, m);

    return 0;
}
