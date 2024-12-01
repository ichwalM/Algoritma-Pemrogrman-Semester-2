#include <iostream>
using namespace std;

class Mobil{
//	private:
		string merk;
		int tahun_pembuatan;
		double harga;
	public:
		Mobil(string a, int b, double c){
			merk=a;
			tahun_pembuatan=b;
			harga=c;
		}
		void Merek(){
			cout<<"Mobil "<<merk<<", ";
		}
		void Tahun_pembuatan(){
			cout<<"Tahun Pembuatan "<<tahun_pembuatan<<", ";
		}
		void Harga(){
			cout<<"harga Rp"<<harga<<endl;
		}
	
};

int main(){
	Mobil Toyota("Toyota",2020,200000000);
	Mobil Honda("Honda",2019,180000000);
	Mobil Mazda("Mazda",2022,300000000);
	cout<<"Informasi Mobil:\n";
	Toyota.Merek();
	Toyota.Tahun_pembuatan();
	Toyota.Harga();
	Honda.Merek();
	Honda.Tahun_pembuatan();
	Honda.Harga();
	Mazda.Merek();
	Mazda.Tahun_pembuatan();
	Mazda.Harga();
}
