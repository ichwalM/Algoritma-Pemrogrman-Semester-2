#include <iostream>
using namespace std;

class Contoh {
private:
    int x;
    int y;

public:
    // Konstruktor dengan parameter
//    Contoh(int a, int b) {
//        x = a;
//        y = b;
//    }

    // Getter untuk x
    int getX() const {
        return x;
    }

    // Getter untuk y
    int getY() const {
        return y;
    }

    // Method untuk menampilkan nilai x dan y
    void cetak() const {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    // Membuat objek Contoh
    Contoh obj(10, 20);

    // Menggunakan getter method untuk mendapatkan nilai x dan y
    cout << "Nilai x: " << obj.getX() << endl;
    cout << "Nilai y: " << obj.getY() << endl;

    // Menampilkan nilai x dan y menggunakan method cetak
    obj.cetak();

    return 0;
}

