#include <stdio.h>

int main() {

    int numero1;
    int numero2;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("%d é maior que %d", numero1, numero2);
    }
    else if (numero2 > numero1) {
        printf("%d é maior que %d", numero2, numero1);
    }
    else {
        printf("Os dois números são iguais.");
    }

    return 0;
}