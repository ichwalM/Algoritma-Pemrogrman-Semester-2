#include <iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); 
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high);
    }
}
void loopTampil(int ary[],int leng){
    for(int i=0;i<leng;i++){
        cout << ary[i] << " ";
    }
}
int main() {
    int arr[] = {9,4,2,7,10,1,5};
    int leng = sizeof(arr) / sizeof(arr[0]);
    cout << "Array sebelum sort: ";loopTampil(arr,leng);
    quicksort(arr, 0, leng - 1);
    cout << "\nArray sesudah sort: ";loopTampil(arr,leng);
    return 0;
}

