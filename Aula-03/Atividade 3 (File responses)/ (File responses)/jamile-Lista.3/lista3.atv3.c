#include <iostream>
using namespace std;

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoa;
    Pessoa *ptr = &pessoa;

    cout << "Nome: ";
    cin.getline(ptr->nome, 50);
    cout << "Idade: ";
    cin >> ptr->idade;

    cout << "\nNome: " << ptr->nome << "\nIdade: " << ptr->idade << '\n';
    return 0;
}
