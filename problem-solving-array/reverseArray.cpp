#include<iostream>
using namespace std;

void reverseArrayElements(int arr[], int size) {
    for(int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-(i+1)];
        arr[size-(i+1)] = temp;
    }
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    reverseArrayElements(arr, size);

    return 0;
}