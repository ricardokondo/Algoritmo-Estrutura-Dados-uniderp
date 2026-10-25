#include <iostream>
using namespace std;

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

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
    for (int i = 0; i < 5; ++i) {
        if (alunos[i].matricula == matricula) {
            cout << "Aluno encontrado:\nNome: " << alunos[i].nome
                 << "\nNota: " << alunos[i].nota << '\n';
            return 0;
        }
    }
    cout << "Aluno nao encontrado.\n";
    return 0;
}
