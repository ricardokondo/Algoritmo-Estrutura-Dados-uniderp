#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    cout << "Valor: " << numero << '\n';
    cout << "Endereco: " << static_cast<void*>(&numero) << '\n';
    return 0;
}
