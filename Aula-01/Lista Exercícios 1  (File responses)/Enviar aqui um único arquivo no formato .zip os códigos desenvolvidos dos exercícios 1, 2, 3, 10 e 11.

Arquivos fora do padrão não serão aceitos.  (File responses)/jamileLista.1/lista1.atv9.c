#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double nota;
    do {
        cout << "Digite uma nota: ";
        cin >> nota;
        if (nota < 0 || nota > 10) cout << "Nota invalida.\n";
    } while (nota < 0 || nota > 10);
    cout << fixed << setprecision(2) << "Nota registrada: " << nota << '\n';
    return 0;
}
