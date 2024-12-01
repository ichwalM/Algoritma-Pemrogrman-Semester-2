#include <iostream>
using namespace std;

void merge(int ary[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = ary[l + i];
    for (j = 0; j < n2; j++)
        R[j] = ary[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ary[k] = L[i];
            i++;
        } else {
            ary[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        ary[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        ary[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int ary[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(ary, l, m);
        mergeSort(ary, m + 1, r);
        merge(ary, l, m, r);
    }
}

void printArray(int ary[], int leng) {
    for (int i = 0; i < leng; i++)
        cout << ary[i] << " ";
}

int main() {
    int ary[] = {1, 5, 3, 4, 2};
    int leng = sizeof(ary) / sizeof(*ary);

    cout << "Sebelum Sorting: ";
    printArray(ary, leng);
    cout << endl;

    mergeSort(ary, 0, leng - 1);

    cout << "Sesudah Sorting: ";
    printArray(ary, leng);

    return 0;
}

