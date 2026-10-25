#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int *pa = &a, *pb = &b;
    if (*pa > *pb) cout << *pa << " e maior.\n";
    else if (*pb > *pa) cout << *pb << " e maior.\n";
    else cout << "Os valores sao iguais.\n";
    return 0;
}
