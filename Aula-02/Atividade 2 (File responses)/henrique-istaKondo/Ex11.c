#include <stdio.h>

void hm(int mnts, int *h, int *m) {
    *h = mnts / 60;
    *m = mnts % 60;
}

int main() {
    int minutos, horas, minutosRestantes;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    hm(minutos, &horas, &minutosRestantes);

    printf("%d minutos = %d hora(s) e %d minuto(s)\n", minutos, horas, minutosRestantes);

    return 0;
}
