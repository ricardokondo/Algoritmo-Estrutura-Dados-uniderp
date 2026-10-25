#include <stdio.h>

void trocar(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o valor de x: ")
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    
    trocar(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);


    return 0;
}
