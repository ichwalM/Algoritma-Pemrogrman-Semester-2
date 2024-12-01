#include <iostream>
using namespace std;

#define VERSI "1.0"
#define NAMA "Ichwal"
#ifndef NAMA
	#error "Konstanta Nama belum didefinisikan"
#endif
int main(){
	cout << "Program versi "<< VERSI << endl;
	cout << "Nama pengguna: " << NAMA << endl;
	return 0;
}
