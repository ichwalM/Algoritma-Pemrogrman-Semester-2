#include <iostream>
using namespace std;

class Lingkaran{
	private: 
		float jari;
	public:
		Lingkaran(float r){
			jari=r;
		}
		float getJari(){
//			return jari;
		}
		float getLuas(){
			return 3.14*jari*jari;
		}float getKeliling(){
			return 2*3.14*jari;
		}
		void tampil(){
			cout<<"Luas lingkaran	\t: "<<getLuas()<<endl;
			cout<<"Keliling lingkaran \t: "<<getKeliling()<<"\n\n";
		}
};

int main(){
	int r;
	char choice;
	while(true){
		cout<<"Masukkan nilai jari-jari lingkaran: ";cin>>r;
		Lingkaran hitum(r);
		hitum.tampil();
		cout<<"Apakah anda ingin mengulang program? (Y/N): ";
		cin>>choice;
		if(choice=='N' || choice=='n')
			return 0;
	}
}
