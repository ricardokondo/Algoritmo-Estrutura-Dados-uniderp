#include <stdio.h>

/* ========== Exercício 2 ========== */
void exercicio2(void) {
    int x = 25;
    int *p = &x;   /* ponteiro que armazena o endereço de x */

    printf("=== Exercicio 2 ===\n");
    printf("Valor da variavel: %d\n", x);
    printf("Endereco da variavel: %p\n", (void*)&x);
    printf("Endereco armazenado pelo ponteiro: %p\n", (void*)p);
    printf("Valor acessado atraves do ponteiro: %d\n\n", *p);
}

/* ========== Exercício 3 ========== */
void exercicio3(void) {
    int y = 10;
    int *ptr = &y;

    printf("=== Exercicio 3 ===\n");
    printf("Valor antes da alteracao: %d\n", y);

    *ptr = 50;   /* altera o valor usando apenas o ponteiro */

    printf("Valor depois da alteracao: %d\n\n", y);
}

/* ========== Exercício 7 - Função trocar ========== */
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* ========== Exercício 11 - Função hm (horas e minutos) ========== */
void hm(int mnts, int *h, int *m) {
    *h = mnts / 60;
    *m = mnts % 60;
}

/* ========== Exercício 12 - Função mm (mínimo e máximo) ========== */
void mm(int v[], int n, int *min, int *max) {
    int i;
    *min = v[0];
    *max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) *min = v[i];
        if (v[i] > *max) *max = v[i];
    }
}

/* ========== main ========== */
int main(void) {
    int a, b, minutos, horas, mins, n, minimo, maximo, i;
    int vetor[7];

    /* Exercicios 2 e 3 */
    exercicio2();
    exercicio3();

    /* Teste da funcao trocar (Exercicio 7) */
    printf("=== Exercicio 7 - Funcao trocar ===\n");
    a = 10;
    b = 20;
    printf("Antes: a = %d, b = %d\n", a, b);
    trocar(&a, &b);
    printf("Depois: a = %d, b = %d\n\n", a, b);

    /* Teste da funcao hm (Exercicio 11) */
    printf("=== Exercicio 11 - Funcao hm ===\n");
    minutos = 135;
    hm(minutos, &horas, &mins);
    printf("%d minutos = %d hora(s) e %d minuto(s)\n\n", minutos, horas, mins);

    /* Teste da funcao mm (Exercicio 12) */
    printf("=== Exercicio 12 - Funcao mm ===\n");
    vetor[0] = 7;
    vetor[1] = 2;
    vetor[2] = 9;
    vetor[3] = 4;
    vetor[4] = 1;
    vetor[5] = 8;
    vetor[6] = 3;
    n = 7;

    mm(vetor, n, &minimo, &maximo);
    printf("Vetor: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMinimo = %d\n", minimo);
    printf("Maximo = %d\n", maximo);

    return 0;
}
