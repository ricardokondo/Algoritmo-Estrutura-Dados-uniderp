// Crie um programa para converter o tempo medido em horas, minutos e segundos em seu equivalente em segundos.

#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos)
{
    int totalSegundos;
    totalSegundos = (horas * 3600) + (minutos * 60) + segundos; // Converte horas e minutos para segundos e soma com os segundos

    return totalSegundos; // Retorna o total de segundos
}

int main()
{
    int horas, minutos, segundos, totalSegundos;

    // Solicita ao usuário que insira o tempo em horas, minutos e segundos
    printf("Digite o tempo em horas: ");
    scanf("%d", &horas);

    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    // Calcula o tempo total em segundos chamando a função de conversão
    totalSegundos = converterParaSegundos(horas, minutos, segundos);

    // Exibe o resultado da conversão
    printf("\nO tempo total em segundos e: %d\n", totalSegundos);

    return 0;
}