#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long soma = 0;
    for (int i = 1; i <= n; ++i) soma += i;
    cout << "Soma = " << soma << '\n';
    return 0;
}
