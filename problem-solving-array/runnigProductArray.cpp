#include<iostream>
using namespace std;

void runningProductArray(int arr[], int size) {
    int newArr[size] = {0};
    for(int i = 0; i < size; i++) {
        int prod = arr[i]*(i+1);
        newArr[i] = prod;
    }

    for(int i = 0; i < size; i++) {
        cout<<newArr[i]<<" ";
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

    runningProductArray(arr, size);

    return 0;
}