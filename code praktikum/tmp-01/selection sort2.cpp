#include <iostream>
using namespace std;

void selec(int ary[],int leng){
	int swp=1;
	int comp=0;
	for(int i=0;i<leng;i++){
		int tmp=i;
		for(int j=i+1;j<leng;j++){
			comp++;
			if(ary[tmp]>ary[j]){
				tmp=j;
			}
		}if(tmp!=i){
			swap(ary[tmp],ary[i]);
			swp++;
		}
	}
	for(int j=0;j<leng;j++) cout<< ary[j]<< " ";
	cout<<endl<<"Number of comparisons: "<<comp<<endl;
	cout<<"Number of swaps: "<<swp;
}

int main(){
	int ary[]={10,5,8,3,2};
	int leng= sizeof(ary)/sizeof(*ary);
	cout<<"Sorted array: ";selec(ary,leng);
}
