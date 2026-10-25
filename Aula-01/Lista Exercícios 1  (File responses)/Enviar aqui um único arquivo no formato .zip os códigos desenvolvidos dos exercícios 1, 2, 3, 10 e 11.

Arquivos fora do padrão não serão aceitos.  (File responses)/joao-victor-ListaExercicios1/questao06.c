#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d", i);

        if (i < 10) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
