#include <stdio.h>

int main() {
    const float PI = 3.14f;
    float raio, perimetro, area;

    printf("Raio = ");
    scanf("%f", &raio);

    if (raio < 0) {
        printf("O raio nao pode ser negativo.\n");
        return 0;
    }

    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}
