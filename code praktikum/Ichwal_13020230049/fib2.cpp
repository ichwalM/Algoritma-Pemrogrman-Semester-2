#include <iostream>
using namespace std;

int fib(int n){
	if(n<=1){
		return n;
	}else{
		return fib(n-1)+fib(n-2);  
	}
}
int main(){
	int n;
	cout << "Masukkan angka : ";cin>>n;
	cout << "Hasil : ";
	for(int i=1;i<n;i++){
		if(fib(i)>n)
			return 0;	
		cout << fib(i)<< " ";	
	}
}
