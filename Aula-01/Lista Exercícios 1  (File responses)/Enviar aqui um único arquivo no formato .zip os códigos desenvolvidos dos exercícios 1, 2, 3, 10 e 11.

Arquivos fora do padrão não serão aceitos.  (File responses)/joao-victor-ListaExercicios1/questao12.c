#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int totalSegundos;

    printf("Horas: ");
    scanf("%d", &horas);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("Segundos: ");
    scanf("%d", &segundos);

    if (horas < 0 || minutos < 0 || segundos < 0 ||
        minutos >= 60 || segundos >= 60) {
        printf("Valores de tempo invalidos.\n");
        return 0;
    }

    totalSegundos = horas * 3600 + minutos * 60 + segundos;

    printf("Tempo equivalente em segundos = %d\n", totalSegundos);

    return 0;
}
