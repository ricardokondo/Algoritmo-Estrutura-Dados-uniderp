#include <stdio.h>

int main(void) {
    int horas, minutos, segundos;
    long long totalSegundos;

    printf("Digite as horas: ");
    if (scanf("%d", &horas) != 1 || horas < 0) {
        printf("As horas devem ser um valor inteiro nao negativo.\n");
        return 1;
    }

    printf("Digite os minutos: ");
    if (scanf("%d", &minutos) != 1 || minutos < 0 || minutos > 59) {
        printf("Os minutos devem estar entre 0 e 59.\n");
        return 1;
    }

    printf("Digite os segundos: ");
    if (scanf("%d", &segundos) != 1 || segundos < 0 || segundos > 59) {
        printf("Os segundos devem estar entre 0 e 59.\n");
        return 1;
    }

    totalSegundos = (long long) horas * 3600 + minutos * 60 + segundos;

    printf("Tempo equivalente = %lld segundos.\n", totalSegundos);

    return 0;
}
