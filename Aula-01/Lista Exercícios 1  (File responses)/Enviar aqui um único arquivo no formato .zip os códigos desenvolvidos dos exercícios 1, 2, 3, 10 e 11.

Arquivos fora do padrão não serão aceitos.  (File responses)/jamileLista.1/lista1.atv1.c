#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double altura;

    cout << "Nome: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cout << "Altura: ";
    cin >> altura;

    cout << "\nNome: " << nome << "\nIdade: " << idade
         << "\nAltura: " << altura << '\n';
    return 0;
}
