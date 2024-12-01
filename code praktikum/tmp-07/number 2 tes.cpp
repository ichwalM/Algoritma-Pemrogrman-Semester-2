#include <iostream>
using namespace std;

class Lingkaran {
private:
    double radius;

public:
    // Konstruktor untuk menginisialisasi radius
    Lingkaran(double r) {
        radius = r;
    }

    // Getter untuk radius
    double getRadius() const {
        return radius;
    }

    // Metode untuk menghitung luas
    double hitungLuas() const {
        return 3.14159 * radius * radius;
    }

    // Metode untuk menghitung keliling
    double hitungKeliling() const {
        return 2 * 3.14159 * radius;
    }

    // Metode untuk menampilkan informasi lingkaran
    void cetakInfo() const {
        cout << "Radius: " << radius << endl;
        cout << "Luas: " << hitungLuas() << endl;
        cout << "Keliling: " << hitungKeliling() << endl;
    }
};

int main() {
    // Membuat objek Lingkaran dengan radius tertentu
    double r;
    cout << "Masukkan radius lingkaran: ";
    cin >> r;

    Lingkaran lingkaran(r);

    // Menampilkan informasi lingkaran
    lingkaran.cetakInfo();

    return 0;
}

