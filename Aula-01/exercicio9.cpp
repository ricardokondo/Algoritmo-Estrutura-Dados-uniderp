// Solicite ao usuário uma nota entre 0 e 10.
// Enquanto o usuário informar um valor menor que 0 ou maior que 10, o programa deverá solicitar uma nova nota. Compreender situações em que não sabemos previamente quantas vezes uma repetição será necessária.
// Exemplo
// Digite uma nota: 15
// Nota invalida.
// Digite uma nota: -2
// Nota invalida.
// Digite uma nota: 8
// Nota registrada: 8.00

#include <stdio.h>

int main()
{
    float nota;

    // Solicita ao usuário que insira uma nota entre 0 e 10
    do
    {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        // Verifica se a nota é inválida
        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida.\n");
        }
    } while (nota < 0 || nota > 10); // Repete enquanto a nota for inválida

    // Exibe a nota registrada com duas casas decimais
    printf("Nota registrada: %.2f\n", nota);

    return 0;
}
