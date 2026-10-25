#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int *pa = &a, *pb = &b;
    cout << "Soma = " << *pa + *pb << '\n';
    return 0;
}
