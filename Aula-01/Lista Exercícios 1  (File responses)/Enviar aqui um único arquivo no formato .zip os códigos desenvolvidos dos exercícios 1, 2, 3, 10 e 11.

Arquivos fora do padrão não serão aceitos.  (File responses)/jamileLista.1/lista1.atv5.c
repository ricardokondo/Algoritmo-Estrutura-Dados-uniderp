#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;
    cout << "O numero " << numero << " e "
         << (numero % 2 == 0 ? "par.\n" : "impar.\n");
    return 0;
}
