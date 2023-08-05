#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int size;
    cout << "Enter the size of array Elements : " << endl;
    cin >> size;
    cout << "Enter array Elements : " << endl;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    reverse(arr, size);
    print(arr, size);

    return 0;
}
