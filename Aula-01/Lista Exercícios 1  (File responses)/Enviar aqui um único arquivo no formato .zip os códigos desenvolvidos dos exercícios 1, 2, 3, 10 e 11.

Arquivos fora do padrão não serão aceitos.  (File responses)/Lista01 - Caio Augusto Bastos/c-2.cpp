#include <stdio.h>

int main()
{
    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
    printf("Informe a 1º nota: ");
    scanf("%f", &nota1);
    printf("\nInforme a 2º nota: ");
    scanf("%f", &nota2);
    printf("\nInforme a 3º nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("\nA média das notas apresentadas é: %.2f", media);
    return 0;
}