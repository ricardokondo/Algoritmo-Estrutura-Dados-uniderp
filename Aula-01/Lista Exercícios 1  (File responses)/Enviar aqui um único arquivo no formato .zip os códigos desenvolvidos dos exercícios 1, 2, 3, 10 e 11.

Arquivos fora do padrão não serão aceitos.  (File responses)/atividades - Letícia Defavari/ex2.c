/******************************************************************************
2.Desenvolva um programa que leia três notas de um estudante e calcule sua média aritmética.
A média deve ser apresentada com duas casas decimais.
Exemplo:
1. Nota 1: 8.0
2. Nota 2: 7.5
3. Nota 3: 9.0
Saída:
Media = 8.17
*******************************************************************************/
#include <stdio.h>

float calculaMedia(int n1, int n2, int n3); // declarar função

int main()
{
    int nota1, nota2, nota3;
    printf("Digite suas notas: ");
    printf("\nNota 1: ");
    scanf("%d", &nota1);
    printf("\nNota 2: ");
    scanf("%d", &nota2);
    printf("\nNota 3: ");
    scanf("%d", &nota3);
    float result = calculaMedia(nota1, nota2, nota3); // passagem de valores por referência
    printf("\nSua media e %.2f", result);
    return 0;
}

// function tem valor de retorno
float calculaMedia(int n1, int n2, int n3) // escopo local - nada é armazenado na função
// não usar as mesmas variaveis
{
    float media = 0;
    media = (n1 + n2 + n3) / 3;
    return media;
}