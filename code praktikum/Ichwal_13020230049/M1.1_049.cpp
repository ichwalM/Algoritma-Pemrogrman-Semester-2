#include <iostream>
using namespace std;

#define LUAS(r)(3.14*r*r)

int main(){
	float r;
	cout << "Masukkan jari-jari lingkaran: ";
	cin >>r;
	cout << "Luas Lingkaran adalah : "<<LUAS(r);
}
