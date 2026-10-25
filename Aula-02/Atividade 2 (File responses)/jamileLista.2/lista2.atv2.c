#include <iostream>
using namespace std;

int main() {
    int numero = 25;
    int *ponteiro = &numero;
    cout << "Valor da variavel: " << numero << '\n'
         << "Endereco da variavel: " << static_cast<void*>(&numero) << '\n'
         << "Endereco armazenado pelo ponteiro: " << static_cast<void*>(ponteiro) << '\n'
         << "Valor acessado pelo ponteiro: " << *ponteiro << '\n';
    return 0;
}
