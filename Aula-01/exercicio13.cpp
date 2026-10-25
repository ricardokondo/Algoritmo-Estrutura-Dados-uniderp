// Projete e implemente um programa em C que leia o raio de uma dada circunferência e calcule e imprima o perímetro e a área dessa circunferência. 𝝿 = 3.14
//	Fórmula: perímetro = 2𝝿 r2 ;  área = 𝝿 r2
//	Exemplo:
//		Raio = 2.00
//		Perímetro = 12.57
//		Área = 12.57

#include <stdio.h>

float calcularPerimetro(float raio)
{
    float PI = 3.14; // Constante para o valor de π
    float perimetro = 0;

    perimetro = 2 * PI * raio; // Calcula o perímetro usando a fórmula

    return perimetro;
}

float calcularArea(float raio)
{
    float PI = 3.14; // Constante para o valor de π
    float area = 0;

    area = PI * raio * raio; // Calcula a área usando a fórmula

    return area;
}

int main()
{
    float raio, perimetro, area;

    // Solicita ao usuário que insira o raio da circunferência
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    // Calcula o perímetro e a área chamando as funções correspondentes
    perimetro = calcularPerimetro(raio);
    area = calcularArea(raio);

    // Exibe os resultados com duas casas decimais
    printf("\nRaio = %.2f\n", raio);
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}