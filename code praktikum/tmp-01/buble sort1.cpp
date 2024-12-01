#include <iostream>
using namespace std;

void loop1(int ary[],int j);
void buble(int ary[],int leng);
int main(){
	cout << "buble sort\n";
	int ary[]={5,4,1,2,6,9,3};
	int leng = sizeof(ary)/sizeof(*ary);
	cout << "lenght arry: "<<leng;
	cout << "\nAfter: ";
	loop1(ary,leng);
	cout << "\n------------------\n";
	cout <<"Before: ";
	buble(ary,leng);
	return 0;
}
void loop1(int ary[], int j){
	for(int i=0;i<j;i++){
		cout << ary[i]<<" ";
	}
}
void buble(int ary[],int leng){
	int tmp;
	for (int i=0;i<leng;i++){
		tmp=i;
		for (int j=i+1;j<leng;j++){
			if(ary[j]<ary[tmp]){
				tmp=j;
			}
		}
		if(tmp!=i){
			swap(ary[tmp],ary[i]);
		}
		cout << ary[i]<<" ";
	}
}
