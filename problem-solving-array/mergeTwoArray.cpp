#include<iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int size1, int size2) {
    int newArr[size1 + size2]; 
    for(int i = 0; i < size1; i++) {
        newArr[i] = arr1[i];
    }

    for(int j = 0; j < size2; j++) {
        newArr[size1+j] = arr2[j];
    }

    for(int k = 0; k < size1+size2; k++) {
        cout<<newArr[k]<<" ";
    }
}

int main() {
    int size1;
    cout<<"Enter the size of array1: ";
    cin>>size1;

    int arr1[100];
    cout<<"Enter the elements of array1: ";
    for(int i = 0; i < size1; i++) {
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of array2: ";
    cin>>size2;

    int arr2[100];
    cout<<"Enter the elements of array2: ";
    for(int i = 0; i < size2; i++) {
        cin>>arr2[i];
    }

    mergeArray(arr1, arr2, size1, size2);

    return 0;
}