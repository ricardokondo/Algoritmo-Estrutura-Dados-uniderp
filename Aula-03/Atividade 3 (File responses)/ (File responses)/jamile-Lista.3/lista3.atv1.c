#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Aluno {
    char nome[100];
    int idade;
    float nota1;
    float nota2;
};

int main() {
    Aluno aluno;
    cout << "Nome: ";
    cin.getline(aluno.nome, 100);
    cout << "Idade: ";
    cin >> aluno.idade;
    cout << "Nota 1: ";
    cin >> aluno.nota1;
    cout << "Nota 2: ";
    cin >> aluno.nota2;

    float media = (aluno.nota1 + aluno.nota2) / 2;
    cout << fixed << setprecision(2)
         << "\nNome: " << aluno.nome << "\nIdade: " << aluno.idade
         << "\nNota 1: " << aluno.nota1 << "\nNota 2: " << aluno.nota2
         << "\nMedia: " << media
         << "\nSituacao: " << (media >= 6 ? "Aprovado" : "Reprovado") << '\n';
    return 0;
}
