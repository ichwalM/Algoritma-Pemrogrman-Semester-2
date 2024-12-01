#include <iostream>
using namespace std;

void magrge1(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void marge2(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        marge2(arr, left, mid);
        marge2(arr, mid + 1, right);
        magrge1(arr, left, mid, right);
    }
}
void tampilkan(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {3,2,4,5,1,7,8};
    int leng = sizeof(arr) / sizeof(arr[0]);
    cout << "Array sebelum:";
    tampilkan(arr, leng);
    marge2(arr, 0, leng - 1);
    cout << "Array setelah:";
    tampilkan(arr, leng);
    return 0;
}

