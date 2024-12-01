#include <iostream>
using namespace std;


void loop1(int ary[],int j){
	for(int i=0;i<j;i++){
		cout << ary[i]<<" ";
	}
}
void sort(int ary[],int leng){
	int tmp;
	for(int i=0;i<leng;i++){
		tmp=i;
		for(int j=i+1;j<leng;j++){
			if(ary[tmp]>ary[j]){
				tmp=j;
			}
		}if(tmp!=i){
			swap(ary[tmp],ary[i]);
		}cout<<ary[i]<<" ";
	}
}
int main() {
	int ary[]={6,5,4,9,7,1};
	int leng=sizeof(ary)/sizeof(*ary);
	cout << "sebelum : ";loop1(ary,leng);
	cout <<"\nSesudah : ";sort(ary,leng);
}
