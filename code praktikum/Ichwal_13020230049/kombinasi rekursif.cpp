#include <iostream>
using namespace std;

int hitungFactorial(int input) {
    if (input > 1)
        return input * hitungFactorial(input - 1);
    else
        return 1;
}
int main() {
    int n, r;
    cout << "Masukkan nilai n: ";cin >> n;
    cout << "Masukkan nilai r: ";cin >> r;
    int kombinasi = hitungFactorial(n)/(hitungFactorial(r)*hitungFactorial(n - r));
    cout << "C(" << n << "," << r << ") = " << kombinasi << endl;
    return 0;
}

