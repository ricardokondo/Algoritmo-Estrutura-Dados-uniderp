#include <stdio.h>

void troca(int *i, int *j) {
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Antes: x = %d, y = %d\n", x, y);

    troca(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}
