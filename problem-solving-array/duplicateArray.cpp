#include<iostream>
using namespace std;

void duplicateArray(int arr[], int size) {
    int newArray[size];
    for(int i = 0; i < size; i++) {
       newArray[i] = arr[i];
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

    duplicateArray(arr, size);
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}