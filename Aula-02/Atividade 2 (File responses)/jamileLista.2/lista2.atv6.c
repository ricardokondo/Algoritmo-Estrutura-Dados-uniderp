#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "Depois da troca: A = " << a << ", B = " << b << '\n';
    return 0;
}
