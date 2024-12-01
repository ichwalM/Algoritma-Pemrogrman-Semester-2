#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) 
        return n;
    else 
        return fibo(n - 1) + fibo(n - 2);
    
}
int main(){
	int n;
	cout << "Masukkan nilai batas : ";cin>>n;
	for(int i=1;i<n;i++){
		cout << fibo(i)<< " ";
		if(n<=fibo(i)){
			fibo(i)= n;
			break;
		}
	}
}
