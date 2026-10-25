#include <stdio.h>
typedef struct
{
    int matricula;
    char nome[50];
    float nota;
} Aluno;
int main()
{
    Aluno a[5];
    int m, ok = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i].matricula);
        scanf(" %49[^\n]", a[i].nome);
        scanf("%f", &a[i].nota);
    }
    scanf("%d", &m);
    for (int i = 0; i < 5; i++)
        if (a[i].matricula == m)
        {
            printf("Aluno encontrado:\nNome: %s\nNota: %.2f", a[i].nome, a[i].nota);
            ok = 1;
        }
    if (!ok)
        printf("Aluno nao encontrado");
    return 0;
}