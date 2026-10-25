#include <iostream>
using namespace std;

void dobrar(int *numero) {
    *numero *= 2;
}

int main() {
    int numero;
    cin >> numero;
    dobrar(&numero);
    cout << "Dobro = " << numero << '\n';
    return 0;
}
