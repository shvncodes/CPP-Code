#include<iostream>
using namespace std;

int sumOfElementsOfArray(int arr[], int size) {
    int sum = 0;
    for(int i =0; i <size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the lements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    cout<<"Sum of all the elements of array: "<<sumOfElementsOfArray(arr, size);

    return 0;
}