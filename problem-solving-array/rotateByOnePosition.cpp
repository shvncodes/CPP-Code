#include<iostream>
using namespace std;

void rotateByOnePosition(int arr[], int size) {
    int temp = arr[size-1];
    for(int i = size-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>> size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    rotateByOnePosition(arr, size);

    return 0;
}