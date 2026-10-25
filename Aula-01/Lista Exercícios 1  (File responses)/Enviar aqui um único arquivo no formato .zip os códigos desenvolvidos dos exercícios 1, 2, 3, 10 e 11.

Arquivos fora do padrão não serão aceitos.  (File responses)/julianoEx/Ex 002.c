#include <stdio.h>

int main() {
    float nota, ttnota = 0, media;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        ttnota = ttnota + nota;
    }

    media = ttnota / 3.0;

    printf("Media = %.2f\n", media);

    return 0;
}
