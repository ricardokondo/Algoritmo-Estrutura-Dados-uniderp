//2,3,7,11,12
#include<stdio.h>
#include<stdlib.h>


void hm(int mnts, int *h, int *m) {
    *h = mnts / 60; 
    *m = mnts % 60; 
}

int main() {
    int minutosTotais = 145;
    int h, m;

    hm(minutosTotais, &h, &m);

    printf("%d minutos equivalem a %d hora(s) e %d minuto(s).\n", minutosTotais, h, m);
    printf("Verificacao (60*%d + %d): %d\n", h, m, (60 * h + m));

    return 0;
}
