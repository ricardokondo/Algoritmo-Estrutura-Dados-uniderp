#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int *ponteiro = &numero;
    cout << "Antes: " << numero << '\n';
    *ponteiro = 50;
    cout << "Depois: " << numero << '\n';
    return 0;
}
