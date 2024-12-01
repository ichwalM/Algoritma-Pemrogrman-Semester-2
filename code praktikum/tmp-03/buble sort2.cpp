#include <iostream>
using namespace std;

int input(int ary[],int leng){
	cout<<endl;
	for(int i=0;i<leng;i++){
		cout <<"Masukkan data ke-"<<i+1<<" = ";cin>>ary[i];
	}return ary[leng];
}
void buble(int ary[],int leng){
	int comp=0,swp=0;
	cout<<"\nProses Bubble Sort\n";
	for(int i=0;i<leng-1;i++){
		cout<<"Literasi "<<i+1<<":";
		for(int j=0;j<leng-i-1;j++){
			comp++;
			if(ary[j]>ary[j+1]){
				swap(ary[j],ary[j+1]);
				swp++;
			}
		}for(int j=0;j<leng;j++)cout<<" ["<<ary[j]<<"]"<<" ";
		cout<<endl;
	}cout<<"\nData yang telah di urutkan: ";
	for(int i=0;i<leng;i++)cout<<ary[i]<<" ";
	cout<<"\nJumlah perbandingan: "<<comp;
	cout<<"\nJumlah pertukaran: "<<swp<<endl;
}
int main(){
	int leng;
	cout << "Masukkan jumlah data = ";cin>>leng;
	int ary[leng];
	input (ary,leng);
	buble (ary,leng);
}

