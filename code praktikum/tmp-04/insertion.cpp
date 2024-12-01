#include <iostream>
using namespace std;

void loop(int ary[],int leng){
	for(int i=0;i<leng;i++){
		cout<<ary[i]<<" ";
	}
}

void insert(int ary[],int leng){
	int i,tmp,j;
	for(int i=1;i<leng;i++){
		tmp=ary[i];
		j=i-1;
		while(j>=0&&ary[j]>tmp){
			ary[j+1]=ary[j];
			j=j-1;
		}
		ary[j+1]=tmp;
	}
}
int main(){
	int ary[]={4,6,7,2,1};
	int leng=sizeof(ary)/sizeof(*ary);
	cout<<"sebelum sort	: ";loop(ary,leng);
	insert(ary,leng);
	cout<<endl;
	cout<<"setelah sort	: ";loop(ary,leng);
}
