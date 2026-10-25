#include <iostream>
using namespace std;

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

Aluno *buscarAluno(Aluno alunos[], int tamanho, int matricula) {
    for (int i = 0; i < tamanho; ++i)
        if (alunos[i].matricula == matricula) return &alunos[i];
    return NULL;
}

int main() {
    Aluno alunos[5];
    for (int i = 0; i < 5; ++i) {
        cin >> alunos[i].matricula;
        cin.ignore();
        cin.getline(alunos[i].nome, 50);
        cin >> alunos[i].nota;
    }

    int matricula;
    cin >> matricula;
    Aluno *resultado = buscarAluno(alunos, 5, matricula);
    if (resultado != NULL)
        cout << "Nome: " << resultado->nome << "\nNota: " << resultado->nota << '\n';
    else
        cout << "Aluno nao encontrado.\n";
    return 0;
}
