#include <iostream>
using namespace std;

void looping1(int ary[],int lenght){
	cout << "Before : ";
	for(int i=0;i<lenght;i++){
		cout<<ary[i] << " ";
	}
}
void selection(intary[], int lenght){
	cout << "After : ";
	for(int i=0;i<lenght-1;i++){
		if(ary[i]>ary[i+1]){
			swap(ary[i],ary[i+1]);
		}
	}for(int i=0;i<lenght-1;i++){
		cout << ary[i];
	}
void looping2(int ary[], lenght){
	int tmp;
	for(int i=0;i<lenght-1;i++){
		tmp=i;
		for(int j=i;j<lenght+1;j++){
			if(ary[j]<ary[tmp]){
				swap(ary[tmp],ary[j]);
			}
		}
	}
}


int main(){
	int ary[]={6,4,3,2,9};
	int j = sizeof(ary)/sizeof(*ary);
//	belum selection
	looping1(ary, j);
	cout << "\n";
//	selectionSort(ary,j);
	looping2(ary,j);
	
}















