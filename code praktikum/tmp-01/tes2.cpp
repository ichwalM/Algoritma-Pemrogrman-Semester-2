#include <iostream>
using namespace std;

int main(){
	int ary[5]={};
	cout << ary[3];
	int iMin=0;
	for(int i=0;i<4;i++){
		if (ary[iMin]>ary[i+1]){
			
			iMin = i+1;
		}
	}
	cout << iMin;
}
