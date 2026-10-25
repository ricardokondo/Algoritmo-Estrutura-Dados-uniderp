#include <stdio.h>

void hm(int minutos1, int *h, int *m) {
    *h = minutos1 / 60;
    *m = minutos1 % 60;
}

int main() {
    int minutos;
    int horas;
    int minutosRestantes;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    hm(minutos, &horas, &minutosRestantes);

    printf("\n%d minutos equivalem a:\n", minutos);
    printf("%d horas e %d minutos.\n", horas, minutosRestantes);

    return 0;
}
