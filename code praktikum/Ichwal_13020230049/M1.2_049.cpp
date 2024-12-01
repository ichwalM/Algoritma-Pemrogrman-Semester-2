#include <iostream>
using namespace std;
#define DEBUG_MODE 1
#define FILE_MODE 1

int main(){
	#ifdef DEBUG_MODE
		cout << "Program dijalankan dalam mode debug. "<<endl;
	#else
		cout << "Program dijalanan dalam mode relase. "<<endl;
	#endif
	#ifndef FILE_MODE
		cout << " File output tidak diaktifkan. "<< endl;
	#else
		cout << "File output diaktifkan. "<<endl;
	#endif
	return 0;
}
