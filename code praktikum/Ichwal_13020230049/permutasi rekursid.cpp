#include <iostream>
using namespace std;

int permutasi(int n, int r){
	if(r==0)
		return 1;
	else
		return n/permutasi(n-1,r-1);
}

int main(){
	int n,r;
	cout << "masukkan nilai n : ";cin>>n;
	cout << "Masukkan nilai r : ";cin>>r;
	cout << "("<<n<<","<<r<<") = "<<permutasi(n,r);
}
