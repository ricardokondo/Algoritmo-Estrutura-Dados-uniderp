#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) cout << a << " e maior que " << b << ".\n";
    else if (b > a) cout << b << " e maior que " << a << ".\n";
    else cout << "Os numeros sao iguais.\n";
    return 0;
}
