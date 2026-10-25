#include <stdio.h>
typedef struct
{
    int matricula;
    char nome[50];
    float nota;
} Aluno;
Aluno *buscarAluno(Aluno a[], int n, int m)
{
    for (int i = 0; i < n; i++)
        if (a[i].matricula == m)
            return &a[i];
    return NULL;
}
int main()
{
    Aluno a[5], *r;
    int m;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i].matricula);
        scanf(" %49[^\n]", a[i].nome);
        scanf("%f", &a[i].nota);
    }
    scanf("%d", &m);
    r = buscarAluno(a, 5, m);
    if (r)
        printf("Nome: %s\nNota: %.2f", r->nome, r->nota);
    else
        printf("Aluno nao encontrado");
    return 0;
}