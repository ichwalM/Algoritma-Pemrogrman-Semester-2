#include <iostream>
using namespace std;

void buble(int ary[],int leng){
	for(int i=0;i<leng-1;i++){
		for(int j=0;j<leng-i-1;j++){
			if(ary[j]>ary[j+1]){
				swap(ary[j],ary[j+1]);
			}
		}
	}
}
void loop(int ary[],int leng){
	for(int i=0;i<leng;i++){
		cout << ary[i]<<" ";
	}
}

int main(){
	int ary[]={5,4,2,3,1};
	int leng=sizeof(ary)/sizeof(*ary);
	cout << "Sebelum sorting : ";loop(ary,leng);
	buble(ary,leng);
	cout << "\nSesudah Sorting : ";loop(ary,leng);
	
	return 0;
}
