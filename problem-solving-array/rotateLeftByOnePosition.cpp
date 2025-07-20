#include<iostream>
using namespace std;

void rotateByOnePosition(int arr[], int size) {
    int temp = arr[0];
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    
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