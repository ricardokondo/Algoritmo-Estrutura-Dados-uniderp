#include <iostream>
using namespace std;

void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    trocar(a, b);
    cout << "A = " << a << "\nB = " << b << '\n';
    return 0;
}
