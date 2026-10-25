#include <iostream>
using namespace std;

int main() {
    double media;
    cin >> media;
    if (media >= 7) cout << "Situacao: Aprovado\n";
    else if (media >= 5) cout << "Situacao: Exame\n";
    else cout << "Situacao: Reprovado\n";
    return 0;
}
